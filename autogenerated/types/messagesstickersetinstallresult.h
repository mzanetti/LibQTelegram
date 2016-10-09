#ifndef MESSAGESSTICKERSETINSTALLRESULT_H
#define MESSAGESSTICKERSETINSTALLRESULT_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "stickersetcovered.h"
#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class MessagesStickerSetInstallResult: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLVector<StickerSetCovered*> sets READ sets WRITE setSets NOTIFY setsChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorMessagesStickerSetInstallResultSuccess = 0x38641628,
			CtorMessagesStickerSetInstallResultArchive = 0x35e410a8,
		};

	public:
		explicit MessagesStickerSetInstallResult(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		const TLVector<StickerSetCovered*>& sets() const;
		void setSets(const TLVector<StickerSetCovered*>& sets);

	signals:
		void setsChanged();

	private:
		TLVector<StickerSetCovered*> _sets;

};

#endif // MESSAGESSTICKERSETINSTALLRESULT_H
