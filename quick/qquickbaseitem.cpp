#include "qquickbaseitem.h"

QQuickBaseItem::QQuickBaseItem(QQuickItem *parent) : QQuickItem(parent), _fileobject(NULL), _mediaelement(NULL)
{
    this->_version = "2.0"; // Target base version by default
    this->_backcolor = qApp->palette().color(QPalette::Base);
    this->_forecolor = qApp->palette().color(QPalette::WindowText);
    this->_pixelsize = qApp->font().pointSize();
}

QString QQuickBaseItem::version() const
{
    return this->_version;
}

QString QQuickBaseItem::source() const
{
    if(!this->_fileobject)
        return QString();

    if(this->_fileobject->downloaded())
        return this->_fileobject->filePath();

    if(this->_fileobject->hasThumbnail())
        return this->_fileobject->thumbnail();

    return QString();
}

QString QQuickBaseItem::fileSize() const
{
    if(!this->_fileobject)
        return QString();

    return TelegramHelper::fileSize(this->_fileobject->fileSize());
}

QString QQuickBaseItem::fileName() const
{
    if(!this->_fileobject)
        return QString();

    return this->_fileobject->fileName();
}

QSize QQuickBaseItem::imageSize() const
{
    if(!this->_fileobject)
        return QSize();

    return this->_fileobject->imageSize();
}

QColor QQuickBaseItem::backgroundColor() const
{
    return this->_backcolor;
}

QColor QQuickBaseItem::foregroundColor() const
{
    return this->_forecolor;
}

qreal QQuickBaseItem::fontPixelSize() const
{
    return this->_pixelsize;
}

qreal QQuickBaseItem::progress() const
{
    if(!this->_fileobject || !this->_fileobject->isUpload())
        return 0.0;

    return this->_fileobject->uploader()->progress();
}

bool QQuickBaseItem::downloaded() const
{
    if(!this->_fileobject)
        return false;

    return this->_fileobject->downloaded();
}

bool QQuickBaseItem::downloading() const
{
    if(!this->_fileobject)
        return false;

    return this->_fileobject->downloading();
}

bool QQuickBaseItem::uploading() const
{
    if(!this->_fileobject || !this->_fileobject->isUpload())
        return false;

    return this->_fileobject->uploader()->uploading();
}

bool QQuickBaseItem::hasThumbnail() const
{
    if(!this->_fileobject)
        return false;

    return this->_fileobject->hasThumbnail();
}

void QQuickBaseItem::setBackgroundColor(const QColor &color)
{
    if(this->_backcolor == color)
        return;

    this->_backcolor = color;
    emit backgroundColorChanged();
}

void QQuickBaseItem::setForegroundColor(const QColor &color)
{
    if(this->_forecolor == color)
        return;

    this->_forecolor = color;
    emit foregroundColorChanged();
}

void QQuickBaseItem::setFontPixelSize(qreal pixelsize)
{
    if(this->_pixelsize == pixelsize)
        return;

    this->_pixelsize = pixelsize;
    emit fontPixelSizeChanged();
}

void QQuickBaseItem::setVersion(const QString &version)
{
    if(this->_version == version)
        return;

    this->_version = version;
    emit versionChanged();
}

void QQuickBaseItem::download()
{
    if(!this->_fileobject || this->_fileobject->downloading() || this->_fileobject->downloaded())
        return;

    this->_fileobject->download();
}

QString QQuickBaseItem::escape(const TLString &s)
{
    return s.toString().replace("\"", "\\\"");
}

void QQuickBaseItem::createComponent(const QString &componentcode)
{
    QQmlComponent* component = NULL;
    QQmlEngine *engine = qmlEngine(this);

    if(!engine)
    {
        qFatal("Cannot get QML engine instance");
        return;
    }

    component = new QQmlComponent(engine, this);
    component->setData(QString("import QtQuick %1\n"
                               "import QtMultimedia 5.0\n"
                               "import QtGraphicalEffects 1.0\n"
                               "%2").arg(this->_version, componentcode).toUtf8(), QUrl());

    QQmlContext *context = qmlContext(this);

    if(!context)
    {
        qFatal("Cannot get QML context");
        return;
    }

    QQuickItem* item = qobject_cast<QQuickItem*>(component->create(context));

    if(!item)
    {
        qWarning() << component->errorString();
        return;
    }

    item->setParent(this);
    item->setParentItem(this);
    this->_mediaelement = item;
}

void QQuickBaseItem::createObject(QQmlComponent *component)
{
    QQmlContext *context = qmlContext(this);

    if(!context)
    {
        qFatal("Cannot get QML context");
        return;
    }

    QQuickItem* item = qobject_cast<QQuickItem*>(component->create(context));

    if(!item)
    {
        qWarning() << component->errorString();
        return;
    }

    item->setParent(this);
    item->setParentItem(this);
    this->_mediaelement = item;
}

FileObject *QQuickBaseItem::createFileObject(TelegramObject *telegramobject)
{
    if(!telegramobject)
    {
        qWarning("Invalid telegram object");
        return NULL;
    }

    if(this->_fileobject)
        disconnect(this->_fileobject, 0, this, 0);

    this->_fileobject = FileCache_fileObject(telegramobject);

    if(!this->_fileobject)
        return NULL;

    connect(this->_fileobject, &FileObject::imageSizeChanged, this, &QQuickBaseItem::imageSizeChanged);
    connect(this->_fileobject, &FileObject::downloadingChanged, this, &QQuickBaseItem::downloadingChanged);
    connect(this->_fileobject, &FileObject::hasThumbnailChanged, this, &QQuickBaseItem::hasThumbnailChanged);
    connect(this->_fileobject, &FileObject::thumbnailChanged, this, &QQuickBaseItem::sourceChanged);
    connect(this->_fileobject, &FileObject::filePathChanged, this, &QQuickBaseItem::filePathChanged);
    connect(this->_fileobject, &FileObject::filePathChanged, this, &QQuickBaseItem::sourceChanged);
    connect(this->_fileobject, &FileObject::fileNameChanged, this, &QQuickBaseItem::fileNameChanged);
    connect(this->_fileobject, &FileObject::downloadedChanged, this, &QQuickBaseItem::downloadedChanged);

    if(this->_fileobject->isUpload())
    {
        connect(this->_fileobject->uploader(), &FileUploader::uploadingChanged, this, &QQuickBaseItem::uploadingChanged);
        connect(this->_fileobject->uploader(), &FileUploader::progressChanged, this, &QQuickBaseItem::progressChanged);
    }

    return this->_fileobject;
}

QString QQuickBaseItem::thumbnail() const
{
    if(!this->_fileobject)
        return QString();

    return this->_fileobject->thumbnail();
}

QString QQuickBaseItem::filePath() const
{
    if(!this->_fileobject)
        return QString();

    return this->_fileobject->filePath();
}
