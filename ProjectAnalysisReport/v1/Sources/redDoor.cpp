#include "../Headers/score.h"
#include "../Headers/redDoor.h"

//#include <QGraphicsPixmapItem>
//#include <QGraphicsScene>

#include <string>

using namespace std;

extern Score *score;

RedDoor::RedDoor(double playerWidth, string imagePath)
{
    width = playerWidth * 1.0;
    height = width * 1.2;
    //setPixmap(QPixmap(imagePath).scaled(width, height));
}

double RedDoor::getWidth()
{
    return this->width;
}

double RedDoor::getHeight()
{
    return this->height;
}

RedDoor::~RedDoor()
{

}
