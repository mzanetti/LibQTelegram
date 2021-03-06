#-------------------------------------------------
#
# Project created by QtCreator 2016-09-12T11:56:22
#
#-------------------------------------------------

QT       -= gui
QT       += network quick sql
CONFIG += c++11

TARGET = QTelegram
TEMPLATE = lib

DEFINES += LIBQTELEGRAM_LIBRARY QT_FORCE_ASSERTS
LIBS += -lcrypto -lz

SOURCES += \
    autogenerated/mtproto/decompiler/decompilertable.cpp \
    autogenerated/mtproto/decompiler/mtprotodecompiler.cpp \
    autogenerated/mtproto/badmsgnotification.cpp \
    autogenerated/mtproto/clientdhinnerdata.cpp \
    autogenerated/mtproto/destroysessionres.cpp \
    autogenerated/mtproto/futuresalt.cpp \
    autogenerated/mtproto/futuresalts.cpp \
    autogenerated/mtproto/httpwait.cpp \
    autogenerated/mtproto/msgdetailedinfo.cpp \
    autogenerated/mtproto/msgresendreq.cpp \
    autogenerated/mtproto/msgsack.cpp \
    autogenerated/mtproto/msgsallinfo.cpp \
    autogenerated/mtproto/msgsstateinfo.cpp \
    autogenerated/mtproto/msgsstatereq.cpp \
    autogenerated/mtproto/newsession.cpp \
    autogenerated/mtproto/pong.cpp \
    autogenerated/mtproto/pqinnerdata.cpp \
    autogenerated/mtproto/respq.cpp \
    autogenerated/mtproto/rpcdropanswer.cpp \
    autogenerated/mtproto/rpcerror.cpp \
    autogenerated/mtproto/serverdhinnerdata.cpp \
    autogenerated/mtproto/serverdhparams.cpp \
    autogenerated/mtproto/setclientdhparamsanswer.cpp \
    autogenerated/types/accountauthorizations.cpp \
    autogenerated/types/accountdaysttl.cpp \
    autogenerated/types/accountpassword.cpp \
    autogenerated/types/accountpasswordinputsettings.cpp \
    autogenerated/types/accountpasswordsettings.cpp \
    autogenerated/types/accountprivacyrules.cpp \
    autogenerated/types/authauthorization.cpp \
    autogenerated/types/authcheckedphone.cpp \
    autogenerated/types/authcodetype.cpp \
    autogenerated/types/authexportedauthorization.cpp \
    autogenerated/types/authorization.cpp \
    autogenerated/types/authpasswordrecovery.cpp \
    autogenerated/types/authsentcode.cpp \
    autogenerated/types/authsentcodetype.cpp \
    autogenerated/types/botcommand.cpp \
    autogenerated/types/botinfo.cpp \
    autogenerated/types/botinlinemessage.cpp \
    autogenerated/types/botinlineresult.cpp \
    autogenerated/types/channelmessagesfilter.cpp \
    autogenerated/types/channelparticipant.cpp \
    autogenerated/types/channelparticipantrole.cpp \
    autogenerated/types/channelparticipantsfilter.cpp \
    autogenerated/types/channelschannelparticipant.cpp \
    autogenerated/types/channelschannelparticipants.cpp \
    autogenerated/types/chat.cpp \
    autogenerated/types/chatfull.cpp \
    autogenerated/types/chatinvite.cpp \
    autogenerated/types/chatparticipant.cpp \
    autogenerated/types/chatparticipants.cpp \
    autogenerated/types/chatphoto.cpp \
    autogenerated/types/config.cpp \
    autogenerated/types/contact.cpp \
    autogenerated/types/contactblocked.cpp \
    autogenerated/types/contactlink.cpp \
    autogenerated/types/contactsblocked.cpp \
    autogenerated/types/contactscontacts.cpp \
    autogenerated/types/contactsfound.cpp \
    autogenerated/types/contactsimportedcontacts.cpp \
    autogenerated/types/contactslink.cpp \
    autogenerated/types/contactsresolvedpeer.cpp \
    autogenerated/types/contactstatus.cpp \
    autogenerated/types/contactstoppeers.cpp \
    autogenerated/types/dcoption.cpp \
    autogenerated/types/dialog.cpp \
    autogenerated/types/disabledfeature.cpp \
    autogenerated/types/document.cpp \
    autogenerated/types/documentattribute.cpp \
    autogenerated/types/draftmessage.cpp \
    autogenerated/types/encryptedchat.cpp \
    autogenerated/types/encryptedfile.cpp \
    autogenerated/types/encryptedmessage.cpp \
    autogenerated/types/error.cpp \
    autogenerated/types/exportedchatinvite.cpp \
    autogenerated/types/exportedmessagelink.cpp \
    autogenerated/types/filelocation.cpp \
    autogenerated/types/foundgif.cpp \
    autogenerated/types/game.cpp \
    autogenerated/types/geopoint.cpp \
    autogenerated/types/helpappchangelog.cpp \
    autogenerated/types/helpappupdate.cpp \
    autogenerated/types/helpinvitetext.cpp \
    autogenerated/types/helpsupport.cpp \
    autogenerated/types/helptermsofservice.cpp \
    autogenerated/types/highscore.cpp \
    autogenerated/types/importedcontact.cpp \
    autogenerated/types/inlinebotswitchpm.cpp \
    autogenerated/types/inputappevent.cpp \
    autogenerated/types/inputbotinlinemessage.cpp \
    autogenerated/types/inputbotinlinemessageid.cpp \
    autogenerated/types/inputbotinlineresult.cpp \
    autogenerated/types/inputchannel.cpp \
    autogenerated/types/inputchatphoto.cpp \
    autogenerated/types/inputcontact.cpp \
    autogenerated/types/inputdocument.cpp \
    autogenerated/types/inputencryptedchat.cpp \
    autogenerated/types/inputencryptedfile.cpp \
    autogenerated/types/inputfile.cpp \
    autogenerated/types/inputfilelocation.cpp \
    autogenerated/types/inputgame.cpp \
    autogenerated/types/inputgeopoint.cpp \
    autogenerated/types/inputmedia.cpp \
    autogenerated/types/inputnotifypeer.cpp \
    autogenerated/types/inputpeer.cpp \
    autogenerated/types/inputpeernotifyevents.cpp \
    autogenerated/types/inputpeernotifysettings.cpp \
    autogenerated/types/inputphoto.cpp \
    autogenerated/types/inputprivacykey.cpp \
    autogenerated/types/inputprivacyrule.cpp \
    autogenerated/types/inputstickeredmedia.cpp \
    autogenerated/types/inputstickerset.cpp \
    autogenerated/types/inputuser.cpp \
    autogenerated/types/keyboardbutton.cpp \
    autogenerated/types/keyboardbuttonrow.cpp \
    autogenerated/types/maskcoords.cpp \
    autogenerated/types/message.cpp \
    autogenerated/types/messageaction.cpp \
    autogenerated/types/messageentity.cpp \
    autogenerated/types/messagefwdheader.cpp \
    autogenerated/types/messagemedia.cpp \
    autogenerated/types/messagerange.cpp \
    autogenerated/types/messagesaffectedhistory.cpp \
    autogenerated/types/messagesaffectedmessages.cpp \
    autogenerated/types/messagesallstickers.cpp \
    autogenerated/types/messagesarchivedstickers.cpp \
    autogenerated/types/messagesbotcallbackanswer.cpp \
    autogenerated/types/messagesbotresults.cpp \
    autogenerated/types/messageschatfull.cpp \
    autogenerated/types/messageschats.cpp \
    autogenerated/types/messagesdhconfig.cpp \
    autogenerated/types/messagesdialogs.cpp \
    autogenerated/types/messagesfeaturedstickers.cpp \
    autogenerated/types/messagesfilter.cpp \
    autogenerated/types/messagesfoundgifs.cpp \
    autogenerated/types/messageshighscores.cpp \
    autogenerated/types/messagesmessageeditdata.cpp \
    autogenerated/types/messagesmessages.cpp \
    autogenerated/types/messagespeerdialogs.cpp \
    autogenerated/types/messagesrecentstickers.cpp \
    autogenerated/types/messagessavedgifs.cpp \
    autogenerated/types/messagessentencryptedmessage.cpp \
    autogenerated/types/messagesstickers.cpp \
    autogenerated/types/messagesstickerset.cpp \
    autogenerated/types/messagesstickersetinstallresult.cpp \
    autogenerated/types/nearestdc.cpp \
    autogenerated/types/notifypeer.cpp \
    autogenerated/types/null.cpp \
    autogenerated/types/peer.cpp \
    autogenerated/types/peernotifyevents.cpp \
    autogenerated/types/peernotifysettings.cpp \
    autogenerated/types/peersettings.cpp \
    autogenerated/types/photo.cpp \
    autogenerated/types/photosize.cpp \
    autogenerated/types/photosphoto.cpp \
    autogenerated/types/photosphotos.cpp \
    autogenerated/types/privacykey.cpp \
    autogenerated/types/privacyrule.cpp \
    autogenerated/types/receivednotifymessage.cpp \
    autogenerated/types/replymarkup.cpp \
    autogenerated/types/reportreason.cpp \
    autogenerated/types/sendmessageaction.cpp \
    autogenerated/types/stickerpack.cpp \
    autogenerated/types/stickerset.cpp \
    autogenerated/types/stickersetcovered.cpp \
    autogenerated/types/storagefiletype.cpp \
    autogenerated/types/toppeer.cpp \
    autogenerated/types/toppeercategory.cpp \
    autogenerated/types/toppeercategorypeers.cpp \
    autogenerated/types/update.cpp \
    autogenerated/types/updates.cpp \
    autogenerated/types/updateschanneldifference.cpp \
    autogenerated/types/updatesdifference.cpp \
    autogenerated/types/updatesstate.cpp \
    autogenerated/types/uploadfile.cpp \
    autogenerated/types/user.cpp \
    autogenerated/types/userfull.cpp \
    autogenerated/types/userprofilephoto.cpp \
    autogenerated/types/userstatus.cpp \
    autogenerated/types/wallpaper.cpp \
    autogenerated/types/webpage.cpp \
    autogenerated/mtprotoapi.cpp \
    autogenerated/telegramapi.cpp \
    config/dcconfig.cpp \
    config/telegramconfig.cpp \
    crypto/aes.cpp \
    crypto/gzip.cpp \
    crypto/math.cpp \
    crypto/rsa.cpp \
    mtproto/dc/dc.cpp \
    mtproto/dc/dcauthorization.cpp \
    mtproto/dc/dcconnection.cpp \
    mtproto/dc/dcsession.cpp \
    mtproto/dc/dcsessionmanager.cpp \
    mtproto/decompiler/mtprotodecompilerbase.cpp \
    mtproto/mtprotoreply.cpp \
    mtproto/mtprotorequest.cpp \
    mtproto/mtprotoservicehandler.cpp \
    mtproto/mtprotostream.cpp \
    types/mtproto/messagecontainer.cpp \
    types/mtproto/messagecopy.cpp \
    types/mtproto/mtprotomessage.cpp \
    types/mtproto/mtprotoobject.cpp \
    types/mtproto/rpcresult.cpp \
    types/byteconverter.cpp \
    types/telegramobject.cpp \
    models/dialogsmodel.cpp \
    mtproto/mtprotoupdatehandler.cpp \
    config/cache/telegramcache.cpp \
    config/cache/cacheinitializer.cpp \
    types/telegramhelper.cpp \
    autogenerated/clientsyncmanager.cpp \
    objects/telegraminitializer.cpp \
    objects/telegramqmlbase.cpp \
    telegram.cpp \
    autogenerated/telegramqml.cpp \
    models/contactsmodel.cpp \
    models/abstract/telegrammodel.cpp \
    models/abstract/telegramsortfilterproxymodel.cpp \
    config/cache/filecache.cpp \
    objects/fileobject.cpp \
    models/messagesmodel.cpp \
    config/cache/database/cachedatabase.cpp \
    config/cache/database/tables/dialogstable.cpp \
    config/cache/database/tables/userstable.cpp \
    config/cache/database/tables/chatstable.cpp \
    config/cache/database/tables/databasetable.cpp \
    config/cache/database/databasedata.cpp \
    config/cache/database/tables/messagestable.cpp \
    quick/qquickmediamessageitem.cpp \
    quick/qquickpeerimage.cpp \
    quick/qquickbaseitem.cpp \
    config/cache/cachefetcher.cpp \
    objects/notifications/telegramnotifications.cpp \
    objects/notifications/notificationobject.cpp \
    objects/sendstatus/sendstatushandler.cpp \
    objects/sendstatus/sendstatusobject.cpp \
    config/cache/database/tables/pendingwebpagetable.cpp \
    quick/qquickwaveform.cpp \
    objects/peerprofile.cpp \
    config/cache/database/tables/chatfulltable.cpp \
    config/cache/fileuploader.cpp

