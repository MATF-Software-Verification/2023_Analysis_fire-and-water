#ifndef REDDIAMOND_H
#define REDDIAMOND_H

#include "item.h"
#include <string>

using namespace std;

//#include <QObject>

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

#endif // REDDIAMOND_H
