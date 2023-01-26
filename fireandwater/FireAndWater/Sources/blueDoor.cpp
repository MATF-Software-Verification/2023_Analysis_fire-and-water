#include "Headers/score.h"
#include "Headers/blueDoor.h"

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
