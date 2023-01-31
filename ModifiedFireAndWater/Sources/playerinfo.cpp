

#include "Headers/playerinfo.h"

#include <iostream>

playerInfo::playerInfo()
{
   getScreenHeight();
   scaleParameters();
}

void playerInfo::getScreenHeight()
{
#ifndef MODIFIED_H
    QScreen *screen = QApplication::screens().at(0);
    _screenHeight = screen->availableSize().height();
#endif
}

void playerInfo::scaleParameters()
{
    _height = 80;
    _width = _height * 0.5;
    _stepY = _height * 0.089;
    _stepX = 2.1;
    _moveX = _height * 0.1;
    _gravity = 0.03 * _stepY;
    _posY = _screenHeight * 0.3;
}

playerInfo::~playerInfo()
{

}
