#include "../Headers/message.h"

#include <string>

using namespace std;

Message::Message()
{

}

void Message::setMessageText(MessageText messageValue)
{
}

string Message::getMessage(MessageText messageValue)
{
    if(messageValue < MessageText::LostLife || messageValue > MessageText::OutOfTime)
        throw "Unknown message";

    return "";
}

Message::~Message()
{
}
