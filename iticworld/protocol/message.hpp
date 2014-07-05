#ifndef __NET_ITICWORLD_PROTOCOL__MESSAGE_HPP__
#define __NET_ITICWORLD_PROTOCOL__MESSAGE_HPP__

#include <string>
#include <vector>
using namespace std;
#include <net/iticworld/protocol/sentence.hpp>

namespace net { namespace iticworld { namespace protocol {

class Message
{
protected:  vector<Sentence *> sentences;
public:     virtual int Serialize(string & _buffer) = 0;
public:     Message(void);
public:     virtual ~Message(void);
};

} } }

#endif // __NET_ITICWORLD_PROTOCOL__MESSAGE_HPP__
