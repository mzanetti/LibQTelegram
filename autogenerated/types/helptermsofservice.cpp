// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "helptermsofservice.h"


HelpTermsOfService::HelpTermsOfService(QObject* parent) : TelegramObject(parent)
{
	this->_constructorid = HelpTermsOfService::CtorHelpTermsOfService;
}

void HelpTermsOfService::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == HelpTermsOfService::CtorHelpTermsOfService));
	
	if(this->_constructorid == HelpTermsOfService::CtorHelpTermsOfService)
		this->_text = mtstream->readTLString();
}

void HelpTermsOfService::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == HelpTermsOfService::CtorHelpTermsOfService));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == HelpTermsOfService::CtorHelpTermsOfService)
		mtstream->writeTLString(this->_text);
}

void HelpTermsOfService::compileFlags() 
{
	
}

TLString HelpTermsOfService::text() const
{
	return this->_text;
}

void HelpTermsOfService::setText(TLString text) 
{
	if(this->_text == text)
		return;

	this->_text = text;
	emit textChanged();
}

