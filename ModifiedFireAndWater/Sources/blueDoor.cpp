#include "Headers/score.h"
#include "Headers/blueDoor.h"

#ifndef MODIFIED_H
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

extern Score *score;

BlueDoor::BlueDoor(qreal playerWidth, QString imagePath)
{
    width = playerWidth * 1.0;
    height = width * 1.2;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}

qreal BlueDoor::getWidth()
{
    return this->width;
}

qreal BlueDoor::getHeight()
{
    return this->height;
}

BlueDoor::~BlueDoor()
{

}



#else

#include <string>

using namespace std;

extern Score *score;

BlueDoor::BlueDoor(double playerWidth, string imagePath)
{
    width = playerWidth * 1.0;
    height = width * 1.2;
}

double BlueDoor::getWidth()
{
    return this->width;
}

double BlueDoor::getHeight()
{
    return this->height;
}

BlueDoor::~BlueDoor()
{

}

#endif
