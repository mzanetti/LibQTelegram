// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "inputchatphoto.h"


InputChatPhoto::InputChatPhoto(QObject* parent) : TelegramObject(parent)
{
	this->_file = NULL;
	this->_id = NULL;
}

void InputChatPhoto::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == InputChatPhoto::CtorInputChatPhotoEmpty) ||
		 (this->_constructorid == InputChatPhoto::CtorInputChatUploadedPhoto) ||
		 (this->_constructorid == InputChatPhoto::CtorInputChatPhoto));
	
	if(this->_constructorid == InputChatPhoto::CtorInputChatUploadedPhoto)
	{
		TLInt file_ctor = mtstream->peekTLConstructor();
		
		if(file_ctor != TLTypes::Null)
		{
			RESET_TLTYPE(InputFile, this->_file);
			this->_file->read(mtstream);
		}
		else
		{
			NULL_TLTYPE(this->_file);
			mtstream->readTLConstructor(); // Skip Null
		}
	}
	else if(this->_constructorid == InputChatPhoto::CtorInputChatPhoto)
	{
		TLInt id_ctor = mtstream->peekTLConstructor();
		
		if(id_ctor != TLTypes::Null)
		{
			RESET_TLTYPE(InputPhoto, this->_id);
			this->_id->read(mtstream);
		}
		else
		{
			NULL_TLTYPE(this->_id);
			mtstream->readTLConstructor(); // Skip Null
		}
	}
}

void InputChatPhoto::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == InputChatPhoto::CtorInputChatPhotoEmpty) ||
		 (this->_constructorid == InputChatPhoto::CtorInputChatUploadedPhoto) ||
		 (this->_constructorid == InputChatPhoto::CtorInputChatPhoto));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == InputChatPhoto::CtorInputChatUploadedPhoto)
	{
		if(this->_file != NULL)
			this->_file->write(mtstream);
		else
			mtstream->writeTLConstructor(TLTypes::Null);
	}
	else if(this->_constructorid == InputChatPhoto::CtorInputChatPhoto)
	{
		if(this->_id != NULL)
			this->_id->write(mtstream);
		else
			mtstream->writeTLConstructor(TLTypes::Null);
	}
}

void InputChatPhoto::compileFlags() 
{
	
}

InputFile* InputChatPhoto::file() const
{
	return this->_file;
}

void InputChatPhoto::setFile(InputFile* file) 
{
	if(this->_file == file)
		return;

	this->_file = file;
	emit fileChanged();
}

InputPhoto* InputChatPhoto::id() const
{
	return this->_id;
}

void InputChatPhoto::setId(InputPhoto* id) 
{
	if(this->_id == id)
		return;

	this->_id = id;
	emit idChanged();
}

