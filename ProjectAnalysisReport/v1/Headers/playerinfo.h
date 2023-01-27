#ifndef PLAYERINFO_H
#define PLAYERINFO_H

//#include <QApplication>
//#include <QScreen>


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

#endif // PLAYERINFO_H
