#include "Headers/bluePuddle.h"
#include "Headers/score.h"


extern Score *score;

BluePuddle::BluePuddle(qreal playerWidth, QString imagePath)
{

    this->width = playerWidth * 2;
    this->height = playerWidth * 0.5;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}

qreal BluePuddle::getWidth()
{
    return this->width;
}

qreal BluePuddle::getHeight()
{
    return this->height;
}

BluePuddle::~BluePuddle()
{

}
