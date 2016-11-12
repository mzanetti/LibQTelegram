#ifndef PEERPROFILE_H
#define PEERPROFILE_H

#include <QObject>
#include <QtQuick>
#include "../telegram.h"
#include "../autogenerated/types/types.h"

class PeerProfile : public QObject, public QQmlParserStatus
{
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)

    Q_PROPERTY(Telegram* telegram READ telegram WRITE setTelegram NOTIFY telegramChanged)
    Q_PROPERTY(TelegramObject* peer READ peer WRITE setPeer NOTIFY peerChanged)
    Q_PROPERTY(bool isUser READ isUser NOTIFY isUserChanged)
    Q_PROPERTY(bool isChat READ isChat NOTIFY isChatChanged)
    Q_PROPERTY(bool isMegaGroup READ isMegaGroup NOTIFY isMegaGroupChanged)
    Q_PROPERTY(bool isBroadcast READ isBroadcast NOTIFY isBroadcastChanged)
    Q_PROPERTY(bool isContact READ isContact NOTIFY isContactChanged)
    Q_PROPERTY(bool isMuted READ isMuted NOTIFY isMutedChanged)
    Q_PROPERTY(bool isMe READ isMe NOTIFY isMeChanged)
    Q_PROPERTY(bool hasUsername READ hasUsername NOTIFY hasUsernameChanged)
    Q_PROPERTY(bool hasPhoneNumber READ hasPhoneNumber NOTIFY hasPhoneNumberChanged)
    Q_PROPERTY(QString title READ title NOTIFY titleChanged)
    Q_PROPERTY(QString username READ username NOTIFY usernameChanged)
    Q_PROPERTY(QString statusText READ statusText NOTIFY statusTextChanged)
    Q_PROPERTY(QString phoneNumber READ phoneNumber NOTIFY phoneNumberChanged)

    public:
        explicit PeerProfile(QObject *parent = 0);
        Telegram* telegram() const;
        TelegramObject* peer() const;
        bool isUser() const;
        bool isChat() const;
        bool isMegaGroup() const;
        bool isBroadcast() const;
        bool isContact() const;
        bool isMuted() const;
        bool isMe() const;
        bool hasUsername() const;
        bool hasPhoneNumber() const;
        QString title() const;
        QString username() const;
        QString statusText() const;
        QString phoneNumber() const;
        void setTelegram(Telegram* telegram);
        void setPeer(TelegramObject* peer);

    protected:
        virtual void classBegin();
        virtual void componentComplete();

    private:
        void findObjects(TelegramObject* telegramobject);

    signals:
        void telegramChanged();
        void peerChanged();
        void isUserChanged();
        void isChatChanged();
        void isMegaGroupChanged();
        void isBroadcastChanged();
        void isContactChanged();
        void isMutedChanged();
        void isMeChanged();
        void hasUsernameChanged();
        void hasPhoneNumberChanged();
        void titleChanged();
        void usernameChanged();
        void statusTextChanged();
        void phoneNumberChanged();

    private:
        Telegram* _telegram;
        TelegramObject* _peer;
        Dialog* _dialog;
        Chat* _chat;
        User* _user;
};

#endif // PEERPROFILE_H