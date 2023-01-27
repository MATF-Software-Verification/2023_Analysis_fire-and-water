#ifndef BLUEDIAMOND_H
#define BLUEDIAMOND_H

#include "item.h"
//#include <QObject>
#include <string>

using namespace std;


class BlueDiamond :public Item
{
    public:
        BlueDiamond(double playerWidth, string imagePath);
        void collect(ItemColor id) override;
        //double boundingRect() const override;
        double getWidth();
        double getHeight();
        ~BlueDiamond();

    private:
        double width;
        double height;
};

#endif // BLUEDIAMOND_H
