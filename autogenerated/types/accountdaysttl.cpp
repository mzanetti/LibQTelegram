// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "accountdaysttl.h"


AccountDaysTTL::AccountDaysTTL(QObject* parent) : TelegramObject(parent)
{
	this->_days = 0;
	this->_constructorid = AccountDaysTTL::CtorAccountDaysTTL;
}

void AccountDaysTTL::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == AccountDaysTTL::CtorAccountDaysTTL));
	
	if(this->_constructorid == AccountDaysTTL::CtorAccountDaysTTL)
		this->_days = mtstream->readTLInt();
}

void AccountDaysTTL::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == AccountDaysTTL::CtorAccountDaysTTL));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == AccountDaysTTL::CtorAccountDaysTTL)
		mtstream->writeTLInt(this->_days);
}

void AccountDaysTTL::compileFlags() 
{
	
}

TLInt AccountDaysTTL::days() const
{
	return this->_days;
}

void AccountDaysTTL::setDays(TLInt days) 
{
	if(this->_days == days)
		return;

	this->_days = days;
	emit daysChanged();
}

