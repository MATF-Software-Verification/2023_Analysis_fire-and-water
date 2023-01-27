#ifndef BLUEPUDDLE_H
#define BLUEPUDDLE_H

#include <string>
#include "puddle.h"

using namespace std;

class BluePuddle : public Puddle
{
    public:
        BluePuddle(double playerWidth, string imagePath);
        double getWidth();
        double getHeight();
        ~BluePuddle();

    private:
        double width;
        double height;


};

#endif // BLUEPUDDLE_H
