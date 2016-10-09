// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "uploadfile.h"


UploadFile::UploadFile(QObject* parent) : TelegramObject(parent)
{
	this->_type = NULL;
	this->_mtime = 0;
	this->_constructorid = UploadFile::CtorUploadFile;
}

void UploadFile::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == UploadFile::CtorUploadFile));
	
	if(this->_constructorid == UploadFile::CtorUploadFile)
	{
		TLInt type_ctor = mtstream->peekTLConstructor();
		
		if(type_ctor != TLTypes::Null)
		{
			RESET_TLTYPE(StorageFileType, this->_type);
			this->_type->read(mtstream);
		}
		else
		{
			NULL_TLTYPE(this->_type);
			mtstream->readTLConstructor(); // Skip Null
		}
		
		this->_mtime = mtstream->readTLInt();
		this->_bytes = mtstream->readTLBytes();
	}
}

void UploadFile::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == UploadFile::CtorUploadFile));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == UploadFile::CtorUploadFile)
	{
		if(this->_type != NULL)
			this->_type->write(mtstream);
		else
			mtstream->writeTLConstructor(TLTypes::Null);
		
		mtstream->writeTLInt(this->_mtime);
		mtstream->writeTLBytes(this->_bytes);
	}
}

void UploadFile::compileFlags() 
{
	
}

StorageFileType* UploadFile::type() const
{
	return this->_type;
}

void UploadFile::setType(StorageFileType* type) 
{
	if(this->_type == type)
		return;

	this->_type = type;
	emit typeChanged();
}

TLInt UploadFile::mtime() const
{
	return this->_mtime;
}

void UploadFile::setMtime(TLInt mtime) 
{
	if(this->_mtime == mtime)
		return;

	this->_mtime = mtime;
	emit mtimeChanged();
}

TLBytes UploadFile::bytes() const
{
	return this->_bytes;
}

void UploadFile::setBytes(TLBytes bytes) 
{
	if(this->_bytes == bytes)
		return;

	this->_bytes = bytes;
	emit bytesChanged();
}

