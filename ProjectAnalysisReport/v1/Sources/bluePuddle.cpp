#include "../Headers/bluePuddle.h"
#include "../Headers/score.h"

#include <string>

using namespace std;

extern Score *score;

BluePuddle::BluePuddle(double playerWidth, string imagePath)
{

    this->width = playerWidth * 2;
    this->height = playerWidth * 0.5;
    //setPixmap(QPixmap(imagePath).scaled(width, height));
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
