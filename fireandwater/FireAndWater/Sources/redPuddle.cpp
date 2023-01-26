#include "Headers/redPuddle.h"
#include "Headers/score.h"

extern Score *score;

RedPuddle::RedPuddle(qreal playerWidth, QString imagePath)
{

    width = playerWidth * 2;
    height = playerWidth * 0.5;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}

qreal RedPuddle::getWidth()
{
    return this->width;
}

qreal RedPuddle::getHeight()
{
    return this->height;
}

RedPuddle::~RedPuddle()
{

}
