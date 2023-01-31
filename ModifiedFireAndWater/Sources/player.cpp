#include "Headers/player.h"

#ifndef MODIFIED_H
#include <QtMath>
#include <QPainter>
#endif
#include <iostream>

Player::Player(PlayerColor id, float x, float y)
    :m_id(id), m_x(x), m_y(y)
{
#ifndef MODIFIED_H
    setPos(m_x, m_y);
#endif
    info = new playerInfo();
}

#ifndef MODIFIED_H
void Player::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QPixmap player_pixmap;

    if (m_id == PlayerColor::Fire) {
        player_pixmap = QPixmap(":/img/Images/fireboy.png").scaled(info->_width, info->_height);
    }
    else {
        player_pixmap = QPixmap(":/img/Images/watergirl.png").scaled(info->_width, 100);;
    }

    painter->setPen(Qt::NoPen);
    painter->setBrush(player_pixmap);
    painter->drawRect(0, 10, info->_width, info->_height);
}

auto Player::boundingRect() const -> QRectF
{
    return QRectF(-0.5, -0.5, this->info->_width + 1, this->info->_height + 1);
}
#endif

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


