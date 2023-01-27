#include "../Headers/player.h"


//#include <QtMath>
//#include <QPainter>
#include <iostream>

Player::Player(PlayerColor id, float x, float y)
    :m_id(id), m_x(x), m_y(y)
{
    //setPos(m_x, m_y);
    info = new playerInfo();
}

auto Player::GetX() const -> float
{
    return m_x;
}

auto Player:: GetY() const -> float
{
    return m_y;
}

Player::~Player()
{

}


