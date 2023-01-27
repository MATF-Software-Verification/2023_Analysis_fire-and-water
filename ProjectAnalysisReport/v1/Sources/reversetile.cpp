#include "../Headers/reversetile.h"

#include <string>

using namespace std;

ReverseTile::ReverseTile(double playerWidth, string imagePath)
{

    double width = playerWidth * 0.5;
    double height = playerWidth * 3;
    //setPixmap(QPixmap(imagePath).scaled(width, height));
}

ReverseTile::~ReverseTile() {}
