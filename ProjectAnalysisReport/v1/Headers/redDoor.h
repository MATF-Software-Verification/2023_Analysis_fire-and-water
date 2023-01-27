#ifndef REDDOOR_H
#define REDDOOR_H

#include <string>
#include "door.h"

using namespace std;

class RedDoor : public Door
{
    public:
        RedDoor(double playerWidth, string imagePath);
        double getWidth();
        double getHeight();
        bool red = false;
        ~RedDoor();


    private:
        double width;
        double height;
};

#endif // REDDOOR_H
