#ifndef REVERSETILE_H
#define REVERSETILE_H


#include <QGraphicsPixmapItem>

class ReverseTile : QObject, public QGraphicsPixmapItem
{
    public:
        ReverseTile(qreal playerWidth, QString imagePath);
        ~ReverseTile();
};

#endif // REVERSETILE_H
