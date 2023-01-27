#include "../Headers/redPuddle.h"
#include "../Headers/score.h"

extern Score *score;

#include <string>

using namespace std;

RedPuddle::RedPuddle(double playerWidth, string imagePath)
{

    width = playerWidth * 2;
    height = playerWidth * 0.5;
    //setPixmap(QPixmap(imagePath).scaled(width, height));
}

double RedPuddle::getWidth()
{
    return this->width;
}

double RedPuddle::getHeight()
{
    return this->height;
}

RedPuddle::~RedPuddle()
{

}