HEADERS +=\
        libqtelegram_global.h \
    autogenerated/mtproto/decompiler/decompilertable.h \
    autogenerated/mtproto/decompiler/mtprotodecompiler.h \
    autogenerated/mtproto/badmsgnotification.h \
    autogenerated/mtproto/clientdhinnerdata.h \
    autogenerated/mtproto/destroysessionres.h \
    autogenerated/mtproto/futuresalt.h \
    autogenerated/mtproto/futuresalts.h \
    autogenerated/mtproto/httpwait.h \
    autogenerated/mtproto/msgdetailedinfo.h \
    autogenerated/mtproto/msgresendreq.h \
    autogenerated/mtproto/msgsack.h \
    autogenerated/mtproto/msgsallinfo.h \
    autogenerated/mtproto/msgsstateinfo.h \
    autogenerated/mtproto/msgsstatereq.h \
    autogenerated/mtproto/mtproto.h \
    autogenerated/mtproto/newsession.h \
    autogenerated/mtproto/pong.h \
    autogenerated/mtproto/pqinnerdata.h \
    autogenerated/mtproto/respq.h \
    autogenerated/mtproto/rpcdropanswer.h \
    autogenerated/mtproto/rpcerror.h \
    autogenerated/mtproto/serverdhinnerdata.h \
    autogenerated/mtproto/serverdhparams.h \
    autogenerated/mtproto/setclientdhparamsanswer.h \
    autogenerated/types/accountauthorizations.h \
    autogenerated/types/accountdaysttl.h \
    autogenerated/types/accountpassword.h \
    autogenerated/types/accountpasswordinputsettings.h \
    autogenerated/types/accountpasswordsettings.h \
    autogenerated/types/accountprivacyrules.h \
    autogenerated/types/authauthorization.h \
    autogenerated/types/authcheckedphone.h \
    autogenerated/types/authcodetype.h \
    autogenerated/types/authexportedauthorization.h \
    autogenerated/types/authorization.h \
    autogenerated/types/authpasswordrecovery.h \
    autogenerated/types/authsentcode.h \
    autogenerated/types/authsentcodetype.h \
    autogenerated/types/botcommand.h \
    autogenerated/types/botinfo.h \
    autogenerated/types/botinlinemessage.h \
    autogenerated/types/botinlineresult.h \
    autogenerated/types/channelmessagesfilter.h \
    autogenerated/types/channelparticipant.h \
    autogenerated/types/channelparticipantrole.h \
    autogenerated/types/channelparticipantsfilter.h \
    autogenerated/types/channelschannelparticipant.h \
    autogenerated/types/channelschannelparticipants.h \
    autogenerated/types/chat.h \
    autogenerated/types/chatfull.h \
    autogenerated/types/chatinvite.h \
    autogenerated/types/chatparticipant.h \
    autogenerated/types/chatparticipants.h \
    autogenerated/types/chatphoto.h \
    autogenerated/types/config.h \
    autogenerated/types/contact.h \
    autogenerated/types/contactblocked.h \
    autogenerated/types/contactlink.h \
    autogenerated/types/contactsblocked.h \
    autogenerated/types/contactscontacts.h \
    autogenerated/types/contactsfound.h \
    autogenerated/types/contactsimportedcontacts.h \
    autogenerated/types/contactslink.h \
    autogenerated/types/contactsresolvedpeer.h \
    autogenerated/types/contactstatus.h \
    autogenerated/types/contactstoppeers.h \
    autogenerated/types/dcoption.h \
    autogenerated/types/dialog.h \
    autogenerated/types/disabledfeature.h \
    autogenerated/types/document.h \
    autogenerated/types/documentattribute.h \
    autogenerated/types/draftmessage.h \
    autogenerated/types/encryptedchat.h \
    autogenerated/types/encryptedfile.h \
    autogenerated/types/encryptedmessage.h \
    autogenerated/types/error.h \
    autogenerated/types/exportedchatinvite.h \
    autogenerated/types/exportedmessagelink.h \
    autogenerated/types/filelocation.h \
    autogenerated/types/foundgif.h \
    autogenerated/types/game.h \
    autogenerated/types/geopoint.h \
    autogenerated/types/helpappchangelog.h \
    autogenerated/types/helpappupdate.h \
    autogenerated/types/helpinvitetext.h \
    autogenerated/types/helpsupport.h \
    autogenerated/types/helptermsofservice.h \
    autogenerated/types/highscore.h \
    autogenerated/types/importedcontact.h \
    autogenerated/types/inlinebotswitchpm.h \
    autogenerated/types/inputappevent.h \
    autogenerated/types/inputbotinlinemessage.h \
    autogenerated/types/inputbotinlinemessageid.h \
    autogenerated/types/inputbotinlineresult.h \
    autogenerated/types/inputchannel.h \
    autogenerated/types/inputchatphoto.h \
    autogenerated/types/inputcontact.h \
    autogenerated/types/inputdocument.h \
    autogenerated/types/inputencryptedchat.h \
    autogenerated/types/inputencryptedfile.h \
    autogenerated/types/inputfile.h \
    autogenerated/types/inputfilelocation.h \
    autogenerated/types/inputgame.h \
    autogenerated/types/inputgeopoint.h \
    autogenerated/types/inputmedia.h \
    autogenerated/types/inputnotifypeer.h \
    autogenerated/types/inputpeer.h \
    autogenerated/types/inputpeernotifyevents.h \
    autogenerated/types/inputpeernotifysettings.h \
    autogenerated/types/inputphoto.h \
    autogenerated/types/inputprivacykey.h \
    autogenerated/types/inputprivacyrule.h \
    autogenerated/types/inputstickeredmedia.h \
    autogenerated/types/inputstickerset.h \
    autogenerated/types/inputuser.h \
    autogenerated/types/keyboardbutton.h \
    autogenerated/types/keyboardbuttonrow.h \
    autogenerated/types/maskcoords.h \
    autogenerated/types/message.h \
    autogenerated/types/messageaction.h \
    autogenerated/types/messageentity.h \
    autogenerated/types/messagefwdheader.h \
    autogenerated/types/messagemedia.h \
    autogenerated/types/messagerange.h \
    autogenerated/types/messagesaffectedhistory.h \
    autogenerated/types/messagesaffectedmessages.h \
    autogenerated/types/messagesallstickers.h \
    autogenerated/types/messagesarchivedstickers.h \
    autogenerated/types/messagesbotcallbackanswer.h \
    autogenerated/types/messagesbotresults.h \
    autogenerated/types/messageschatfull.h \
    autogenerated/types/messageschats.h \
    autogenerated/types/messagesdhconfig.h \
    autogenerated/types/messagesdialogs.h \
    autogenerated/types/messagesfeaturedstickers.h \
    autogenerated/types/messagesfilter.h \
    autogenerated/types/messagesfoundgifs.h \
    autogenerated/types/messageshighscores.h \
    autogenerated/types/messagesmessageeditdata.h \
    autogenerated/types/messagesmessages.h \
    autogenerated/types/messagespeerdialogs.h \
    autogenerated/types/messagesrecentstickers.h \
    autogenerated/types/messagessavedgifs.h \
    autogenerated/types/messagessentencryptedmessage.h \
    autogenerated/types/messagesstickers.h \
    autogenerated/types/messagesstickerset.h \
    autogenerated/types/messagesstickersetinstallresult.h \
    autogenerated/types/nearestdc.h \
    autogenerated/types/notifypeer.h \
    autogenerated/types/null.h \
    autogenerated/types/peer.h \
    autogenerated/types/peernotifyevents.h \
    autogenerated/types/peernotifysettings.h \
    autogenerated/types/peersettings.h \
    autogenerated/types/photo.h \
    autogenerated/types/photosize.h \
    autogenerated/types/photosphoto.h \
    autogenerated/types/photosphotos.h \
    autogenerated/types/privacykey.h \
    autogenerated/types/privacyrule.h \
    autogenerated/types/receivednotifymessage.h \
    autogenerated/types/replymarkup.h \
    autogenerated/types/reportreason.h \
    autogenerated/types/sendmessageaction.h \
    autogenerated/types/stickerpack.h \
    autogenerated/types/stickerset.h \
    autogenerated/types/stickersetcovered.h \
    autogenerated/types/storagefiletype.h \
    autogenerated/types/toppeer.h \
    autogenerated/types/toppeercategory.h \
    autogenerated/types/toppeercategorypeers.h \
    autogenerated/types/types.h \
    autogenerated/types/update.h \
    autogenerated/types/updates.h \
    autogenerated/types/updateschanneldifference.h \
    autogenerated/types/updatesdifference.h \
    autogenerated/types/updatesstate.h \
    autogenerated/types/uploadfile.h \
    autogenerated/types/user.h \
    autogenerated/types/userfull.h \
    autogenerated/types/userprofilephoto.h \
    autogenerated/types/userstatus.h \
    autogenerated/types/wallpaper.h \
    autogenerated/types/webpage.h \
    autogenerated/mtprotoapi.h \
    autogenerated/telegramapi.h \
    autogenerated/tltypes.h \
    config/dcconfig.h \
    config/telegramconfig.h \
    crypto/aes.h \
    crypto/gzip.h \
    crypto/math.h \
    crypto/rsa.h \
    mtproto/dc/dc.h \
    mtproto/dc/dcauthorization.h \
    mtproto/dc/dcconnection.h \
    mtproto/dc/dcsession.h \
    mtproto/dc/dcsessionmanager.h \
    mtproto/decompiler/mtprotodecompilerbase.h \
    mtproto/mtprotoreply.h \
    mtproto/mtprotorequest.h \
    mtproto/mtprotoservicehandler.h \
    mtproto/mtprotostream.h \
    types/mtproto/messagecontainer.h \
    types/mtproto/messagecopy.h \
    types/mtproto/mtprotomessage.h \
    types/mtproto/mtprotoobject.h \
    types/mtproto/rpcresult.h \
    types/basic.h \
    types/byteconverter.h \
    types/telegramobject.h \
    models/dialogsmodel.h \
    mtproto/mtprotoupdatehandler.h \
    config/cache/telegramcache.h \
    config/cache/cacheinitializer.h \
    types/telegramhelper.h \
    autogenerated/clientsyncmanager.h \
    objects/telegraminitializer.h \
    objects/telegramqmlbase.h \
    telegram.h \
    autogenerated/telegramqml.h \
    models/contactsmodel.h \
    models/abstract/telegrammodel.h \
    models/abstract/telegramsortfilterproxymodel.h \
    config/cache/filecache.h \
    objects/fileobject.h \
    models/messagesmodel.h \
    config/cache/database/cachedatabase.h \
    config/cache/database/databasedata.h \
    config/cache/database/tables/dialogstable.h \
    config/cache/database/tables/userstable.h \
    config/cache/database/tables/chatstable.h \
    config/cache/database/tables/databasetable.h \
    config/cache/database/tables/messagestable.h \
    quick/qquickmediamessageitem.h \
    quick/qquickpeerimage.h \
    quick/qquickbaseitem.h \
    config/cache/cachefetcher.h \
    objects/notifications/telegramnotifications.h \
    objects/notifications/notificationobject.h \
    objects/sendstatus/sendstatushandler.h \
    objects/sendstatus/sendstatusobject.h \
    crypto/hash.h \
    config/cache/database/tables/pendingwebpagetable.h \
    types/time.h \
    quick/qquickwaveform.h \
    objects/peerprofile.h \
    config/cache/database/tables/chatfulltable.h \
    config/cache/fileuploader.h
