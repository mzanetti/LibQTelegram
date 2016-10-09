#ifndef HTTPWAIT_H
#define HTTPWAIT_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class HttpWait: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt maxDelay READ maxDelay WRITE setMaxDelay NOTIFY maxDelayChanged)
	Q_PROPERTY(TLInt waitAfter READ waitAfter WRITE setWaitAfter NOTIFY waitAfterChanged)
	Q_PROPERTY(TLInt maxWait READ maxWait WRITE setMaxWait NOTIFY maxWaitChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorHttpWait = 0x9299359f,
		};

	public:
		explicit HttpWait(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt maxDelay() const;
		void setMaxDelay(TLInt max_delay);
		TLInt waitAfter() const;
		void setWaitAfter(TLInt wait_after);
		TLInt maxWait() const;
		void setMaxWait(TLInt max_wait);

	signals:
		void maxDelayChanged();
		void waitAfterChanged();
		void maxWaitChanged();

	private:
		TLInt _max_delay;
		TLInt _wait_after;
		TLInt _max_wait;

};

#endif // HTTPWAIT_H
