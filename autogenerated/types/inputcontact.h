#ifndef INPUTCONTACT_H
#define INPUTCONTACT_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class InputContact: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLLong clientId READ clientId WRITE setClientId NOTIFY clientIdChanged)
	Q_PROPERTY(TLString phone READ phone WRITE setPhone NOTIFY phoneChanged)
	Q_PROPERTY(TLString firstName READ firstName WRITE setFirstName NOTIFY firstNameChanged)
	Q_PROPERTY(TLString lastName READ lastName WRITE setLastName NOTIFY lastNameChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorInputPhoneContact = 0xf392b7f4,
		};

	public:
		explicit InputContact(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLLong clientId() const;
		void setClientId(TLLong client_id);
		TLString phone() const;
		void setPhone(TLString phone);
		TLString firstName() const;
		void setFirstName(TLString first_name);
		TLString lastName() const;
		void setLastName(TLString last_name);

	signals:
		void clientIdChanged();
		void phoneChanged();
		void firstNameChanged();
		void lastNameChanged();

	private:
		TLLong _client_id;
		TLString _phone;
		TLString _first_name;
		TLString _last_name;

};

#endif // INPUTCONTACT_H
