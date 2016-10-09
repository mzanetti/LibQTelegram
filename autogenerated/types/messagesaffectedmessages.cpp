// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "messagesaffectedmessages.h"


MessagesAffectedMessages::MessagesAffectedMessages(QObject* parent) : TelegramObject(parent)
{
	this->_pts = 0;
	this->_pts_count = 0;
	this->_constructorid = MessagesAffectedMessages::CtorMessagesAffectedMessages;
}

void MessagesAffectedMessages::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == MessagesAffectedMessages::CtorMessagesAffectedMessages));
	
	if(this->_constructorid == MessagesAffectedMessages::CtorMessagesAffectedMessages)
	{
		this->_pts = mtstream->readTLInt();
		this->_pts_count = mtstream->readTLInt();
	}
}

void MessagesAffectedMessages::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == MessagesAffectedMessages::CtorMessagesAffectedMessages));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == MessagesAffectedMessages::CtorMessagesAffectedMessages)
	{
		mtstream->writeTLInt(this->_pts);
		mtstream->writeTLInt(this->_pts_count);
	}
}

void MessagesAffectedMessages::compileFlags() 
{
	
}

TLInt MessagesAffectedMessages::pts() const
{
	return this->_pts;
}

void MessagesAffectedMessages::setPts(TLInt pts) 
{
	if(this->_pts == pts)
		return;

	this->_pts = pts;
	emit ptsChanged();
}

TLInt MessagesAffectedMessages::ptsCount() const
{
	return this->_pts_count;
}

void MessagesAffectedMessages::setPtsCount(TLInt pts_count) 
{
	if(this->_pts_count == pts_count)
		return;

	this->_pts_count = pts_count;
	emit ptsCountChanged();
}

