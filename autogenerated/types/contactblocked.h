#ifndef CONTACTBLOCKED_H
#define CONTACTBLOCKED_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class ContactBlocked: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt userId READ userId WRITE setUserId NOTIFY userIdChanged)
	Q_PROPERTY(TLInt date READ date WRITE setDate NOTIFY dateChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorContactBlocked = 0x561bc879,
		};

	public:
		explicit ContactBlocked(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt userId() const;
		void setUserId(TLInt user_id);
		TLInt date() const;
		void setDate(TLInt date);

	signals:
		void userIdChanged();
		void dateChanged();

	private:
		TLInt _user_id;
		TLInt _date;

};

#endif // CONTACTBLOCKED_H
