#include "message.hpp"

namespace net { namespace iticworld { namespace protocol { namespace redis {

int Message::Serialize(string & _buffer)
{
    int nParsed = Fail;
    return nParsed;
}



    /*
    For Simple Strings the first byte of the reply is "+"
    For Errors the first byte of the reply is "-"
    For Integers the first byte of the reply is ":"
    For Bulk Strings the first byte of the reply is "$"
    For Arrays the first byte of the reply is "*"
    */

} } } }
