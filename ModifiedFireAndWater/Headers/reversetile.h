#ifndef REVERSETILE_H
#define REVERSETILE_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QGraphicsPixmapItem>

class ReverseTile : QObject, public QGraphicsPixmapItem
{
    public:
        ReverseTile(qreal playerWidth, QString imagePath);
        ~ReverseTile();
};


#else
#include <string>

using namespace std;

class ReverseTile 
{
    public:
        ReverseTile(double playerWidth, string imagePath);
        ~ReverseTile();
};
#endif

#endif // REVERSETILE_H
