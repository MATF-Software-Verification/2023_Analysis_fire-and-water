#ifndef REDDOOR_H
#define REDDOOR_H

#include "Headers/door.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
class RedDoor : public Door
{
    public:
        RedDoor(qreal playerWidth, QString imagePath);
        qreal getWidth();
        qreal getHeight();
        bool red = false;
        ~RedDoor();


    private:
        qreal width;
        qreal height;
};

#else
#include <string>

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
#endif

#endif // REDDOOR_H
