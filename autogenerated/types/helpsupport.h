#ifndef HELPSUPPORT_H
#define HELPSUPPORT_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "user.h"
#include "../../types/basic.h"

class HelpSupport: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLString phoneNumber READ phoneNumber WRITE setPhoneNumber NOTIFY phoneNumberChanged)
	Q_PROPERTY(User* user READ user WRITE setUser NOTIFY userChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorHelpSupport = 0x17c6b5f6,
		};

	public:
		explicit HelpSupport(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLString phoneNumber() const;
		void setPhoneNumber(TLString phone_number);
		User* user() const;
		void setUser(User* user);

	signals:
		void phoneNumberChanged();
		void userChanged();

	private:
		TLString _phone_number;
		User* _user;

};

#endif // HELPSUPPORT_H
