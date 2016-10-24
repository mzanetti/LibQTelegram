#include "cachefetcher.h"
#include "../../autogenerated/telegramapi.h"
#include "../../mtproto/dc/dcsessionmanager.h"
#include "../../types/telegramhelper.h"

CacheFetcher::CacheFetcher(QObject *parent) : QObject(parent), _update(NULL)
{

}

void CacheFetcher::getDialog(InputPeer* inputpeer)
{
    MTProtoRequest* req = TelegramAPI::messagesGetDialogs(DC_MainSession, 0, 0, inputpeer, 1);
    inputpeer->deleteLater();
    connect(req, &MTProtoRequest::replied, this, &CacheFetcher::onMessagesDialogs);
}

void CacheFetcher::onMessagesDialogs(MTProtoReply *mtreply)
{
    MessagesDialogs messagesdialogs;
    messagesdialogs.read(mtreply);

    emit dialogsReceived(messagesdialogs.dialogs());
    emit usersReceived(messagesdialogs.users());
    emit chatsReceived(messagesdialogs.chats());
    emit messagesReceived(messagesdialogs.messages());
}
