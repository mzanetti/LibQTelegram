#include "mtprotorequest.h"
#include "../autogenerated/tltypes.h"
#include "../crypto/hash.h"
#include "../crypto/math.h"
#include "../crypto/aes.h"

QHash<int, bool> MTProtoRequest::_firstmap;
TLLong MTProtoRequest::_clientrequestid = 0;

MTProtoRequest::MTProtoRequest(DCConfig *dcconfig, QObject *parent) : QObject(parent), _needsinit(false), _acked(false), _sessionid(0), _messageid(0), _seqno(0), _dcconfig(dcconfig), _body(NULL)
{
    Try_InitFirst(dcconfig->id());

    this->_requestid = ++MTProtoRequest::_clientrequestid;
}

MTProtoRequest::~MTProtoRequest()
{

}

bool MTProtoRequest::acked() const
{
    return this->_acked;
}

DCConfig *MTProtoRequest::config() const
{
    return this->_dcconfig;
}

TLLong MTProtoRequest::requestId() const
{
    return this->_requestid;
}

TLLong MTProtoRequest::messageId() const
{
    return this->_messageid;
}

TLLong MTProtoRequest::sessionId() const
{
    return this->_sessionid;
}

bool MTProtoRequest::encrypted() const
{
    return this->_sessionid != 0;
}

const QByteArray &MTProtoRequest::body() const
{
    return this->_body->data();
}

void MTProtoRequest::setSessionId(TLLong sessionid)
{
    this->_sessionid = sessionid;
}

void MTProtoRequest::setMessageId(TLLong messageid)
{
    this->_messageid = messageid;
}

void MTProtoRequest::setSeqNo(TLInt seqno)
{
    this->_seqno = seqno;
}

void MTProtoRequest::setBody(MTProtoStream *body)
{
    body->setParent(this); // Take ownership

    this->_body = body;
}

QByteArray MTProtoRequest::build()
{
    QByteArray request, requestbody;

    if(this->encrypted())
        requestbody = this->buildEncrypted();
    else
        requestbody = this->buildPlain();

    this->build(request, requestbody);
    return request;
}

void MTProtoRequest::resetFirst(int dcid)
{
    ResetFirst(dcid);
}

void MTProtoRequest::setAcked(bool b)
{
    this->_acked = b;
}

void MTProtoRequest::setDcConfig(DCConfig *dcconfig)
{
    this->_dcconfig = dcconfig;
}

void MTProtoRequest::initConnection(MTProtoStream &mtstream) const
{
    TelegramConfig* config = TelegramConfig_instance;

    mtstream.writeTLConstructor(TLTypes::InvokeWithLayer);
    mtstream.writeTLInt(config->layerNum());

    mtstream.writeTLConstructor(TLTypes::initConnection);
    mtstream.writeTLInt(config->apiId());
    mtstream.writeTLString(config->deviceModel());
    mtstream.writeTLString(config->osVersion());
    mtstream.writeTLString(config->applicationVersion());
    mtstream.writeTLString(QLocale::system().name());
}

void MTProtoRequest::build(QByteArray &request, const QByteArray &requestbody)
{
    if(IsFirst(this->_dcconfig->id()))
    {
        request.append(0xEF); // Use Abridged version
        UnsetFirst(this->_dcconfig->id());
    }

    TLInt len = requestbody.length() / 4;

    if(len > 0x7E)
    {
        request.append(static_cast<qint8>(0x7F));
        request.append(*(reinterpret_cast<qint8*>(&len)));
        request.append(*(reinterpret_cast<qint8*>(&len) + 1));
        request.append(*(reinterpret_cast<qint8*>(&len) + 2));
    }
    else
        request.append(static_cast<qint8>(len));

    request.append(requestbody);
}

QByteArray MTProtoRequest::buildPlain()
{
    MTProtoStream mtstream;

    mtstream.writeTLLong(0);
    mtstream.writeTLLong(this->_messageid);
    mtstream.writeRaw(this->_body);

    return mtstream.data();
}

void MTProtoRequest::timerEvent(QTimerEvent *event)
{
    if(!this->_acked)
        emit timeout(this->_messageid);

    killTimer(event->timerId());
}

QByteArray MTProtoRequest::buildEncrypted()
{
    Q_ASSERT(this->_dcconfig && (this->_dcconfig->id() > 0));
    Q_ASSERT(this->_sessionid != 0);
    Q_ASSERT(this->_seqno > 0);

    MTProtoStream mtproto;

    mtproto.writeTLLong(this->_dcconfig->serverSalt());
    mtproto.writeTLLong(this->_sessionid);
    mtproto.writeTLLong(this->_messageid);
    mtproto.writeTLInt(this->_seqno);

    if(this->_needsinit || (this->_seqno == 1))
    {
        this->_needsinit = true;

        MTProtoStream header;
        this->initConnection(header);

        mtproto.writeTLInt(header.length() + this->_body->length());
        mtproto.writeRaw(&header, false);
        mtproto.writeRaw(this->_body, false);
    }
    else
        mtproto.writeRaw(this->_body);

    QByteArray aeskey, aesiv, msgkey = sha1_hash(mtproto.data()).right(16);
    Aes::calculateAesKeys(this->_dcconfig->authorizationKey(), msgkey, false, aeskey, aesiv);
    mtproto.randPad(16);
    QByteArray encryptedmtproto = Aes::encrypt(mtproto.data(), aeskey, aesiv);

    MTProtoStream encryptedmessage;
    encryptedmessage.writeTLLong(this->_dcconfig->authorizationKeyId());
    encryptedmessage.writeRaw(msgkey, false);
    encryptedmessage.writeRaw(encryptedmtproto, false);

    return encryptedmessage.data();
}
