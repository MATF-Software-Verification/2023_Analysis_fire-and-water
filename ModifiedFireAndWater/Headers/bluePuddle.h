#ifndef BLUEPUDDLE_H
#define BLUEPUDDLE_H

#include "Headers/puddle.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
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



#else
#include <string>

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
#endif

#endif // BLUEPUDDLE_H
