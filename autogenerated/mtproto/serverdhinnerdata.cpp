// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "serverdhinnerdata.h"


ServerDHInnerData::ServerDHInnerData(QObject* parent) : TelegramObject(parent)
{
	this->_g = 0;
	this->_server_time = 0;
	this->_constructorid = ServerDHInnerData::CtorServerDHInnerData;
}

void ServerDHInnerData::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == ServerDHInnerData::CtorServerDHInnerData));
	
	if(this->_constructorid == ServerDHInnerData::CtorServerDHInnerData)
	{
		this->_nonce = mtstream->readTLInt128();
		this->_server_nonce = mtstream->readTLInt128();
		this->_g = mtstream->readTLInt();
		this->_dh_prime = mtstream->readTLString();
		this->_g_a = mtstream->readTLString();
		this->_server_time = mtstream->readTLInt();
	}
}

void ServerDHInnerData::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == ServerDHInnerData::CtorServerDHInnerData));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == ServerDHInnerData::CtorServerDHInnerData)
	{
		mtstream->writeTLInt128(this->_nonce);
		mtstream->writeTLInt128(this->_server_nonce);
		mtstream->writeTLInt(this->_g);
		mtstream->writeTLString(this->_dh_prime);
		mtstream->writeTLString(this->_g_a);
		mtstream->writeTLInt(this->_server_time);
	}
}

void ServerDHInnerData::compileFlags() 
{
	
}

TLInt128 ServerDHInnerData::nonce() const
{
	return this->_nonce;
}

void ServerDHInnerData::setNonce(TLInt128 nonce) 
{
	if(this->_nonce == nonce)
		return;

	this->_nonce = nonce;
	emit nonceChanged();
}

TLInt128 ServerDHInnerData::serverNonce() const
{
	return this->_server_nonce;
}

void ServerDHInnerData::setServerNonce(TLInt128 server_nonce) 
{
	if(this->_server_nonce == server_nonce)
		return;

	this->_server_nonce = server_nonce;
	emit serverNonceChanged();
}

TLInt ServerDHInnerData::g() const
{
	return this->_g;
}

void ServerDHInnerData::setG(TLInt g) 
{
	if(this->_g == g)
		return;

	this->_g = g;
	emit gChanged();
}

TLString ServerDHInnerData::dhPrime() const
{
	return this->_dh_prime;
}

void ServerDHInnerData::setDhPrime(TLString dh_prime) 
{
	if(this->_dh_prime == dh_prime)
		return;

	this->_dh_prime = dh_prime;
	emit dhPrimeChanged();
}

TLString ServerDHInnerData::gA() const
{
	return this->_g_a;
}

void ServerDHInnerData::setGA(TLString g_a) 
{
	if(this->_g_a == g_a)
		return;

	this->_g_a = g_a;
	emit gAChanged();
}

TLInt ServerDHInnerData::serverTime() const
{
	return this->_server_time;
}

void ServerDHInnerData::setServerTime(TLInt server_time) 
{
	if(this->_server_time == server_time)
		return;

	this->_server_time = server_time;
	emit serverTimeChanged();
}

