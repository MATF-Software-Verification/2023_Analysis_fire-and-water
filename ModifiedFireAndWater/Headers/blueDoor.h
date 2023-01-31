#ifndef BLUEDOOR_H
#define BLUEDOOR_H

#include "Headers/door.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include<QGraphicsItem>

class BlueDoor : public Door
{
    public:
        BlueDoor(qreal playerWidth, QString imagePath);
        bool blue = false;
        qreal getWidth();
        qreal getHeight();
        ~BlueDoor();

    private:
        qreal width;
        qreal height;
};


#else
#include <string>

using namespace std;

class BlueDoor : public Door
{
    public:
        BlueDoor(double playerWidth, string imagePath);
        bool blue = false;
        double getWidth();
        double getHeight();
        ~BlueDoor();

    private:
        double width;
        double height;
};
#endif

#endif // BLUEDOOR_H
