#ifndef REVERSETILE_H
#define REVERSETILE_H


#include <string>

using namespace std;

//#include <QGraphicsPixmapItem>

class ReverseTile //: QObject, public QGraphicsPixmapItem
{
    public:
        ReverseTile(double playerWidth, string imagePath);//qreal playerWidth, QString imagePath);
        ~ReverseTile();
};

#endif // REVERSETILE_H
