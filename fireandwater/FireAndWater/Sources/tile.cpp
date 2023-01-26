#include "Headers/tile.h"

Tile::Tile(qreal playerWidth, QString imagePath){

    qreal width = playerWidth * 2;
    qreal height = playerWidth * 0.5;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}
Tile::~Tile(){}
