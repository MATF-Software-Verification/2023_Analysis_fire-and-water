#ifndef TILE_H
#define TILE_H

//#include <QGraphicsItem>

#include <string>

using namespace std;

class Tile //: QObject, public QGraphicsPixmapItem
{
    public:
        Tile(double playerWidth, string imagePath);
        ~Tile();
};

#endif // TILE_H




