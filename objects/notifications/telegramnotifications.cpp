#include "telegramnotifications.h"
#include "../../mtproto/mtprotoupdatehandler.h"
#include "../../config/cache/telegramcache.h"

TelegramNotifications::TelegramNotifications(QObject *parent) : QObject(parent), _telegram(NULL), _currentdialog(NULL), _mute(false)
{
    connect(UpdateHandler_instance, &MTProtoUpdateHandler::newSingleMessage, this, &TelegramNotifications::onIncomingMessage, Qt::UniqueConnection);
}

Telegram *TelegramNotifications::telegram() const
{
    return this->_telegram;
}

Dialog *TelegramNotifications::currentDialog() const
{
    return this->_currentdialog;
}

bool TelegramNotifications::mute() const
{
    return this->_mute;
}

void TelegramNotifications::setTelegram(Telegram *telegram)
{
    if(telegram == this->_telegram)
        return;

    this->_telegram = telegram;

    emit telegramChanged();
}

void TelegramNotifications::setCurrentDialog(Dialog *dialog)
{
    if(dialog == this->_currentdialog)
        return;

    this->_currentdialog = dialog;
    emit currentDialogChanged();;
}

void TelegramNotifications::setMute(bool mute)
{
    if(mute == this->_mute)
        return;

    this->_mute = mute;
    emit muteChanged();
}

void TelegramNotifications::onIncomingMessage(Message *message)
{
    if(this->_mute || !this->_telegram || message->isOut() || (message->constructorId() != TLTypes::Message))
        return;

    Dialog* dialog = TelegramCache_instance->dialog(TelegramHelper::messageToDialog(message));

    if(!dialog || (message->id() <= dialog->readInboxMaxId())) // Message is read, don't notify
        return;

    PeerNotifySettings* notifysettings = dialog->notifySettings();

    if(!message->isMentioned() && (notifysettings->isSilent() || (notifysettings->muteUntil() > 0)))
        return;

    NotificationObject notification;
    notification.setDialogId(TelegramHelper::identifier(dialog));
    notification.setTitle(this->_telegram->dialogTitle(dialog));
    notification.setMessage(this->_telegram->messagePreview(message));
    notification.setIsCurrentDialog((dialog == this->_currentdialog));

    emit newMessage(&notification);
}
