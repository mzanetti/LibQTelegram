#ifndef MESSAGESBOTCALLBACKANSWER_H
#define MESSAGESBOTCALLBACKANSWER_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class MessagesBotCallbackAnswer: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt flags READ flags WRITE setFlags NOTIFY flagsChanged)
	Q_PROPERTY(TLTrue isAlert READ isAlert WRITE setIsAlert NOTIFY isAlertChanged)
	Q_PROPERTY(TLTrue hasUrl READ hasUrl WRITE setHasUrl NOTIFY hasUrlChanged)
	Q_PROPERTY(TLString message READ message WRITE setMessage NOTIFY messageChanged)
	Q_PROPERTY(TLString url READ url WRITE setUrl NOTIFY urlChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorMessagesBotCallbackAnswer = 0xb10df1fb,
		};

	public:
		explicit MessagesBotCallbackAnswer(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt flags() const;
		void setFlags(TLInt flags);
		TLTrue isAlert() const;
		void setIsAlert(TLTrue is_alert);
		TLTrue hasUrl() const;
		void setHasUrl(TLTrue has_url);
		TLString message() const;
		void setMessage(TLString message);
		TLString url() const;
		void setUrl(TLString url);

	signals:
		void flagsChanged();
		void isAlertChanged();
		void hasUrlChanged();
		void messageChanged();
		void urlChanged();

	private:
		TLInt _flags;
		TLTrue _is_alert;
		TLTrue _has_url;
		TLString _message;
		TLString _url;

};

#endif // MESSAGESBOTCALLBACKANSWER_H
