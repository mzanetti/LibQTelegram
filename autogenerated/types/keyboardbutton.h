#ifndef KEYBOARDBUTTON_H
#define KEYBOARDBUTTON_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class KeyboardButton: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLString text READ text WRITE setText NOTIFY textChanged)
	Q_PROPERTY(TLString url READ url WRITE setUrl NOTIFY urlChanged)
	Q_PROPERTY(TLBytes data READ data WRITE setData NOTIFY dataChanged)
	Q_PROPERTY(TLInt flags READ flags WRITE setFlags NOTIFY flagsChanged)
	Q_PROPERTY(TLTrue isSamePeer READ isSamePeer WRITE setIsSamePeer NOTIFY isSamePeerChanged)
	Q_PROPERTY(TLString query READ query WRITE setQuery NOTIFY queryChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorKeyboardButton = 0xa2fa4880,
			CtorKeyboardButtonUrl = 0x258aff05,
			CtorKeyboardButtonCallback = 0x683a5e46,
			CtorKeyboardButtonRequestPhone = 0xb16a6c29,
			CtorKeyboardButtonRequestGeoLocation = 0xfc796b3f,
			CtorKeyboardButtonSwitchInline = 0x568a748,
			CtorKeyboardButtonGame = 0x50f41ccf,
		};

	public:
		explicit KeyboardButton(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLString text() const;
		void setText(TLString text);
		TLString url() const;
		void setUrl(TLString url);
		TLBytes data() const;
		void setData(TLBytes data);
		TLInt flags() const;
		void setFlags(TLInt flags);
		TLTrue isSamePeer() const;
		void setIsSamePeer(TLTrue is_same_peer);
		TLString query() const;
		void setQuery(TLString query);

	signals:
		void textChanged();
		void urlChanged();
		void dataChanged();
		void flagsChanged();
		void isSamePeerChanged();
		void queryChanged();

	private:
		TLString _text;
		TLString _url;
		TLBytes _data;
		TLInt _flags;
		TLTrue _is_same_peer;
		TLString _query;

};

#endif // KEYBOARDBUTTON_H
