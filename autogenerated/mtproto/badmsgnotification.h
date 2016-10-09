#ifndef BADMSGNOTIFICATION_H
#define BADMSGNOTIFICATION_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class BadMsgNotification: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLLong badMsgId READ badMsgId WRITE setBadMsgId NOTIFY badMsgIdChanged)
	Q_PROPERTY(TLInt badMsgSeqno READ badMsgSeqno WRITE setBadMsgSeqno NOTIFY badMsgSeqnoChanged)
	Q_PROPERTY(TLInt errorCode READ errorCode WRITE setErrorCode NOTIFY errorCodeChanged)
	Q_PROPERTY(TLLong newServerSalt READ newServerSalt WRITE setNewServerSalt NOTIFY newServerSaltChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorBadMsgNotification = 0xa7eff811,
			CtorBadServerSalt = 0xedab447b,
		};

	public:
		explicit BadMsgNotification(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLLong badMsgId() const;
		void setBadMsgId(TLLong bad_msg_id);
		TLInt badMsgSeqno() const;
		void setBadMsgSeqno(TLInt bad_msg_seqno);
		TLInt errorCode() const;
		void setErrorCode(TLInt error_code);
		TLLong newServerSalt() const;
		void setNewServerSalt(TLLong new_server_salt);

	signals:
		void badMsgIdChanged();
		void badMsgSeqnoChanged();
		void errorCodeChanged();
		void newServerSaltChanged();

	private:
		TLLong _bad_msg_id;
		TLInt _bad_msg_seqno;
		TLInt _error_code;
		TLLong _new_server_salt;

};

#endif // BADMSGNOTIFICATION_H
