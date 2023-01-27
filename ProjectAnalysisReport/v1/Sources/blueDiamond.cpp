#include "../Headers/blueDiamond.h"
#include "../Headers/score.h"

//#include <QGraphicsPixmapItem>
//#include <QGraphicsScene>

#include <string.h>

using namespace std;

extern Score *score;

BlueDiamond::BlueDiamond(double playerWidth, string imagePath)
{
    width = playerWidth * 0.9;
    height = width * 0.8;
    //setPixmap(QPixmap(imagePath).scaled(width, height));
}

void BlueDiamond::collect(ItemColor id)
{
    if(id == ItemColor::Water){
        score->increase();
        //scene()->removeItem(this);
        delete this;
    }
}


double BlueDiamond::getWidth()
{
    return this->width;
}

double BlueDiamond::getHeight()
{
    return this->height;
}

BlueDiamond::~BlueDiamond()
{

}
