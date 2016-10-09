#ifndef INPUTGAME_H
#define INPUTGAME_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "inputuser.h"
#include "../../types/basic.h"

class InputGame: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLLong id READ id WRITE setId NOTIFY idChanged)
	Q_PROPERTY(TLLong accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
	Q_PROPERTY(InputUser* botId READ botId WRITE setBotId NOTIFY botIdChanged)
	Q_PROPERTY(TLString shortName READ shortName WRITE setShortName NOTIFY shortNameChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorInputGameID = 0x32c3e77,
			CtorInputGameShortName = 0xc331e80a,
		};

	public:
		explicit InputGame(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLLong id() const;
		void setId(TLLong id);
		TLLong accessHash() const;
		void setAccessHash(TLLong access_hash);
		InputUser* botId() const;
		void setBotId(InputUser* bot_id);
		TLString shortName() const;
		void setShortName(TLString short_name);

	signals:
		void idChanged();
		void accessHashChanged();
		void botIdChanged();
		void shortNameChanged();

	private:
		TLLong _id;
		TLLong _access_hash;
		InputUser* _bot_id;
		TLString _short_name;

};

#endif // INPUTGAME_H
