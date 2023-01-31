#ifndef BLUEDIAMOND_H
#define BLUEDIAMOND_H

#include "Sources/modifiedProject.hpp"

#include "Headers/item.h"


#ifndef MODIFIED_H
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




#else
#include <string>

using namespace std;

class BlueDiamond :public Item
{
    public:
        BlueDiamond(double playerWidth, string imagePath);
        void collect(ItemColor id);
        double getWidth();
        double getHeight();
        ~BlueDiamond();

    private:
        double width;
        double height;
};
#endif

#endif // BLUEDIAMOND_H
