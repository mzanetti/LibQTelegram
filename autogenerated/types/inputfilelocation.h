#ifndef INPUTFILELOCATION_H
#define INPUTFILELOCATION_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "../../types/basic.h"

class InputFileLocation: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLLong volumeId READ volumeId WRITE setVolumeId NOTIFY volumeIdChanged)
	Q_PROPERTY(TLInt localId READ localId WRITE setLocalId NOTIFY localIdChanged)
	Q_PROPERTY(TLLong secret READ secret WRITE setSecret NOTIFY secretChanged)
	Q_PROPERTY(TLLong id READ id WRITE setId NOTIFY idChanged)
	Q_PROPERTY(TLLong accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
	Q_PROPERTY(TLInt version READ version WRITE setVersion NOTIFY versionChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorInputFileLocation = 0x14637196,
			CtorInputEncryptedFileLocation = 0xf5235d55,
			CtorInputDocumentFileLocation = 0x430f0724,
		};

	public:
		explicit InputFileLocation(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLLong volumeId() const;
		void setVolumeId(TLLong volume_id);
		TLInt localId() const;
		void setLocalId(TLInt local_id);
		TLLong secret() const;
		void setSecret(TLLong secret);
		TLLong id() const;
		void setId(TLLong id);
		TLLong accessHash() const;
		void setAccessHash(TLLong access_hash);
		TLInt version() const;
		void setVersion(TLInt version);

	signals:
		void volumeIdChanged();
		void localIdChanged();
		void secretChanged();
		void idChanged();
		void accessHashChanged();
		void versionChanged();

	private:
		TLLong _volume_id;
		TLInt _local_id;
		TLLong _secret;
		TLLong _id;
		TLLong _access_hash;
		TLInt _version;

};

#endif // INPUTFILELOCATION_H
