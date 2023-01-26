#include "Headers/greenPuddle.h"
#include "Headers/score.h"

extern Score *score;

GreenPuddle::GreenPuddle(qreal playerWidth, QString imagePath)
{

    width = playerWidth * 2;
    height = playerWidth * 0.5;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}

qreal GreenPuddle::getWidth()
{
    return this->width;
}

qreal GreenPuddle::getHeight()
{
    return this->height;
}

GreenPuddle::~GreenPuddle()
{
}
