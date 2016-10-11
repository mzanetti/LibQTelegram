#ifndef FILEOBJECT_H
#define FILEOBJECT_H

#include <QObject>
#include <QFile>
#include "../autogenerated/types/types.h"
#include "../mtproto/mtprotorequest.h"
#include "../mtproto/dc/dcsessionmanager.h"

class FileObject : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString thumbnail READ thumbnail NOTIFY thumbnailChanged)
    Q_PROPERTY(QString filePath READ filePath NOTIFY filePathChanged)

    public:
        enum DownloadMode {
            None = 0,
            Upload = 1,
            Download = 2,
            DownloadThumbnail = 3,
        };

    public:
        explicit FileObject(QObject *parent = 0);
        FileObject(const QString& storagepath, QObject *parent = 0);
        QString thumbnail() const;
        QString filePath() const;
        void setThumbnailLocation(FileLocation* filelocation);
        void setFileLocation(FileLocation* filelocation);
        void setFileId(const QString& fileid);
        void setThumbnailId(const QString& thumbnailid);
        void downloadThumbnail();
        bool loadCache();

    public slots:
        void download();

    private slots:
        void onUploadFile(MTProtoReply* mtreply);

    private:
        QString extension(const UploadFile* uploadfile);
        void sendDownloadRequest();

    signals:
        void thumbnailChanged();
        void filePathChanged();
        void downloadCompleted();
        void uploadCompleted();

    private:
        QString _storagepath;
        int _downloadmode;
        FileLocation* _locthumbnail;
        FileLocation* _locfile;
        InputFileLocation* _inputfilelocation;
        DCSession* _dcsession;
        QFile* _file;
        QString _thumbnail;
        QString _filepath;
        QString _fileid;
        QString _thumbnailid;
};

#endif // FILEOBJECT_H
