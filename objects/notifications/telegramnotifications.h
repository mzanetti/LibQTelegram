#ifndef TELEGRAMNOTIFICATIONS_H
#define TELEGRAMNOTIFICATIONS_H

#include <QObject>
#include "../../autogenerated/types/types.h"
#include "notificationobject.h"
#include "telegram.h"

class TelegramNotifications : public QObject
{
    Q_OBJECT

    Q_PROPERTY(Telegram* telegram READ telegram WRITE setTelegram NOTIFY telegramChanged)
    Q_PROPERTY(Dialog* currentDialog READ currentDialog WRITE setCurrentDialog NOTIFY currentDialogChanged)
    Q_PROPERTY(bool mute READ mute WRITE setMute NOTIFY muteChanged)

    public:
        explicit TelegramNotifications(QObject *parent = 0);
        Telegram* telegram() const;
        Dialog* currentDialog() const;
        bool mute() const;
        void setTelegram(Telegram* telegram);
        void setCurrentDialog(Dialog* dialog);
        void setMute(bool mute);

    private slots:
        void onLoginCompleted();
        void onIncomingMessage(Message* message);
        void onReadHistory(Dialog* dialog);

    signals:
        void newMessage(const NotificationObject* notification);
        void dismissNotification(Dialog* dialog);
        void telegramChanged();
        void currentDialogChanged();
        void muteChanged();

    private:
        Telegram* _telegram;
        Dialog* _currentdialog;
        bool _mute;
};

#endif // TELEGRAMNOTIFICATIONS_H
