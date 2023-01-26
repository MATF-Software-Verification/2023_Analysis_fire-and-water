
#include "Headers/redDiamond.h"
#include "Headers/score.h"

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

extern Score *score;

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

RedDiamond::~RedDiamond(){}
