#ifndef GREENPUDDLE_H
#define GREENPUDDLE_H

#include "Headers/puddle.h"
#include <QGraphicsItem>

class GreenPuddle : public Puddle
{
    public:
        GreenPuddle(qreal playerWidth, QString imagePath);
        qreal getWidth();
        qreal getHeight();
        ~GreenPuddle();

    private:
        qreal width;
        qreal height;
};


#endif // GREENPUDDLE_H
