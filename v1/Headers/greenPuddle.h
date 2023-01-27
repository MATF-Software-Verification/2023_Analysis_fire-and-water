#ifndef GREENPUDDLE_H
#define GREENPUDDLE_H

#include "puddle.h"
//#include <QGraphicsItem>
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


#endif // GREENPUDDLE_H
