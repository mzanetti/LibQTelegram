#ifndef UPDATE_H
#define UPDATE_H

// Generated by APIGenerator 1.0
// DO NOT EDIT!!!

#include "../../types/basic.h"
#include "geopoint.h"
#include "../../types/telegramobject.h"
#include "userstatus.h"
#include "userprofilephoto.h"
#include "dcoption.h"
#include "draftmessage.h"
#include "peer.h"
#include "encryptedchat.h"
#include "notifypeer.h"
#include "chatparticipants.h"
#include "messagesstickerset.h"
#include "messagemedia.h"
#include "message.h"
#include "privacykey.h"
#include "webpage.h"
#include "privacyrule.h"
#include "sendmessageaction.h"
#include "encryptedmessage.h"
#include "peernotifysettings.h"
#include "contactlink.h"
#include "inputbotinlinemessageid.h"

class Update: public TelegramObject
{
	Q_OBJECT

	Q_PROPERTY(Message* messageUpdatenewmessage READ messageUpdatenewmessage WRITE setMessageUpdatenewmessage NOTIFY messageUpdatenewmessageChanged)
	Q_PROPERTY(TLInt pts READ pts WRITE setPts NOTIFY ptsChanged)
	Q_PROPERTY(TLInt ptsCount READ ptsCount WRITE setPtsCount NOTIFY ptsCountChanged)
	Q_PROPERTY(TLInt idUpdatemessageid READ idUpdatemessageid WRITE setIdUpdatemessageid NOTIFY idUpdatemessageidChanged)
	Q_PROPERTY(TLLong randomId READ randomId WRITE setRandomId NOTIFY randomIdChanged)
	Q_PROPERTY(TLVector<TLInt> messages READ messages WRITE setMessages NOTIFY messagesChanged)
	Q_PROPERTY(TLInt userId READ userId WRITE setUserId NOTIFY userIdChanged)
	Q_PROPERTY(SendMessageAction* action READ action WRITE setAction NOTIFY actionChanged)
	Q_PROPERTY(TLInt chatId READ chatId WRITE setChatId NOTIFY chatIdChanged)
	Q_PROPERTY(ChatParticipants* participants READ participants WRITE setParticipants NOTIFY participantsChanged)
	Q_PROPERTY(UserStatus* status READ status WRITE setStatus NOTIFY statusChanged)
	Q_PROPERTY(TLString firstName READ firstName WRITE setFirstName NOTIFY firstNameChanged)
	Q_PROPERTY(TLString lastName READ lastName WRITE setLastName NOTIFY lastNameChanged)
	Q_PROPERTY(TLString username READ username WRITE setUsername NOTIFY usernameChanged)
	Q_PROPERTY(TLInt date READ date WRITE setDate NOTIFY dateChanged)
	Q_PROPERTY(UserProfilePhoto* photo READ photo WRITE setPhoto NOTIFY photoChanged)
	Q_PROPERTY(TLBool isPrevious READ isPrevious WRITE setIsPrevious NOTIFY isPreviousChanged)
	Q_PROPERTY(ContactLink* myLink READ myLink WRITE setMyLink NOTIFY myLinkChanged)
	Q_PROPERTY(ContactLink* foreignLink READ foreignLink WRITE setForeignLink NOTIFY foreignLinkChanged)
	Q_PROPERTY(TLLong authKeyId READ authKeyId WRITE setAuthKeyId NOTIFY authKeyIdChanged)
	Q_PROPERTY(TLString device READ device WRITE setDevice NOTIFY deviceChanged)
	Q_PROPERTY(TLString location READ location WRITE setLocation NOTIFY locationChanged)
	Q_PROPERTY(EncryptedMessage* messageUpdatenewencryptedmessage READ messageUpdatenewencryptedmessage WRITE setMessageUpdatenewencryptedmessage NOTIFY messageUpdatenewencryptedmessageChanged)
	Q_PROPERTY(TLInt qts READ qts WRITE setQts NOTIFY qtsChanged)
	Q_PROPERTY(EncryptedChat* chat READ chat WRITE setChat NOTIFY chatChanged)
	Q_PROPERTY(TLInt maxDate READ maxDate WRITE setMaxDate NOTIFY maxDateChanged)
	Q_PROPERTY(TLInt inviterId READ inviterId WRITE setInviterId NOTIFY inviterIdChanged)
	Q_PROPERTY(TLInt version READ version WRITE setVersion NOTIFY versionChanged)
	Q_PROPERTY(TLVector<DcOption*> dcOptions READ dcOptions WRITE setDcOptions NOTIFY dcOptionsChanged)
	Q_PROPERTY(TLBool isBlocked READ isBlocked WRITE setIsBlocked NOTIFY isBlockedChanged)
	Q_PROPERTY(NotifyPeer* peerUpdatenotifysettings READ peerUpdatenotifysettings WRITE setPeerUpdatenotifysettings NOTIFY peerUpdatenotifysettingsChanged)
	Q_PROPERTY(PeerNotifySettings* notifySettings READ notifySettings WRITE setNotifySettings NOTIFY notifySettingsChanged)
	Q_PROPERTY(TLString type READ type WRITE setType NOTIFY typeChanged)
	Q_PROPERTY(TLString messageUpdateservicenotification READ messageUpdateservicenotification WRITE setMessageUpdateservicenotification NOTIFY messageUpdateservicenotificationChanged)
	Q_PROPERTY(MessageMedia* media READ media WRITE setMedia NOTIFY mediaChanged)
	Q_PROPERTY(TLBool isPopup READ isPopup WRITE setIsPopup NOTIFY isPopupChanged)
	Q_PROPERTY(PrivacyKey* key READ key WRITE setKey NOTIFY keyChanged)
	Q_PROPERTY(TLVector<PrivacyRule*> rules READ rules WRITE setRules NOTIFY rulesChanged)
	Q_PROPERTY(TLString phone READ phone WRITE setPhone NOTIFY phoneChanged)
	Q_PROPERTY(Peer* peerUpdatereadhistoryinbox READ peerUpdatereadhistoryinbox WRITE setPeerUpdatereadhistoryinbox NOTIFY peerUpdatereadhistoryinboxChanged)
	Q_PROPERTY(TLInt maxId READ maxId WRITE setMaxId NOTIFY maxIdChanged)
	Q_PROPERTY(Peer* peer READ peer WRITE setPeer NOTIFY peerChanged)
	Q_PROPERTY(WebPage* webpage READ webpage WRITE setWebpage NOTIFY webpageChanged)
	Q_PROPERTY(TLInt flags READ flags WRITE setFlags NOTIFY flagsChanged)
	Q_PROPERTY(TLInt channelId READ channelId WRITE setChannelId NOTIFY channelIdChanged)
	Q_PROPERTY(Message* messageUpdatenewchannelmessage READ messageUpdatenewchannelmessage WRITE setMessageUpdatenewchannelmessage NOTIFY messageUpdatenewchannelmessageChanged)
	Q_PROPERTY(TLInt id READ id WRITE setId NOTIFY idChanged)
	Q_PROPERTY(TLInt views READ views WRITE setViews NOTIFY viewsChanged)
	Q_PROPERTY(TLBool isEnabled READ isEnabled WRITE setIsEnabled NOTIFY isEnabledChanged)
	Q_PROPERTY(TLBool isAdmin READ isAdmin WRITE setIsAdmin NOTIFY isAdminChanged)
	Q_PROPERTY(MessagesStickerSet* stickerset READ stickerset WRITE setStickerset NOTIFY stickersetChanged)
	Q_PROPERTY(TLTrue isMasks READ isMasks WRITE setIsMasks NOTIFY isMasksChanged)
	Q_PROPERTY(TLVector<TLLong> order READ order WRITE setOrder NOTIFY orderChanged)
	Q_PROPERTY(TLLong queryId READ queryId WRITE setQueryId NOTIFY queryIdChanged)
	Q_PROPERTY(TLString query READ query WRITE setQuery NOTIFY queryChanged)
	Q_PROPERTY(GeoPoint* geo READ geo WRITE setGeo NOTIFY geoChanged)
	Q_PROPERTY(TLString offset READ offset WRITE setOffset NOTIFY offsetChanged)
	Q_PROPERTY(TLString idUpdatebotinlinesend READ idUpdatebotinlinesend WRITE setIdUpdatebotinlinesend NOTIFY idUpdatebotinlinesendChanged)
	Q_PROPERTY(InputBotInlineMessageID* msgIdUpdatebotinlinesend READ msgIdUpdatebotinlinesend WRITE setMsgIdUpdatebotinlinesend NOTIFY msgIdUpdatebotinlinesendChanged)
	Q_PROPERTY(Message* message READ message WRITE setMessage NOTIFY messageChanged)
	Q_PROPERTY(TLInt idUpdatechannelpinnedmessage READ idUpdatechannelpinnedmessage WRITE setIdUpdatechannelpinnedmessage NOTIFY idUpdatechannelpinnedmessageChanged)
	Q_PROPERTY(TLInt msgIdUpdatebotcallbackquery READ msgIdUpdatebotcallbackquery WRITE setMsgIdUpdatebotcallbackquery NOTIFY msgIdUpdatebotcallbackqueryChanged)
	Q_PROPERTY(TLLong chatInstance READ chatInstance WRITE setChatInstance NOTIFY chatInstanceChanged)
	Q_PROPERTY(TLBytes data READ data WRITE setData NOTIFY dataChanged)
	Q_PROPERTY(TLString gameShortName READ gameShortName WRITE setGameShortName NOTIFY gameShortNameChanged)
	Q_PROPERTY(InputBotInlineMessageID* msgIdUpdateinlinebotcallbackquery READ msgIdUpdateinlinebotcallbackquery WRITE setMsgIdUpdateinlinebotcallbackquery NOTIFY msgIdUpdateinlinebotcallbackqueryChanged)
	Q_PROPERTY(DraftMessage* draft READ draft WRITE setDraft NOTIFY draftChanged)

