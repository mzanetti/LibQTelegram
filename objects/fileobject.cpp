#include "fileobject.h"
#include "../types/telegramhelper.h"
#include <QDir>

#define BLOCK_SIZE (128 * 1024)

FileObject::FileObject(const QString &storagepath, QObject *parent): QObject(parent), _storagepath(storagepath), _autodownload(false)
{
    this->_downloadmode = FileObject::None;
    this->_document = NULL;
    this->_locthumbnail = NULL;
    this->_locfile = NULL;
    this->_inputfilelocation = NULL;
    this->_dcsession = NULL;
    this->_file = NULL;
    this->_filesize = 0;

    connect(this, &FileObject::filePathChanged, this, &FileObject::downloadedChanged);
    connect(this, &FileObject::thumbnailChanged, this, &FileObject::hasThumbnailChanged);
}

Document *FileObject::document() const
{
    return this->_document;
}

bool FileObject::downloading() const
{
    return (this->_downloadmode == FileObject::DownloadThumbnail) || (this->_downloadmode == FileObject::Download);
}

bool FileObject::downloaded() const
{
    return !this->_filepath.isEmpty();
}

bool FileObject::hasThumbnail() const
{
    return !this->_thumbnail.isEmpty();
}

QSize FileObject::imageSize() const
{
    return this->_imagesize;
}

QString FileObject::thumbnail() const
{
    return this->_thumbnail;
}

QString FileObject::filePath() const
{
    return this->_filepath;
}

QString FileObject::fileName() const
{
    return this->_filename;
}

QString FileObject::fileId() const
{
    return this->_fileid;
}

QString FileObject::thumbnailId() const
{
    return this->_thumbnailid;
}

TLInt FileObject::fileSize() const
{
    return this->_filesize;
}

void FileObject::setAutoDownload(bool autodownload)
{
    this->_autodownload = autodownload;
}

void FileObject::setDocument(Document *document)
{
    if(this->_document == document)
        return;

    this->_document = document;
    this->setFileSize(document->size());

    if(document->thumb())
        this->_locthumbnail = document->thumb()->location();

    DocumentAttribute* attribute =  TelegramHelper::documentHas(document, TLTypes::DocumentAttributeImageSize);

    if(attribute)
        this->setImageSize(QSize(attribute->w(), attribute->h()));

    attribute =  TelegramHelper::documentHas(document, TLTypes::DocumentAttributeVideo);

    if(attribute)
        this->setImageSize(QSize(attribute->w(), attribute->h()));

    attribute =  TelegramHelper::documentHas(document, TLTypes::DocumentAttributeFilename);

    if(attribute)
        this->setFileName(attribute->fileName());
}

void FileObject::setFileSize(TLInt filesize)
{
    if(this->_filesize == filesize)
        return;

    this->_filesize = filesize;
    emit fileSizeChanged();
}

void FileObject::setFileName(const QString &filename)
{
    if(this->_filename == filename)
        return;

    this->_filename = filename;
    emit fileNameChanged();
}

void FileObject::setImageSize(const QSize &imagesize)
{
    if(this->_imagesize == imagesize)
        return;

    this->_imagesize = imagesize;
    emit imageSizeChanged();
}

void FileObject::setThumbnailLocation(FileLocation *filelocation)
{
    this->_locthumbnail = filelocation;
}

void FileObject::setFileLocation(FileLocation *filelocation)
{
    this->_locfile = filelocation;
}

void FileObject::setFileId(const QString &fileid)
{
    this->_fileid = fileid;
}

void FileObject::setThumbnailId(const QString &thumbnailid)
{
    this->_thumbnailid = thumbnailid;
}

void FileObject::downloadThumbnail()
{
    if(this->_autodownload)
    {
        this->download();
        return;
    }

    if(!this->_locthumbnail || (this->_locthumbnail->constructorId() == TLTypes::FileLocationUnavailable))
        return;

    this->_inputfilelocation = TelegramHelper::inputFileLocation(this->_locthumbnail);
    this->setDownloadMode(FileObject::DownloadThumbnail);
    this->createDownloadSession(this->_locthumbnail->dcId());
}

