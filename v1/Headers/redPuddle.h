#ifndef REDPUDDLE_H
#define REDPUDDLE_H

#include "puddle.h"

#include <string>

using namespace std;

//#include <QGraphicsItem>

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

#endif // REDPUDDLE_H
