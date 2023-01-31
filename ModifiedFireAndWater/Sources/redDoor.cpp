#include "Headers/score.h"
#include "Headers/redDoor.h"

#ifndef MODIFIED_H
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#endif

extern Score *score;

#ifndef MODIFIED_H
RedDoor::RedDoor(qreal playerWidth, QString imagePath)
{
    width = playerWidth * 1.0;
    height = width * 1.2;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}

qreal RedDoor::getWidth()
{
    return this->width;
}

qreal RedDoor::getHeight()
{
    return this->height;
}
#else
#include <string>

using namespace std;

RedDoor::RedDoor(double playerWidth, string imagePath)
{
    width = playerWidth * 1.0;
    height = width * 1.2;
}

double RedDoor::getWidth()
{
    return this->width;
}

double RedDoor::getHeight()
{
    return this->height;
}

#endif

RedDoor::~RedDoor()
{

}
