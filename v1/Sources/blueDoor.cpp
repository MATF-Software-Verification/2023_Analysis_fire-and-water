#include "../Headers/score.h"
#include "../Headers/blueDoor.h"

//#include <QGraphicsPixmapItem>
//#include <QGraphicsScene>

#include <string>

using namespace std;

extern Score *score;

BlueDoor::BlueDoor(double playerWidth, string imagePath)
{
    width = playerWidth * 1.0;
    height = width * 1.2;
    //setPixmap(QPixmap(imagePath).scaled(width, height));
}

double BlueDoor::getWidth()
{
    return this->width;
}

double BlueDoor::getHeight()
{
    return this->height;
}

BlueDoor::~BlueDoor()
{

}
