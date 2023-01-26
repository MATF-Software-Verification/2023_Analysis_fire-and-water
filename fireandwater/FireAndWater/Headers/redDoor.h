#ifndef REDDOOR_H
#define REDDOOR_H

#include "Headers/door.h"
class RedDoor : public Door
{
    public:
        RedDoor(qreal playerWidth, QString imagePath);
        qreal getWidth();
        qreal getHeight();
        bool red = false;
        ~RedDoor();


    private:
        qreal width;
        qreal height;
};

#endif // REDDOOR_H
