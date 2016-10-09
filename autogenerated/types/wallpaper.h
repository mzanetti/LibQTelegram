#ifndef WALLPAPER_H
#define WALLPAPER_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/telegramobject.h"
#include "photosize.h"
#include "../../types/basic.h"

class WallPaper: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(TLInt id READ id WRITE setId NOTIFY idChanged)
	Q_PROPERTY(TLString title READ title WRITE setTitle NOTIFY titleChanged)
	Q_PROPERTY(TLVector<PhotoSize*> sizes READ sizes WRITE setSizes NOTIFY sizesChanged)
	Q_PROPERTY(TLInt color READ color WRITE setColor NOTIFY colorChanged)
	Q_PROPERTY(TLInt bgColor READ bgColor WRITE setBgColor NOTIFY bgColorChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorWallPaper = 0xccb03657,
			CtorWallPaperSolid = 0x63117f24,
		};

	public:
		explicit WallPaper(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		TLInt id() const;
		void setId(TLInt id);
		TLString title() const;
		void setTitle(TLString title);
		const TLVector<PhotoSize*>& sizes() const;
		void setSizes(const TLVector<PhotoSize*>& sizes);
		TLInt color() const;
		void setColor(TLInt color);
		TLInt bgColor() const;
		void setBgColor(TLInt bg_color);

	signals:
		void idChanged();
		void titleChanged();
		void sizesChanged();
		void colorChanged();
		void bgColorChanged();

	private:
		TLInt _id;
		TLString _title;
		TLVector<PhotoSize*> _sizes;
		TLInt _color;
		TLInt _bg_color;

};

#endif // WALLPAPER_H
