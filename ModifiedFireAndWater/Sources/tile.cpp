#include "Headers/tile.h"


#ifndef MODIFIED_H
Tile::Tile(qreal playerWidth, QString imagePath){

    qreal width = playerWidth * 2;
    qreal height = playerWidth * 0.5;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}
#else
#include <string>

using namespace std;

Tile::Tile(double playerWidth, string imagePath){

    double width = playerWidth * 2;
    double height = playerWidth * 0.5;
}
#endif

Tile::~Tile(){}
