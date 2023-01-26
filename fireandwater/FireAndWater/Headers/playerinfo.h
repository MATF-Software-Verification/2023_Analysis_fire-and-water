#ifndef PLAYERINFO_H
#define PLAYERINFO_H

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

#endif // PLAYERINFO_H
