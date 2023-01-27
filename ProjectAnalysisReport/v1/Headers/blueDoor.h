#ifndef BLUEDOOR_H
#define BLUEDOOR_H

#include "door.h"
//#include<QGraphicsItem>
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

#endif // BLUEDOOR_H
