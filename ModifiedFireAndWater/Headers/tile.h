#ifndef TILE_H
#define TILE_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QGraphicsItem>

class Tile : QObject, public QGraphicsPixmapItem
{
    public:
        Tile(qreal playerWidth, QString imagePath);
        ~Tile();
};

#else
#include <string>

using namespace std;

class Tile 
{
    public:
        Tile(double playerWidth, string imagePath);
        ~Tile();
};
#endif

#endif // TILE_H




