#ifndef __NET_ITICWORLD_PROTOCOL_REDIS__MESSAGE_HPP__
#define __NET_ITICWORLD_PROTOCOL_REDIS__MESSAGE_HPP__

#include <net/iticworld/protocol/message.hpp>

namespace net { namespace iticworld { namespace protocol { namespace redis {

class Message : public protocol::Message
{
public:     typedef enum __Type
            {
                SimpleStringSentence = 0,
                ErrorSentence = 1,
                IntegerSentence = 2,
                BulkSentence = 3,
                ArraySentence = 4,
            } Type;
public:     virtual int Serialize(string & _buffer);
public:     Message(void);
public:     virtual ~Message(void);
};

} } } }

#endif // __NET_ITICWORLD_PROTOCOL_REDIS__MESSAGE_HPP__
