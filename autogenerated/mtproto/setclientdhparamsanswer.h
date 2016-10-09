#ifndef SETCLIENTDHPARAMSANSWER_H
#define SETCLIENTDHPARAMSANSWER_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class SetClientDHParamsAnswer: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt128 nonce READ nonce WRITE setNonce NOTIFY nonceChanged)
	Q_PROPERTY(TLInt128 serverNonce READ serverNonce WRITE setServerNonce NOTIFY serverNonceChanged)
	Q_PROPERTY(TLInt128 newNonceHash1 READ newNonceHash1 WRITE setNewNonceHash1 NOTIFY newNonceHash1Changed)
	Q_PROPERTY(TLInt128 newNonceHash2 READ newNonceHash2 WRITE setNewNonceHash2 NOTIFY newNonceHash2Changed)
	Q_PROPERTY(TLInt128 newNonceHash3 READ newNonceHash3 WRITE setNewNonceHash3 NOTIFY newNonceHash3Changed)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorDhGenOk = 0x3bcbf734,
			CtorDhGenRetry = 0x46dc1fb9,
			CtorDhGenFail = 0xa69dae02,
		};

	public:
		explicit SetClientDHParamsAnswer(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt128 nonce() const;
		void setNonce(TLInt128 nonce);
		TLInt128 serverNonce() const;
		void setServerNonce(TLInt128 server_nonce);
		TLInt128 newNonceHash1() const;
		void setNewNonceHash1(TLInt128 new_nonce_hash1);
		TLInt128 newNonceHash2() const;
		void setNewNonceHash2(TLInt128 new_nonce_hash2);
		TLInt128 newNonceHash3() const;
		void setNewNonceHash3(TLInt128 new_nonce_hash3);

	signals:
		void nonceChanged();
		void serverNonceChanged();
		void newNonceHash1Changed();
		void newNonceHash2Changed();
		void newNonceHash3Changed();

	private:
		TLInt128 _nonce;
		TLInt128 _server_nonce;
		TLInt128 _new_nonce_hash1;
		TLInt128 _new_nonce_hash2;
		TLInt128 _new_nonce_hash3;

};

#endif // SETCLIENTDHPARAMSANSWER_H
