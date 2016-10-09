#ifndef PHOTOSPHOTOS_H
#define PHOTOSPHOTOS_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "photo.h"
#include "user.h"
#include "../../types/basic.h"

class PhotosPhotos: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLVector<Photo*> photos READ photos WRITE setPhotos NOTIFY photosChanged)
	Q_PROPERTY(TLVector<User*> users READ users WRITE setUsers NOTIFY usersChanged)
	Q_PROPERTY(TLInt count READ count WRITE setCount NOTIFY countChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorPhotosPhotos = 0x8dca6aa5,
			CtorPhotosPhotosSlice = 0x15051f54,
		};

	public:
		explicit PhotosPhotos(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		const TLVector<Photo*>& photos() const;
		void setPhotos(const TLVector<Photo*>& photos);
		const TLVector<User*>& users() const;
		void setUsers(const TLVector<User*>& users);
		TLInt count() const;
		void setCount(TLInt count);

	signals:
		void photosChanged();
		void usersChanged();
		void countChanged();

	private:
		TLVector<Photo*> _photos;
		TLVector<User*> _users;
		TLInt _count;

};

#endif // PHOTOSPHOTOS_H
