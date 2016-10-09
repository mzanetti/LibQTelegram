#ifndef MSGSALLINFO_H
#define MSGSALLINFO_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class MsgsAllInfo: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLVector<TLLong> msgIds READ msgIds WRITE setMsgIds NOTIFY msgIdsChanged)
	Q_PROPERTY(TLString info READ info WRITE setInfo NOTIFY infoChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorMsgsAllInfo = 0x8cc0d131,
		};

	public:
		explicit MsgsAllInfo(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		const TLVector<TLLong>& msgIds() const;
		void setMsgIds(const TLVector<TLLong>& msg_ids);
		TLString info() const;
		void setInfo(TLString info);

	signals:
		void msgIdsChanged();
		void infoChanged();

	private:
		TLVector<TLLong> _msg_ids;
		TLString _info;

};

#endif // MSGSALLINFO_H
