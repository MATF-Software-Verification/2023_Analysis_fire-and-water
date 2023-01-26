#ifndef TILE_H
#define TILE_H

#include <QGraphicsItem>

class Tile : QObject, public QGraphicsPixmapItem
{
    public:
        Tile(qreal playerWidth, QString imagePath);
        ~Tile();
};

#endif // TILE_H




