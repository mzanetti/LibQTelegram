#ifndef IMPORTEDCONTACT_H
#define IMPORTEDCONTACT_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class ImportedContact: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt userId READ userId WRITE setUserId NOTIFY userIdChanged)
	Q_PROPERTY(TLLong clientId READ clientId WRITE setClientId NOTIFY clientIdChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorImportedContact = 0xd0028438,
		};

	public:
		explicit ImportedContact(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt userId() const;
		void setUserId(TLInt user_id);
		TLLong clientId() const;
		void setClientId(TLLong client_id);

	signals:
		void userIdChanged();
		void clientIdChanged();

	private:
		TLInt _user_id;
		TLLong _client_id;

};

#endif // IMPORTEDCONTACT_H