	Q_ENUMS(Constructors)

	public:
		enum Constructors {
			CtorUpdateNewMessage = 0x1f2b0afd,
			CtorUpdateMessageID = 0x4e90bfd6,
			CtorUpdateDeleteMessages = 0xa20db0e5,
			CtorUpdateUserTyping = 0x5c486927,
			CtorUpdateChatUserTyping = 0x9a65ea1f,
			CtorUpdateChatParticipants = 0x7761198,
			CtorUpdateUserStatus = 0x1bfbd823,
			CtorUpdateUserName = 0xa7332b73,
			CtorUpdateUserPhoto = 0x95313b0c,
			CtorUpdateContactRegistered = 0x2575bbb9,
			CtorUpdateContactLink = 0x9d2e67c5,
			CtorUpdateNewAuthorization = 0x8f06529a,
			CtorUpdateNewEncryptedMessage = 0x12bcbd9a,
			CtorUpdateEncryptedChatTyping = 0x1710f156,
			CtorUpdateEncryption = 0xb4a2e88d,
			CtorUpdateEncryptedMessagesRead = 0x38fe25b7,
			CtorUpdateChatParticipantAdd = 0xea4b0e5c,
			CtorUpdateChatParticipantDelete = 0x6e5f8c22,
			CtorUpdateDcOptions = 0x8e5e9873,
			CtorUpdateUserBlocked = 0x80ece81a,
			CtorUpdateNotifySettings = 0xbec268ef,
			CtorUpdateServiceNotification = 0x382dd3e4,
			CtorUpdatePrivacy = 0xee3b272a,
			CtorUpdateUserPhone = 0x12b9417b,
			CtorUpdateReadHistoryInbox = 0x9961fd5c,
			CtorUpdateReadHistoryOutbox = 0x2f2f21bf,
			CtorUpdateWebPage = 0x7f891213,
			CtorUpdateReadMessagesContents = 0x68c13933,
			CtorUpdateChannelTooLong = 0xeb0467fb,
			CtorUpdateChannel = 0xb6d45656,
			CtorUpdateNewChannelMessage = 0x62ba04d9,
			CtorUpdateReadChannelInbox = 0x4214f37f,
			CtorUpdateDeleteChannelMessages = 0xc37521c9,
			CtorUpdateChannelMessageViews = 0x98a12b4b,
			CtorUpdateChatAdmins = 0x6e947941,
			CtorUpdateChatParticipantAdmin = 0xb6901959,
			CtorUpdateNewStickerSet = 0x688a30aa,
			CtorUpdateStickerSetsOrder = 0xbb2d201,
			CtorUpdateStickerSets = 0x43ae3dec,
			CtorUpdateSavedGifs = 0x9375341e,
			CtorUpdateBotInlineQuery = 0x54826690,
			CtorUpdateBotInlineSend = 0xe48f964,
			CtorUpdateEditChannelMessage = 0x1b3f4df7,
			CtorUpdateChannelPinnedMessage = 0x98592475,
			CtorUpdateBotCallbackQuery = 0xe73547e1,
			CtorUpdateEditMessage = 0xe40370a3,
			CtorUpdateInlineBotCallbackQuery = 0xf9d27a5a,
			CtorUpdateReadChannelOutbox = 0x25d6c9c7,
			CtorUpdateDraftMessage = 0xee2bb969,
			CtorUpdateReadFeaturedStickers = 0x571d2742,
			CtorUpdateRecentStickers = 0x9a422c20,
			CtorUpdateConfig = 0xa229dd06,
			CtorUpdatePtsChanged = 0x3354678f,
		};