bool FileObject::loadCache()
{
    bool res = false;
    QDir dir(this->_storagepath);

    if(QFile::exists(dir.absoluteFilePath(this->_thumbnailid)))
    {
        this->_thumbnail = dir.absoluteFilePath(this->_thumbnailid);
        emit thumbnailChanged();
        res = true;
    }

    if(QFile::exists(dir.absoluteFilePath(this->_fileid)))
    {
        this->_filepath = dir.absoluteFilePath(this->_fileid);
        emit filePathChanged();
        res = true;
    }

    return res;
}

void FileObject::download()
{
    if(this->_document)
    {
        this->_inputfilelocation = TelegramHelper::inputFileLocation(this->_document);
        this->setDownloadMode(FileObject::Download);
        this->createDownloadSession(this->_document->dcId());
        return;
    }

    if(!this->_locfile || (this->_locfile->constructorId() == TLTypes::FileLocationUnavailable))
        return;

    this->_inputfilelocation = TelegramHelper::inputFileLocation(this->_locfile);
    this->setDownloadMode(FileObject::Download);
    this->createDownloadSession(this->_locfile->dcId());
}

QString FileObject::extension(const UploadFile *uploadfile)
{
    StorageFileType* storagefile = uploadfile->type();

    if(storagefile->constructorId() == TLTypes::StorageFileGif)
        return ".gif";

    if(storagefile->constructorId() == TLTypes::StorageFileJpeg)
        return ".jpeg";

    if(storagefile->constructorId() == TLTypes::StorageFileMov)
        return ".mov";

    if(storagefile->constructorId() == TLTypes::StorageFileMp3)
        return ".mp3";

    if(storagefile->constructorId() == TLTypes::StorageFileMp4)
        return ".mp4";

    if(storagefile->constructorId() == TLTypes::StorageFilePdf)
        return ".pdf";

    if(storagefile->constructorId() == TLTypes::StorageFilePng)
        return ".png";

    if(storagefile->constructorId() == TLTypes::StorageFileWebp)
        return ".webp";

    if(storagefile->constructorId() == TLTypes::StorageFilePartial)
        return ".temp";

    return QString();
}

void FileObject::createDownloadSession(int dcid)
{
    this->_dcsession = DC_CreateSession(dcid);
    connect(this->_dcsession, &DCSession::ready, this, &FileObject::sendDownloadRequest);
    DC_InitializeSession(this->_dcsession);
}

void FileObject::sendDownloadRequest()
{
    TLInt offset = (this->_file ? this->_file->size() : 0);
    MTProtoRequest* req = TelegramAPI::uploadGetFile(this->_dcsession, this->_inputfilelocation, offset, BLOCK_SIZE);
    connect(req, &MTProtoRequest::replied, this, &FileObject::onUploadFile);
}

void FileObject::onUploadFile(MTProtoReply *mtreply)
{
    Q_ASSERT(this->_downloadmode != FileObject::None);

    UploadFile uploadfile;
    uploadfile.read(mtreply);

    if(!this->_file)
    {
        QDir dir(this->_storagepath);
        QString filename = (this->_downloadmode == FileObject::DownloadThumbnail) ?
                           this->_thumbnailid : this->_fileid;

        this->_file = new QFile(dir.absoluteFilePath(filename));

        if(!this->_file->open(QFile::WriteOnly))
        {
            qWarning() << "Cannot write file:" << this->_file->fileName();
            this->_file->deleteLater();
            return;
        }
    }

    this->_file->write(uploadfile.bytes());

    if(uploadfile.bytes().length() == BLOCK_SIZE) // NOTE: We need more data... (needs investigation)
    {
        this->sendDownloadRequest();
        return;
    }

    this->_file->close();

    if(this->_downloadmode == FileObject::DownloadThumbnail)
    {
        this->_thumbnail = this->_file->fileName();
        emit thumbnailChanged();
    }
    else
    {
        this->_filepath = this->_file->fileName();
        emit filePathChanged();
    }

    DC_CloseSession(this->_dcsession);

    this->_file = NULL;
    this->_dcsession = NULL;

    if(this->_inputfilelocation)
    {
        this->_inputfilelocation->deleteLater();
        this->_inputfilelocation = NULL;
    }

    this->setDownloadMode(FileObject::None);
    emit downloadCompleted();
}

void FileObject::setDownloadMode(int downloadmode)
{
    if(this->_downloadmode == downloadmode)
        return;

    this->_downloadmode = downloadmode;
    emit downloadingChanged();
}
