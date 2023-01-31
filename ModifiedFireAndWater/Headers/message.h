#ifndef MESSAGE_H
#define MESSAGE_H

#include "Sources/modifiedProject.hpp"

#include <string>

using namespace std;

#ifndef MODIFIED_H
#include <QMessageBox>
#endif

enum class MessageText
{
    LostLife = 0,
    Esc = 1,
    NoMoreLives = 2,
    LevelCompleted = 3,
    OutOfTime=4
};


class Message
{
    public:
        Message();
        void setMessageText(MessageText messageValue);
        ~Message();
#ifndef MODIFIED_H
        QString getMessage(MessageText messageValue);
#else
        string getMessage(MessageText messageValue);
#endif
#ifndef MODIFIED_H
    private:
        QMessageBox *msgBox;
        QVector<QString> messageTexts;
#endif
};

#endif // MESSAGE_H
