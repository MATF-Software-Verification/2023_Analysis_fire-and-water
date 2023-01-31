#ifndef REDPUDDLE_H
#define REDPUDDLE_H

#include "Headers/puddle.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
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

#else
#include <string>

using namespace std;

class RedPuddle : public Puddle
{
    public:
        RedPuddle(double playerWidth, string imagePath);
        double getWidth();
        double getHeight();
        ~RedPuddle();
    private:
        double width;
        double height;
};
#endif

#endif // REDPUDDLE_H
