#ifndef BLUEDIAMOND_H
#define BLUEDIAMOND_H

#include "Headers/item.h"
#include <QObject>


class BlueDiamond :public Item
{
    public:
        BlueDiamond(qreal playerWidth, QString imagePath);
        void collect(ItemColor id) override;
        QRectF boundingRect() const override;
        qreal getWidth();
        qreal getHeight();
        ~BlueDiamond();

    private:
        qreal width;
        qreal height;
};

#endif // BLUEDIAMOND_H
