#ifndef DIALOGSMODEL_H
#define DIALOGSMODEL_H

#include "abstract/telegrammodel.h"

class DialogsModel : public TelegramModel
{
    Q_OBJECT

    public:
        enum DialogRoles {
            TitleRole = Qt::UserRole + 10,
            TopMessageRole,
            TopMessageFromRole,
            TopMessageTextRole,
            IsTopMessageOutRole,
            IsTopMessageServiceRole,
            DraftMessageRole,
            IsMegaGroupRole,
            IsBroadcastRole,
            IsChatRole,
        };

    public:
        explicit DialogsModel(QObject *parent = 0);
        virtual QVariant data(const QModelIndex &index, int role) const;
        virtual int rowCount(const QModelIndex &) const;
        virtual QHash<int, QByteArray> roleNames() const;

    private:
        QString messageFrom(Message *message) const;
        QString firstMessageLine(Message* message) const;
        QString draftMessage(Dialog *dialog) const;

    private slots:
        void sortDialogs();
        void onNewDialogs(const TLVector<Dialog*>& dialogs);

    protected:
        virtual void telegramReady();

    private:
        QList<Dialog*> _dialogs;
};

#endif // DIALOGSMODEL_H
