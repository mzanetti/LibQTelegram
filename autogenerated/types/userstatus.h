#ifndef USERSTATUS_H
#define USERSTATUS_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class UserStatus: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt expires READ expires WRITE setExpires NOTIFY expiresChanged)
	Q_PROPERTY(TLInt wasOnline READ wasOnline WRITE setWasOnline NOTIFY wasOnlineChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorUserStatusEmpty = 0x9d05049,
			CtorUserStatusOnline = 0xedb93949,
			CtorUserStatusOffline = 0x8c703f,
			CtorUserStatusRecently = 0xe26f42f1,
			CtorUserStatusLastWeek = 0x7bf09fc,
			CtorUserStatusLastMonth = 0x77ebc742,
		};

	public:
		explicit UserStatus(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt expires() const;
		void setExpires(TLInt expires);
		TLInt wasOnline() const;
		void setWasOnline(TLInt was_online);

	signals:
		void expiresChanged();
		void wasOnlineChanged();

	private:
		TLInt _expires;
		TLInt _was_online;

};

#endif // USERSTATUS_H
