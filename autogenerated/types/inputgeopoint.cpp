// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "inputgeopoint.h"


InputGeoPoint::InputGeoPoint(QObject* parent) : TelegramObject(parent)
{
	this->_latitude = 0;
	this->_longitude = 0;
}

void InputGeoPoint::read(MTProtoStream* mtstream) 
{
	this->_constructorid = mtstream->readTLConstructor();
	
	Q_ASSERT((this->_constructorid == InputGeoPoint::CtorInputGeoPointEmpty) ||
		 (this->_constructorid == InputGeoPoint::CtorInputGeoPoint));
	
	if(this->_constructorid == InputGeoPoint::CtorInputGeoPoint)
	{
		this->_latitude = mtstream->readTLDouble();
		this->_longitude = mtstream->readTLDouble();
	}
}

void InputGeoPoint::write(MTProtoStream* mtstream) 
{
	Q_ASSERT((this->_constructorid == InputGeoPoint::CtorInputGeoPointEmpty) ||
		 (this->_constructorid == InputGeoPoint::CtorInputGeoPoint));
	
	this->compileFlags();
	mtstream->writeTLConstructor(this->_constructorid);
	
	if(this->_constructorid == InputGeoPoint::CtorInputGeoPoint)
	{
		mtstream->writeTLDouble(this->_latitude);
		mtstream->writeTLDouble(this->_longitude);
	}
}

void InputGeoPoint::compileFlags() 
{
	
}

TLDouble InputGeoPoint::latitude() const
{
	return this->_latitude;
}

void InputGeoPoint::setLatitude(TLDouble latitude) 
{
	if(this->_latitude == latitude)
		return;

	this->_latitude = latitude;
	emit latitudeChanged();
}

TLDouble InputGeoPoint::longitude() const
{
	return this->_longitude;
}

void InputGeoPoint::setLongitude(TLDouble longitude) 
{
	if(this->_longitude == longitude)
		return;

	this->_longitude = longitude;
	emit longitudeChanged();
}

