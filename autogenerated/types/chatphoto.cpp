// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "chatphoto.h"


ChatPhoto::ChatPhoto(QObject* parent) : TelegramObject(parent)
{
	this->_photo_small = NULL;
	this->_photo_big = NULL;
}

void ChatPhoto::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == ChatPhoto::CtorChatPhotoEmpty) ||
		 (this->_constructorid == ChatPhoto::CtorChatPhoto));
	
	if(this->_constructorid == ChatPhoto::CtorChatPhoto)
	{
		TLInt photo_small_ctor = mtstream->peekTLConstructor();
		
		if(photo_small_ctor != TLTypes::Null)
		{
			this->resetTLType<FileLocation>(&this->_photo_small);
			this->_photo_small->read(mtstream);
		}
		else
		{
			this->nullTLType<FileLocation>(&this->_photo_small);
			mtstream->readTLConstructor(); // Skip Null
		}
		
		TLInt photo_big_ctor = mtstream->peekTLConstructor();
		
		if(photo_big_ctor != TLTypes::Null)
		{
			this->resetTLType<FileLocation>(&this->_photo_big);
			this->_photo_big->read(mtstream);
		}
		else
		{
			this->nullTLType<FileLocation>(&this->_photo_big);
			mtstream->readTLConstructor(); // Skip Null
		}
	}
}

void ChatPhoto::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == ChatPhoto::CtorChatPhotoEmpty) ||
		 (this->_constructorid == ChatPhoto::CtorChatPhoto));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == ChatPhoto::CtorChatPhoto)
	{
		if(this->_photo_small != NULL)
			this->_photo_small->write(mtstream);
		else
			mtstream->writeTLConstructor(TLTypes::Null);
		
		if(this->_photo_big != NULL)
			this->_photo_big->write(mtstream);
		else
			mtstream->writeTLConstructor(TLTypes::Null);
	}
}

void ChatPhoto::compileFlags() 
{
	
}

FileLocation* ChatPhoto::photoSmall() const
{
	return this->_photo_small;
}

void ChatPhoto::setPhotoSmall(FileLocation* photo_small) 
{
	if(this->_photo_small == photo_small)
		return;

	this->deleteChild(this->_photo_small);
	this->_photo_small = photo_small;

	if(this->_photo_small)
		this->_photo_small->setParent(this);

	emit photoSmallChanged();
}

FileLocation* ChatPhoto::photoBig() const
{
	return this->_photo_big;
}

void ChatPhoto::setPhotoBig(FileLocation* photo_big) 
{
	if(this->_photo_big == photo_big)
		return;

	this->deleteChild(this->_photo_big);
	this->_photo_big = photo_big;

	if(this->_photo_big)
		this->_photo_big->setParent(this);

	emit photoBigChanged();
}

