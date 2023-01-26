#ifndef BLUEDOOR_H
#define BLUEDOOR_H

#include "Headers/door.h"
#include<QGraphicsItem>

class BlueDoor : public Door
{
    public:
        BlueDoor(qreal playerWidth, QString imagePath);
        bool blue = false;
        qreal getWidth();
        qreal getHeight();
        ~BlueDoor();

    private:
        qreal width;
        qreal height;
};

#endif // BLUEDOOR_H
