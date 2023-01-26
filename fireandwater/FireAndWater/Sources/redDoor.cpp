#include "Headers/score.h"
#include "Headers/redDoor.h"

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

extern Score *score;

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

RedDoor::~RedDoor()
{

}
