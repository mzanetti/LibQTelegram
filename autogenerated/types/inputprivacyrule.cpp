// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "inputprivacyrule.h"


InputPrivacyRule::InputPrivacyRule(QObject* parent) : TelegramObject(parent)
{
	
}

void InputPrivacyRule::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueAllowContacts) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueAllowAll) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueAllowUsers) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueDisallowContacts) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueDisallowAll) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueDisallowUsers));
	
	if(this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueAllowUsers)
		mtstream->readTLVector<InputUser>(this->_users, false);
	else if(this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueDisallowUsers)
		mtstream->readTLVector<InputUser>(this->_users, false);
}

void InputPrivacyRule::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueAllowContacts) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueAllowAll) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueAllowUsers) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueDisallowContacts) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueDisallowAll) ||
		 (this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueDisallowUsers));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueAllowUsers)
		mtstream->writeTLVector(this->_users, false);
	else if(this->_constructorid == InputPrivacyRule::CtorInputPrivacyValueDisallowUsers)
		mtstream->writeTLVector(this->_users, false);
}

void InputPrivacyRule::compileFlags() 
{
	
}

const TLVector<InputUser*>& InputPrivacyRule::users() const
{
	return this->_users;
}

void InputPrivacyRule::setUsers(const TLVector<InputUser*>& users) 
{
	if(this->_users == users)
		return;

	this->_users = users;
	emit usersChanged();
}

