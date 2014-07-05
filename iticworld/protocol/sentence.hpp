#ifndef __NET_ITICWORLD_PROTOCOL__SENTENCE_HPP__
#define __NET_ITICWORLD_PROTOCOL__SENTENCE_HPP__

#include <string>
#include <vector>
using namespace std;
#include <net/iticworld/protocol/word.hpp>

namespace net { namespace iticworld { namespace protocol {

class Sentence
{
protected:  vector<Word*> words;
public:     virtual int Serialize(string& _buffer) = 0;
public:     Sentence(void);
public:     virtual ~Sentence(void);
};

} } }

#endif // __NET_ITICWORLD_PROTOCOL__SENTENCE_HPP__