	public:
		explicit Update(QObject* parent = 0);
		virtual void read(MTProtoStream* mtstream);
		virtual void write(MTProtoStream* mtstream);
	protected:
		virtual void compileFlags();
	public:
		Message* messageUpdatenewmessage() const;
		void setMessageUpdatenewmessage(Message* message_updatenewmessage);
		TLInt pts() const;
		void setPts(TLInt pts);
		TLInt ptsCount() const;
		void setPtsCount(TLInt pts_count);
		TLInt idUpdatemessageid() const;
		void setIdUpdatemessageid(TLInt id_updatemessageid);
		TLLong randomId() const;
		void setRandomId(TLLong random_id);
		const TLVector<TLInt>& messages() const;
		void setMessages(const TLVector<TLInt>& messages);
		TLInt userId() const;
		void setUserId(TLInt user_id);
		SendMessageAction* action() const;
		void setAction(SendMessageAction* action);
		TLInt chatId() const;
		void setChatId(TLInt chat_id);
		ChatParticipants* participants() const;
		void setParticipants(ChatParticipants* participants);
		UserStatus* status() const;
		void setStatus(UserStatus* status);
		TLString firstName() const;
		void setFirstName(TLString first_name);
		TLString lastName() const;
		void setLastName(TLString last_name);
		TLString username() const;
		void setUsername(TLString username);
		TLInt date() const;
		void setDate(TLInt date);
		UserProfilePhoto* photo() const;
		void setPhoto(UserProfilePhoto* photo);
		TLBool isPrevious() const;
		void setIsPrevious(TLBool is_previous);
		ContactLink* myLink() const;
		void setMyLink(ContactLink* my_link);
		ContactLink* foreignLink() const;
		void setForeignLink(ContactLink* foreign_link);
		TLLong authKeyId() const;
		void setAuthKeyId(TLLong auth_key_id);
		TLString device() const;
		void setDevice(TLString device);
		TLString location() const;
		void setLocation(TLString location);
		EncryptedMessage* messageUpdatenewencryptedmessage() const;
		void setMessageUpdatenewencryptedmessage(EncryptedMessage* message_updatenewencryptedmessage);
		TLInt qts() const;
		void setQts(TLInt qts);
		EncryptedChat* chat() const;
		void setChat(EncryptedChat* chat);
		TLInt maxDate() const;
		void setMaxDate(TLInt max_date);
		TLInt inviterId() const;
		void setInviterId(TLInt inviter_id);
		TLInt version() const;
		void setVersion(TLInt version);
		const TLVector<DcOption*>& dcOptions() const;
		void setDcOptions(const TLVector<DcOption*>& dc_options);
		TLBool isBlocked() const;
		void setIsBlocked(TLBool is_blocked);
		NotifyPeer* peerUpdatenotifysettings() const;
		void setPeerUpdatenotifysettings(NotifyPeer* peer_updatenotifysettings);
		PeerNotifySettings* notifySettings() const;
		void setNotifySettings(PeerNotifySettings* notify_settings);
		TLString type() const;
		void setType(TLString type);
		TLString messageUpdateservicenotification() const;
		void setMessageUpdateservicenotification(TLString message_updateservicenotification);
		MessageMedia* media() const;
		void setMedia(MessageMedia* media);
		TLBool isPopup() const;
		void setIsPopup(TLBool is_popup);
		PrivacyKey* key() const;
		void setKey(PrivacyKey* key);
		const TLVector<PrivacyRule*>& rules() const;
		void setRules(const TLVector<PrivacyRule*>& rules);
		TLString phone() const;
		void setPhone(TLString phone);
		Peer* peerUpdatereadhistoryinbox() const;
		void setPeerUpdatereadhistoryinbox(Peer* peer_updatereadhistoryinbox);
		TLInt maxId() const;
		void setMaxId(TLInt max_id);
		Peer* peer() const;
		void setPeer(Peer* peer);
		WebPage* webpage() const;
		void setWebpage(WebPage* webpage);
		TLInt flags() const;
		void setFlags(TLInt flags);
		TLInt channelId() const;
		void setChannelId(TLInt channel_id);
		Message* messageUpdatenewchannelmessage() const;
		void setMessageUpdatenewchannelmessage(Message* message_updatenewchannelmessage);
		TLInt id() const;
		void setId(TLInt id);
		TLInt views() const;
		void setViews(TLInt views);
		TLBool isEnabled() const;
		void setIsEnabled(TLBool is_enabled);
		TLBool isAdmin() const;
		void setIsAdmin(TLBool is_admin);
		MessagesStickerSet* stickerset() const;
		void setStickerset(MessagesStickerSet* stickerset);
		TLTrue isMasks() const;
		void setIsMasks(TLTrue is_masks);
		const TLVector<TLLong>& order() const;
		void setOrder(const TLVector<TLLong>& order);
		TLLong queryId() const;
		void setQueryId(TLLong query_id);
		TLString query() const;
		void setQuery(TLString query);
		GeoPoint* geo() const;
		void setGeo(GeoPoint* geo);
		TLString offset() const;
		void setOffset(TLString offset);
		TLString idUpdatebotinlinesend() const;
		void setIdUpdatebotinlinesend(TLString id_updatebotinlinesend);
		InputBotInlineMessageID* msgIdUpdatebotinlinesend() const;
		void setMsgIdUpdatebotinlinesend(InputBotInlineMessageID* msg_id_updatebotinlinesend);
		Message* message() const;
		void setMessage(Message* message);
		TLInt idUpdatechannelpinnedmessage() const;
		void setIdUpdatechannelpinnedmessage(TLInt id_updatechannelpinnedmessage);
		TLInt msgIdUpdatebotcallbackquery() const;
		void setMsgIdUpdatebotcallbackquery(TLInt msg_id_updatebotcallbackquery);
		TLLong chatInstance() const;
		void setChatInstance(TLLong chat_instance);
		TLBytes data() const;
		void setData(TLBytes data);
		TLString gameShortName() const;
		void setGameShortName(TLString game_short_name);
		InputBotInlineMessageID* msgIdUpdateinlinebotcallbackquery() const;
		void setMsgIdUpdateinlinebotcallbackquery(InputBotInlineMessageID* msg_id_updateinlinebotcallbackquery);
		DraftMessage* draft() const;
		void setDraft(DraftMessage* draft);

