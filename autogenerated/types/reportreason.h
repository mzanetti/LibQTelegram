#ifndef REPORTREASON_H
#define REPORTREASON_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/basic.h"
#include "../../types/telegramobject.h"

class ReportReason: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLString text READ text WRITE setText NOTIFY textChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorInputReportReasonSpam = 0x58dbcab8,
			CtorInputReportReasonViolence = 0x1e22c78d,
			CtorInputReportReasonPornography = 0x2e59d922,
			CtorInputReportReasonOther = 0xe1746d0a,
		};

	public:
		explicit ReportReason(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLString text() const;
		void setText(TLString text);

	signals:
		void textChanged();

	private:
		TLString _text;

};

#endif // REPORTREASON_H
