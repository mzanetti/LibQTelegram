#ifndef MESSAGESALLSTICKERS_H
#define MESSAGESALLSTICKERS_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "stickerset.h"
#include "../../types/basic.h"

class MessagesAllStickers: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt hash READ hash WRITE setHash NOTIFY hashChanged)
	Q_PROPERTY(TLVector<StickerSet*> sets READ sets WRITE setSets NOTIFY setsChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorMessagesAllStickersNotModified = 0xe86602c3,
			CtorMessagesAllStickers = 0xedfd405f,
		};

	public:
		explicit MessagesAllStickers(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt hash() const;
		void setHash(TLInt hash);
		const TLVector<StickerSet*>& sets() const;
		void setSets(const TLVector<StickerSet*>& sets);

	signals:
		void hashChanged();
		void setsChanged();

	private:
		TLInt _hash;
		TLVector<StickerSet*> _sets;

};

#endif // MESSAGESALLSTICKERS_H