	signals:
		void messageUpdatenewmessageChanged();
		void ptsChanged();
		void ptsCountChanged();
		void idUpdatemessageidChanged();
		void randomIdChanged();
		void messagesChanged();
		void userIdChanged();
		void actionChanged();
		void chatIdChanged();
		void participantsChanged();
		void statusChanged();
		void firstNameChanged();
		void lastNameChanged();
		void usernameChanged();
		void dateChanged();
		void photoChanged();
		void isPreviousChanged();
		void myLinkChanged();
		void foreignLinkChanged();
		void authKeyIdChanged();
		void deviceChanged();
		void locationChanged();
		void messageUpdatenewencryptedmessageChanged();
		void qtsChanged();
		void chatChanged();
		void maxDateChanged();
		void inviterIdChanged();
		void versionChanged();
		void dcOptionsChanged();
		void isBlockedChanged();
		void peerUpdatenotifysettingsChanged();
		void notifySettingsChanged();
		void typeChanged();
		void messageUpdateservicenotificationChanged();
		void mediaChanged();
		void isPopupChanged();
		void keyChanged();
		void rulesChanged();
		void phoneChanged();
		void peerUpdatereadhistoryinboxChanged();
		void maxIdChanged();
		void peerChanged();
		void webpageChanged();
		void flagsChanged();
		void channelIdChanged();
		void messageUpdatenewchannelmessageChanged();
		void idChanged();
		void viewsChanged();
		void isEnabledChanged();
		void isAdminChanged();
		void stickersetChanged();
		void isMasksChanged();
		void orderChanged();
		void queryIdChanged();
		void queryChanged();
		void geoChanged();
		void offsetChanged();
		void idUpdatebotinlinesendChanged();
		void msgIdUpdatebotinlinesendChanged();
		void messageChanged();
		void idUpdatechannelpinnedmessageChanged();
		void msgIdUpdatebotcallbackqueryChanged();
		void chatInstanceChanged();
		void dataChanged();
		void gameShortNameChanged();
		void msgIdUpdateinlinebotcallbackqueryChanged();
		void draftChanged();

