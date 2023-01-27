#include "../Headers/greenPuddle.h"
#include "../Headers/score.h"

#include <string>

using namespace std;

extern Score *score;

GreenPuddle::GreenPuddle(double playerWidth, string imagePath)
{

    width = playerWidth * 2;
    height = playerWidth * 0.5;
    //setPixmap(QPixmap(imagePath).scaled(width, height));
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
