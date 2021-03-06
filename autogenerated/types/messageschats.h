#ifndef MESSAGESCHATS_H
#define MESSAGESCHATS_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "chat.h"
#include "../../types/basic.h"
#include "../../types/telegramobject.h"

class MessagesChats: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLVector<Chat*> chats READ chats WRITE setChats NOTIFY chatsChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorMessagesChats = 0x64ff9fd5,
		};

	public:
		explicit MessagesChats(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		const TLVector<Chat*>& chats() const;
		void setChats(const TLVector<Chat*>& chats);

	signals:
		void chatsChanged();

	private:
		TLVector<Chat*> _chats;

};

#endif // MESSAGESCHATS_H
