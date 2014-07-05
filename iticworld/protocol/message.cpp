#include "message.hpp"

namespace net { namespace iticworld { namespace protocol {

Message::~Message(void)
{
    for (size_t i = 0; i < sentences.size(); i++)
    {
        Sentence * _sentence = sentences[i];
        if (_sentence) delete _sentence;
    }
    sentences.clear();
}

} } }
