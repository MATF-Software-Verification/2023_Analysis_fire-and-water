
#include "Headers/redDiamond.h"
#include "Headers/score.h"

#ifndef MODIFIED_H
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#endif

extern Score *score;

#ifndef MODIFIED_H
RedDiamond::RedDiamond(qreal playerWidth, QString imagePath)
{
    width = playerWidth * 0.9;
    height = width * 0.8;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}

void RedDiamond::collect(ItemColor id)
{
    if(id == ItemColor::Fire){
        score->increase();
        scene()->removeItem(this);
        delete this;
    }
}

auto RedDiamond::boundingRect() const -> QRectF {
    return QRectF(-0.5, -0.5, 40 + 1, 40 + 1);
}

qreal RedDiamond::getWidth()
{
    return this->width;
}

qreal RedDiamond::getHeight()
{
    return this->height;
}

#else
#include <string>

using namespace std;

extern Score *score;

RedDiamond::RedDiamond(double playerWidth, string imagePath)
{
    width = playerWidth * 0.9;
    height = width * 0.8;
}

void RedDiamond::collect(ItemColor id)
{
    if(id == ItemColor::Fire){
        score->increase();
        delete this;
    }
}

double RedDiamond::getWidth()
{
    return this->width;
}

double RedDiamond::getHeight()
{
    return this->height;
}
#endif

RedDiamond::~RedDiamond(){}
