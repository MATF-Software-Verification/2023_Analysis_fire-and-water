#include "Headers/greenPuddle.h"
#include "Headers/score.h"


#ifndef MODIFIED_H
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



#else
#include <string>

using namespace std;

extern Score *score;

GreenPuddle::GreenPuddle(double playerWidth, string imagePath)
{

    width = playerWidth * 2;
    height = playerWidth * 0.5;
}

double GreenPuddle::getWidth()
{
    return this->width;
}

double GreenPuddle::getHeight()
{
    return this->height;
}

GreenPuddle::~GreenPuddle()
{
}
#endif
