#ifndef REDDIAMOND_H
#define REDDIAMOND_H

#include "Headers/item.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
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

#else
#include <string>

using namespace std;

class RedDiamond : public Item
{
    public:
        RedDiamond(double playerWidth, string imagePath);
        void collect(ItemColor id) override;
        double boundingRect();
        double getWidth();
        double getHeight();
        ~RedDiamond();

    private:
        double width;
        double height;
};
#endif

#endif // REDDIAMOND_H
