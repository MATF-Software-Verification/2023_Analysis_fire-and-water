#include "Headers/reversetile.h"


#ifndef MODIFIED_H
ReverseTile::ReverseTile(qreal playerWidth, QString imagePath)
{

    qreal width = playerWidth * 0.5;
    qreal height = playerWidth * 3;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}
#else
#include <string>

using namespace std;

ReverseTile::ReverseTile(double playerWidth, string imagePath)
{

    double width = playerWidth * 0.5;
    double height = playerWidth * 3;
}
#endif
ReverseTile::~ReverseTile()
{

}
