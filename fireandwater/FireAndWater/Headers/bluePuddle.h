#ifndef BLUEPUDDLE_H
#define BLUEPUDDLE_H

#include "Headers/puddle.h"

class BluePuddle : public Puddle
{
    public:
        BluePuddle(qreal playerWidth, QString imagePath);
        qreal getWidth();
        qreal getHeight();
        ~BluePuddle();

    private:
        qreal width;
        qreal height;


};

#endif // BLUEPUDDLE_H
