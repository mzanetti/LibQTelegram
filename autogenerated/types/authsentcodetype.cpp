// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "authsentcodetype.h"


AuthSentCodeType::AuthSentCodeType(QObject* parent) : TelegramObject(parent)
{
	this->_length = 0;
}

void AuthSentCodeType::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeApp) ||
		 (this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeSms) ||
		 (this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeCall) ||
		 (this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeFlashCall));
	
	if(this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeApp)
		this->_length = mtstream->readTLInt();
	else if(this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeSms)
		this->_length = mtstream->readTLInt();
	else if(this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeCall)
		this->_length = mtstream->readTLInt();
	else if(this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeFlashCall)
		this->_pattern = mtstream->readTLString();
}

void AuthSentCodeType::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeApp) ||
		 (this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeSms) ||
		 (this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeCall) ||
		 (this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeFlashCall));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeApp)
		mtstream->writeTLInt(this->_length);
	else if(this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeSms)
		mtstream->writeTLInt(this->_length);
	else if(this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeCall)
		mtstream->writeTLInt(this->_length);
	else if(this->_constructorid == AuthSentCodeType::CtorAuthSentCodeTypeFlashCall)
		mtstream->writeTLString(this->_pattern);
}

void AuthSentCodeType::compileFlags() 
{
	
}

TLInt AuthSentCodeType::length() const
{
	return this->_length;
}

void AuthSentCodeType::setLength(TLInt length) 
{
	if(this->_length == length)
		return;

	this->_length = length;
	emit lengthChanged();
}

TLString AuthSentCodeType::pattern() const
{
	return this->_pattern;
}

void AuthSentCodeType::setPattern(TLString pattern) 
{
	if(this->_pattern == pattern)
		return;

	this->_pattern = pattern;
	emit patternChanged();
}

