// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "messagessentencryptedmessage.h"


MessagesSentEncryptedMessage::MessagesSentEncryptedMessage(QObject* parent) : TelegramObject(parent)
{
	this->_date = 0;
	this->_file = NULL;
}

void MessagesSentEncryptedMessage::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == MessagesSentEncryptedMessage::CtorMessagesSentEncryptedMessage) ||
		 (this->_constructorid == MessagesSentEncryptedMessage::CtorMessagesSentEncryptedFile));
	
	if(this->_constructorid == MessagesSentEncryptedMessage::CtorMessagesSentEncryptedMessage)
		this->_date = mtstream->readTLInt();
	else if(this->_constructorid == MessagesSentEncryptedMessage::CtorMessagesSentEncryptedFile)
	{
		this->_date = mtstream->readTLInt();
		TLInt file_ctor = mtstream->peekTLConstructor();
		
		if(file_ctor != TLTypes::Null)
		{
			RESET_TLTYPE(EncryptedFile, this->_file);
			this->_file->read(mtstream);
		}
		else
		{
			NULL_TLTYPE(this->_file);
			mtstream->readTLConstructor(); // Skip Null
		}
	}
}

void MessagesSentEncryptedMessage::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == MessagesSentEncryptedMessage::CtorMessagesSentEncryptedMessage) ||
		 (this->_constructorid == MessagesSentEncryptedMessage::CtorMessagesSentEncryptedFile));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == MessagesSentEncryptedMessage::CtorMessagesSentEncryptedMessage)
		mtstream->writeTLInt(this->_date);
	else if(this->_constructorid == MessagesSentEncryptedMessage::CtorMessagesSentEncryptedFile)
	{
		mtstream->writeTLInt(this->_date);
		if(this->_file != NULL)
			this->_file->write(mtstream);
		else
			mtstream->writeTLConstructor(TLTypes::Null);
	}
}

void MessagesSentEncryptedMessage::compileFlags() 
{
	
}

TLInt MessagesSentEncryptedMessage::date() const
{
	return this->_date;
}

void MessagesSentEncryptedMessage::setDate(TLInt date) 
{
	if(this->_date == date)
		return;

	this->_date = date;
	emit dateChanged();
}

EncryptedFile* MessagesSentEncryptedMessage::file() const
{
	return this->_file;
}

void MessagesSentEncryptedMessage::setFile(EncryptedFile* file) 
{
	if(this->_file == file)
		return;

	this->_file = file;
	emit fileChanged();
}

