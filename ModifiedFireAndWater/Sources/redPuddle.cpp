#include "Headers/redPuddle.h"
#include "Headers/score.h"

extern Score *score;

#ifndef MODIFIED_H
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
#else
#include <string>

using namespace std;

RedPuddle::RedPuddle(double playerWidth, string imagePath)
{

    width = playerWidth * 2;
    height = playerWidth * 0.5;
}

double RedPuddle::getWidth()
{
    return this->width;
}

double RedPuddle::getHeight()
{
    return this->height;
}
#endif


RedPuddle::~RedPuddle()
{

}