	private:
		Message* _message_updatenewmessage;
		TLInt _pts;
		TLInt _pts_count;
		TLInt _id_updatemessageid;
		TLLong _random_id;
		TLVector<TLInt> _messages;
		TLInt _user_id;
		SendMessageAction* _action;
		TLInt _chat_id;
		ChatParticipants* _participants;
		UserStatus* _status;
		TLString _first_name;
		TLString _last_name;
		TLString _username;
		TLInt _date;
		UserProfilePhoto* _photo;
		TLBool _is_previous;
		ContactLink* _my_link;
		ContactLink* _foreign_link;
		TLLong _auth_key_id;
		TLString _device;
		TLString _location;
		EncryptedMessage* _message_updatenewencryptedmessage;
		TLInt _qts;
		EncryptedChat* _chat;
		TLInt _max_date;
		TLInt _inviter_id;
		TLInt _version;
		TLVector<DcOption*> _dc_options;
		TLBool _is_blocked;
		NotifyPeer* _peer_updatenotifysettings;
		PeerNotifySettings* _notify_settings;
		TLString _type;
		TLString _message_updateservicenotification;
		MessageMedia* _media;
		TLBool _is_popup;
		PrivacyKey* _key;
		TLVector<PrivacyRule*> _rules;
		TLString _phone;
		Peer* _peer_updatereadhistoryinbox;
		TLInt _max_id;
		Peer* _peer;
		WebPage* _webpage;
		TLInt _flags;
		TLInt _channel_id;
		Message* _message_updatenewchannelmessage;
		TLInt _id;
		TLInt _views;
		TLBool _is_enabled;
		TLBool _is_admin;
		MessagesStickerSet* _stickerset;
		TLTrue _is_masks;
		TLVector<TLLong> _order;
		TLLong _query_id;
		TLString _query;
		GeoPoint* _geo;
		TLString _offset;
		TLString _id_updatebotinlinesend;
		InputBotInlineMessageID* _msg_id_updatebotinlinesend;
		Message* _message;
		TLInt _id_updatechannelpinnedmessage;
		TLInt _msg_id_updatebotcallbackquery;
		TLLong _chat_instance;
		TLBytes _data;
		TLString _game_short_name;
		InputBotInlineMessageID* _msg_id_updateinlinebotcallbackquery;
		DraftMessage* _draft;

};

#endif // UPDATE_H
