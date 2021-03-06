#ifndef ERROR_H
#define ERROR_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/basic.h"
#include "../../types/telegramobject.h"

class Error: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt code READ code WRITE setCode NOTIFY codeChanged)
	Q_PROPERTY(TLString text READ text WRITE setText NOTIFY textChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorError = 0xc4b9f9bb,
		};

	public:
		explicit Error(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt code() const;
		void setCode(TLInt code);
		TLString text() const;
		void setText(TLString text);

	signals:
		void codeChanged();
		void textChanged();

	private:
		TLInt _code;
		TLString _text;

};

#endif // ERROR_H
