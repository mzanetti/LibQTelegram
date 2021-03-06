#ifndef NEARESTDC_H
#define NEARESTDC_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/basic.h"
#include "../../types/telegramobject.h"

class NearestDc: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLString country READ country WRITE setCountry NOTIFY countryChanged)
	Q_PROPERTY(TLInt thisDc READ thisDc WRITE setThisDc NOTIFY thisDcChanged)
	Q_PROPERTY(TLInt nearestDc READ nearestDc WRITE setNearestDc NOTIFY nearestDcChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorNearestDc = 0x8e1a1775,
		};

	public:
		explicit NearestDc(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLString country() const;
		void setCountry(TLString country);
		TLInt thisDc() const;
		void setThisDc(TLInt this_dc);
		TLInt nearestDc() const;
		void setNearestDc(TLInt nearest_dc);

	signals:
		void countryChanged();
		void thisDcChanged();
		void nearestDcChanged();

	private:
		TLString _country;
		TLInt _this_dc;
		TLInt _nearest_dc;

};

#endif // NEARESTDC_H
