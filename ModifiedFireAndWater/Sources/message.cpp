#include "Headers/message.h"

#include <string>

using namespace std;

Message::Message()
{
#ifndef MODIFIED_H
    this->msgBox = new QMessageBox();
    this->msgBox->setWindowTitle(" ");
    this->msgBox->setStyleSheet("font-size: 25px; font: bold; border-image: url(:/images/messageBox.jpg) stretch;");

    messageTexts = {"Oops, you lost a life!",
                   "Level over!",
                   "No spare lives left.\nBetter luck next time!",
                   "Congratulations! \nYou have successfully completed the level!",
                   "Oops,out of time"
                   };
#endif
}

void Message::setMessageText(MessageText messageValue)
{
#ifndef MODIFIED_H
    this->msgBox->setText(getMessage(messageValue));
    this->msgBox->exec();
#endif
}

#ifndef MODIFIED_H
QString Message::getMessage(MessageText messageValue)
{
    if(messageValue < MessageText::LostLife || messageValue > MessageText::OutOfTime)
        throw "Unknown message";

    return messageTexts[int(messageValue)];
}

Message::~Message()
{
    delete this->msgBox;
}
#else
string Message::getMessage(MessageText messageValue)
{
    if(messageValue < MessageText::LostLife || messageValue > MessageText::OutOfTime)
        throw "Unknown message";

    return "";
}

Message::~Message()
{
}
#endif
