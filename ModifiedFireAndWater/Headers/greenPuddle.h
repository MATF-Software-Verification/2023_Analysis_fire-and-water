#ifndef GREENPUDDLE_H
#define GREENPUDDLE_H

#include "Headers/puddle.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
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


#else
#include <string>

using namespace std;

class GreenPuddle : public Puddle
{
    public:
        GreenPuddle(double playerWidth, string imagePath);
        double getWidth();
        double getHeight();
        ~GreenPuddle();

    private:
        double width;
        double height;
};
#endif


#endif // GREENPUDDLE_H
