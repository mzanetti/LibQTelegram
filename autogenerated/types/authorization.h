#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class Authorization: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLLong hash READ hash WRITE setHash NOTIFY hashChanged)
	Q_PROPERTY(TLInt flags READ flags WRITE setFlags NOTIFY flagsChanged)
	Q_PROPERTY(TLString deviceModel READ deviceModel WRITE setDeviceModel NOTIFY deviceModelChanged)
	Q_PROPERTY(TLString platform READ platform WRITE setPlatform NOTIFY platformChanged)
	Q_PROPERTY(TLString systemVersion READ systemVersion WRITE setSystemVersion NOTIFY systemVersionChanged)
	Q_PROPERTY(TLInt apiId READ apiId WRITE setApiId NOTIFY apiIdChanged)
	Q_PROPERTY(TLString appName READ appName WRITE setAppName NOTIFY appNameChanged)
	Q_PROPERTY(TLString appVersion READ appVersion WRITE setAppVersion NOTIFY appVersionChanged)
	Q_PROPERTY(TLInt dateCreated READ dateCreated WRITE setDateCreated NOTIFY dateCreatedChanged)
	Q_PROPERTY(TLInt dateActive READ dateActive WRITE setDateActive NOTIFY dateActiveChanged)
	Q_PROPERTY(TLString ip READ ip WRITE setIp NOTIFY ipChanged)
	Q_PROPERTY(TLString country READ country WRITE setCountry NOTIFY countryChanged)
	Q_PROPERTY(TLString region READ region WRITE setRegion NOTIFY regionChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorAuthorization = 0x7bf2e6f6,
		};

	public:
		explicit Authorization(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLLong hash() const;
		void setHash(TLLong hash);
		TLInt flags() const;
		void setFlags(TLInt flags);
		TLString deviceModel() const;
		void setDeviceModel(TLString device_model);
		TLString platform() const;
		void setPlatform(TLString platform);
		TLString systemVersion() const;
		void setSystemVersion(TLString system_version);
		TLInt apiId() const;
		void setApiId(TLInt api_id);
		TLString appName() const;
		void setAppName(TLString app_name);
		TLString appVersion() const;
		void setAppVersion(TLString app_version);
		TLInt dateCreated() const;
		void setDateCreated(TLInt date_created);
		TLInt dateActive() const;
		void setDateActive(TLInt date_active);
		TLString ip() const;
		void setIp(TLString ip);
		TLString country() const;
		void setCountry(TLString country);
		TLString region() const;
		void setRegion(TLString region);

	signals:
		void hashChanged();
		void flagsChanged();
		void deviceModelChanged();
		void platformChanged();
		void systemVersionChanged();
		void apiIdChanged();
		void appNameChanged();
		void appVersionChanged();
		void dateCreatedChanged();
		void dateActiveChanged();
		void ipChanged();
		void countryChanged();
		void regionChanged();

	private:
		TLLong _hash;
		TLInt _flags;
		TLString _device_model;
		TLString _platform;
		TLString _system_version;
		TLInt _api_id;
		TLString _app_name;
		TLString _app_version;
		TLInt _date_created;
		TLInt _date_active;
		TLString _ip;
		TLString _country;
		TLString _region;

};

#endif // AUTHORIZATION_H
