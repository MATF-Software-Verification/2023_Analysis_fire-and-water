#include "../Headers/tile.h"

#include <string>

using namespace std;

Tile::Tile(double playerWidth, string imagePath){

    double width = playerWidth * 2;
    double height = playerWidth * 0.5;
    //setPixmap(QPixmap(imagePath).scaled(width, height));
}
Tile::~Tile(){}
