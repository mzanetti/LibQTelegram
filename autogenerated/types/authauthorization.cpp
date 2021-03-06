// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "authauthorization.h"


AuthAuthorization::AuthAuthorization(QObject* parent) : TelegramObject(parent)
{
	this->_flags = 0;
	this->_tmp_sessions = 0;
	this->_user = NULL;
	this->_constructorid = AuthAuthorization::CtorAuthAuthorization;
}

void AuthAuthorization::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == AuthAuthorization::CtorAuthAuthorization));
	
	if(this->_constructorid == AuthAuthorization::CtorAuthAuthorization)
	{
		this->_flags = mtstream->readTLInt();
		if(IS_FLAG_SET(this->_flags, 0))
			this->_tmp_sessions = mtstream->readTLInt();
		
		TLInt user_ctor = mtstream->peekTLConstructor();
		
		if(user_ctor != TLTypes::Null)
		{
			this->resetTLType<User>(&this->_user);
			this->_user->read(mtstream);
		}
		else
		{
			this->nullTLType<User>(&this->_user);
			mtstream->readTLConstructor(); // Skip Null
		}
	}
}

void AuthAuthorization::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == AuthAuthorization::CtorAuthAuthorization));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == AuthAuthorization::CtorAuthAuthorization)
	{
		mtstream->writeTLInt(this->_flags);
		if(IS_FLAG_SET(this->_flags, 0))
			mtstream->writeTLInt(this->_tmp_sessions);
		
		if(this->_user != NULL)
			this->_user->write(mtstream);
		else
			mtstream->writeTLConstructor(TLTypes::Null);
	}
}

void AuthAuthorization::compileFlags() 
{
	this->_flags = 0;
	
	if(this->_constructorid == AuthAuthorization::CtorAuthAuthorization)
	{
		if(this->_tmp_sessions)
			SET_FLAG_BIT(this->_flags, 0);
	}
}

TLInt AuthAuthorization::flags() const
{
	return this->_flags;
}

void AuthAuthorization::setFlags(TLInt flags) 
{
	if(this->_flags == flags)
		return;

	this->_flags = flags;
	emit flagsChanged();
}

TLInt AuthAuthorization::tmpSessions() const
{
	return this->_tmp_sessions;
}

void AuthAuthorization::setTmpSessions(TLInt tmp_sessions) 
{
	if(this->_tmp_sessions == tmp_sessions)
		return;

	this->_tmp_sessions = tmp_sessions;
	emit tmpSessionsChanged();
}

User* AuthAuthorization::user() const
{
	return this->_user;
}

void AuthAuthorization::setUser(User* user) 
{
	if(this->_user == user)
		return;

	this->deleteChild(this->_user);
	this->_user = user;

	if(this->_user)
		this->_user->setParent(this);

	emit userChanged();
}

