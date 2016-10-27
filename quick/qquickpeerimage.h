#ifndef QQUICKPEERIMAGE_H
#define QQUICKPEERIMAGE_H

#include <QtQuick>
#include <QColor>
#include "../autogenerated/types/types.h"
#include "qquickbaseitem.h"

class QQuickPeerImage : public QQuickBaseItem
{
    Q_OBJECT

    Q_PROPERTY(TelegramObject* peer READ peer WRITE setPeer NOTIFY peerChanged)
    Q_PROPERTY(int size READ size WRITE setSize NOTIFY sizeChanged)
    Q_PROPERTY(QQmlComponent* peerDelegate READ peerDelegate WRITE setPeerDelegate NOTIFY peerDelegateChanged)
    Q_PROPERTY(QQmlComponent* fallbackPeerDelegate READ fallbackPeerDelegate WRITE setFallbackPeerDelegate NOTIFY fallbackPeerDelegateChanged)

    public:
        QQuickPeerImage(QQuickItem* parent = 0);
        TelegramObject* peer() const;
        int size() const;
        void setPeer(TelegramObject* peer);
        void setSize(int size);

    public:
        QQmlComponent* peerDelegate() const;
        void setPeerDelegate(QQmlComponent* peerdelegate);
        QQmlComponent* fallbackPeerDelegate() const;
        void setFallbackPeerDelegate(QQmlComponent* fallbackpeerdelegate);

    private:
        void initialize();
        void updateMetrics();
        void updateSource(QVariant sourcevalue);
        void createPeerElement();
        void createFallbackPeerElement();
        QString fallbackText(TelegramObject* telegramobject);
        QString fallbackTitle(const QString& title);

    private slots:
        void reinitialize();
        void bindToElement();

    signals:
        void peerChanged();
        void sizeChanged();
        void peerDelegateChanged();
        void fallbackPeerDelegateChanged();

    private:
        TelegramObject* _peer;
        QQmlComponent* _fallbackpeerdelegate;
        QQmlComponent* _peerdelegate;
        int _size;
};

#endif // QQUICKPEERIMAGE_H
