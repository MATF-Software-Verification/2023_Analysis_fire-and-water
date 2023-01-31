#ifndef PLAYERINFO_H
#define PLAYERINFO_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QApplication>
#include <QScreen>

class playerInfo
{
    public:
        playerInfo();
        qreal _height;
        qreal _width;
        qreal _stepY;
        qreal _stepX;
        qreal _screenHeight;
        qreal _gravity;
        qreal _posY;
        qreal _posX;
        qreal _moveX;
        qreal _moveY;
        qreal _velocityY=0;
        qreal _velocityX=0;

        void scaleParameters();
        void getScreenHeight();

        ~playerInfo();

};

#else
class playerInfo
{
    public:
        playerInfo();
        double _height;
        double _width;
        double _stepY;
        double _stepX;
        double _screenHeight;
        double _gravity;
        double _posY;
        double _posX;
        double _moveX;
        double _moveY;
        double _velocityY=0;
        double _velocityX=0;

        void scaleParameters();
        void getScreenHeight();

        ~playerInfo();

};
#endif

#endif // PLAYERINFO_H
