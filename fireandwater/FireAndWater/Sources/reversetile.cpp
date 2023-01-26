#include "Headers/reversetile.h"

ReverseTile::ReverseTile(qreal playerWidth, QString imagePath)
{

    qreal width = playerWidth * 0.5;
    qreal height = playerWidth * 3;
    setPixmap(QPixmap(imagePath).scaled(width, height));
}
ReverseTile::~ReverseTile()
{

}
