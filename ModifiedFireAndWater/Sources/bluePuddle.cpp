#include "Headers/bluePuddle.h"
#include "Headers/score.h"

#ifndef MODIFIED_H
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



#else
#include <string>

using namespace std;

extern Score *score;

BluePuddle::BluePuddle(double playerWidth, string imagePath)
{

    this->width = playerWidth * 2;
    this->height = playerWidth * 0.5;
}

double BluePuddle::getWidth()
{
    return this->width;
}

double BluePuddle::getHeight()
{
    return this->height;
}

BluePuddle::~BluePuddle()
{

}
#endif
