#ifndef REDDIAMOND_H
#define REDDIAMOND_H

#include "Headers/item.h"

#include <QObject>

class RedDiamond : public Item
{
    public:
        RedDiamond(qreal playerWidth, QString imagePath);
        void collect(ItemColor id) override;
        QRectF boundingRect() const override;
        qreal getWidth();
        qreal getHeight();
        ~RedDiamond();

    private:
        qreal width;
        qreal height;
};

#endif // REDDIAMOND_H
