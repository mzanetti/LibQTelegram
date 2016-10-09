#ifndef CONTACTSRESOLVEDPEER_H
#define CONTACTSRESOLVEDPEER_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "chat.h"
#include "peer.h"
#include "../../types/telegramobject.h"
#include "user.h"
#include "../../types/basic.h"

class ContactsResolvedPeer: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(Peer* peer READ peer WRITE setPeer NOTIFY peerChanged)
	Q_PROPERTY(TLVector<Chat*> chats READ chats WRITE setChats NOTIFY chatsChanged)
	Q_PROPERTY(TLVector<User*> users READ users WRITE setUsers NOTIFY usersChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorContactsResolvedPeer = 0x7f077ad9,
		};

	public:
		explicit ContactsResolvedPeer(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		Peer* peer() const;
		void setPeer(Peer* peer);
		const TLVector<Chat*>& chats() const;
		void setChats(const TLVector<Chat*>& chats);
		const TLVector<User*>& users() const;
		void setUsers(const TLVector<User*>& users);

	signals:
		void peerChanged();
		void chatsChanged();
		void usersChanged();

	private:
		Peer* _peer;
		TLVector<Chat*> _chats;
		TLVector<User*> _users;

};

#endif // CONTACTSRESOLVEDPEER_H
