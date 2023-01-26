#include "Headers/blueDiamond.h"
#include "Headers/score.h"

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

extern Score *score;

BlueDiamond::BlueDiamond(qreal playerWidth, QString imagePath)
{
    width = playerWidth * 0.9;
    height = width * 0.8;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}

void BlueDiamond::collect(ItemColor id)
{
    if(id == ItemColor::Water){
        score->increase();
        scene()->removeItem(this);
        delete this;
    }
}


auto BlueDiamond::boundingRect() const -> QRectF {
    return QRectF(-0.5, -0.5, 40 + 1, 40 + 1);
}

qreal BlueDiamond::getWidth()
{
    return this->width;
}

qreal BlueDiamond::getHeight()
{
    return this->height;
}

BlueDiamond::~BlueDiamond()
{

}
