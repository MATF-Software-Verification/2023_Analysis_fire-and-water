#ifndef REDPUDDLE_H
#define REDPUDDLE_H

#include "Headers/puddle.h"

#include <QGraphicsItem>

class RedPuddle : public Puddle
{
    public:
        RedPuddle(qreal playerWidth, QString imagePath);
        qreal getWidth();
        qreal getHeight();
        ~RedPuddle();
    private:
        qreal width;
        qreal height;
};

#endif // REDPUDDLE_H
