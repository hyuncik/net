#ifndef __NET_ITICWORLD_PROTOCOL_REDIS_SENTENCES__SIMPLE_HPP__
#define __NET_ITICWORLD_PROTOCOL_REDIS_SENTENCES__SIMPLE_HPP__

#include <net/iticworld/protocol/sentence.hpp>

namespace net { namespace iticworld { namespace protocol { namespace redis { namespace sentences {

class Simple : public protocol::Sentence
{
public:     virtual int Serialize(string& _buffer);
public:     Simple(void);
public:     virtual ~Simple(void);
};

} } } } }

#endif // __NET_ITICWORLD_PROTOCOL_REDIS_SENTENCES__SIMPLE_HPP__
