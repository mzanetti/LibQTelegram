#ifndef SERVERDHINNERDATA_H
#define SERVERDHINNERDATA_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class ServerDHInnerData: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt128 nonce READ nonce WRITE setNonce NOTIFY nonceChanged)
	Q_PROPERTY(TLInt128 serverNonce READ serverNonce WRITE setServerNonce NOTIFY serverNonceChanged)
	Q_PROPERTY(TLInt g READ g WRITE setG NOTIFY gChanged)
	Q_PROPERTY(TLString dhPrime READ dhPrime WRITE setDhPrime NOTIFY dhPrimeChanged)
	Q_PROPERTY(TLString gA READ gA WRITE setGA NOTIFY gAChanged)
	Q_PROPERTY(TLInt serverTime READ serverTime WRITE setServerTime NOTIFY serverTimeChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorServerDHInnerData = 0xb5890dba,
		};

	public:
		explicit ServerDHInnerData(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt128 nonce() const;
		void setNonce(TLInt128 nonce);
		TLInt128 serverNonce() const;
		void setServerNonce(TLInt128 server_nonce);
		TLInt g() const;
		void setG(TLInt g);
		TLString dhPrime() const;
		void setDhPrime(TLString dh_prime);
		TLString gA() const;
		void setGA(TLString g_a);
		TLInt serverTime() const;
		void setServerTime(TLInt server_time);

	signals:
		void nonceChanged();
		void serverNonceChanged();
		void gChanged();
		void dhPrimeChanged();
		void gAChanged();
		void serverTimeChanged();

	private:
		TLInt128 _nonce;
		TLInt128 _server_nonce;
		TLInt _g;
		TLString _dh_prime;
		TLString _g_a;
		TLInt _server_time;

};

#endif // SERVERDHINNERDATA_H
