#include "sentence.hpp"

namespace net { namespace iticworld { namespace protocol {

Sentence::~Sentence(void)
{
    for (size_t i = 0; i < words.size(); i++)
    {
        Word * word = words[i];
        if (word) delete word;
    }
    words.clear();
}

} } }
