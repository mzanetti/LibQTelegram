// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "privacykey.h"

PrivacyKey::PrivacyKey(QObject* parent) : TelegramObject(parent)
{
	
}

void PrivacyKey::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == PrivacyKey::CtorPrivacyKeyStatusTimestamp) ||
		 (this->_constructorid == PrivacyKey::CtorPrivacyKeyChatInvite));
}

void PrivacyKey::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == PrivacyKey::CtorPrivacyKeyStatusTimestamp) ||
		 (this->_constructorid == PrivacyKey::CtorPrivacyKeyChatInvite));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
}

void PrivacyKey::compileFlags() 
{
	
}

