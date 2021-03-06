#ifndef DOCUMENT_H
#define DOCUMENT_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/basic.h"
#include "../../types/telegramobject.h"
#include "documentattribute.h"
#include "photosize.h"

class Document: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLLong id READ id WRITE setId NOTIFY idChanged)
	Q_PROPERTY(TLLong accessHash READ accessHash WRITE setAccessHash NOTIFY accessHashChanged)
	Q_PROPERTY(TLInt date READ date WRITE setDate NOTIFY dateChanged)
	Q_PROPERTY(TLString mimeType READ mimeType WRITE setMimeType NOTIFY mimeTypeChanged)
	Q_PROPERTY(TLInt size READ size WRITE setSize NOTIFY sizeChanged)
	Q_PROPERTY(PhotoSize* thumb READ thumb WRITE setThumb NOTIFY thumbChanged)
	Q_PROPERTY(TLInt dcId READ dcId WRITE setDcId NOTIFY dcIdChanged)
	Q_PROPERTY(TLInt version READ version WRITE setVersion NOTIFY versionChanged)
	Q_PROPERTY(TLVector<DocumentAttribute*> attributes READ attributes WRITE setAttributes NOTIFY attributesChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorDocumentEmpty = 0x36f8c871,
			CtorDocument = 0x87232bc7,
		};

	public:
		explicit Document(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLLong id() const;
		void setId(TLLong id);
		TLLong accessHash() const;
		void setAccessHash(TLLong access_hash);
		TLInt date() const;
		void setDate(TLInt date);
		TLString mimeType() const;
		void setMimeType(TLString mime_type);
		TLInt size() const;
		void setSize(TLInt size);
		PhotoSize* thumb() const;
		void setThumb(PhotoSize* thumb);
		TLInt dcId() const;
		void setDcId(TLInt dc_id);
		TLInt version() const;
		void setVersion(TLInt version);
		const TLVector<DocumentAttribute*>& attributes() const;
		void setAttributes(const TLVector<DocumentAttribute*>& attributes);

	signals:
		void idChanged();
		void accessHashChanged();
		void dateChanged();
		void mimeTypeChanged();
		void sizeChanged();
		void thumbChanged();
		void dcIdChanged();
		void versionChanged();
		void attributesChanged();

	private:
		TLLong _id;
		TLLong _access_hash;
		TLInt _date;
		TLString _mime_type;
		TLInt _size;
		PhotoSize* _thumb;
		TLInt _dc_id;
		TLInt _version;
		TLVector<DocumentAttribute*> _attributes;

};

#endif // DOCUMENT_H
