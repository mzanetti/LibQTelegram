// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "msgsallinfo.h"


MsgsAllInfo::MsgsAllInfo(QObject* parent) : TelegramObject(parent)
{
	this->_constructorid = MsgsAllInfo::CtorMsgsAllInfo;
}

void MsgsAllInfo::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == MsgsAllInfo::CtorMsgsAllInfo));
	
	if(this->_constructorid == MsgsAllInfo::CtorMsgsAllInfo)
	{
		mtstream->readTLVector<TLLong>(this->_msg_ids, false);
		this->_info = mtstream->readTLString();
	}
}

void MsgsAllInfo::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == MsgsAllInfo::CtorMsgsAllInfo));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == MsgsAllInfo::CtorMsgsAllInfo)
	{
		mtstream->writeTLVector(this->_msg_ids, false);
		mtstream->writeTLString(this->_info);
	}
}

void MsgsAllInfo::compileFlags() 
{
	
}

const TLVector<TLLong>& MsgsAllInfo::msgIds() const
{
	return this->_msg_ids;
}

void MsgsAllInfo::setMsgIds(const TLVector<TLLong>& msg_ids) 
{
	if(this->_msg_ids == msg_ids)
		return;

	this->_msg_ids = msg_ids;
	emit msgIdsChanged();
}

TLString MsgsAllInfo::info() const
{
	return this->_info;
}

void MsgsAllInfo::setInfo(TLString info) 
{
	if(this->_info == info)
		return;

	this->_info = info;
	emit infoChanged();
}

