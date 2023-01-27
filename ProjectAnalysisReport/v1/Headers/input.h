#ifndef INPUT_H
#define INPUT_H

#include "player.h"
//#include <QGraphicsItem>




class Input//: public QObject, public QGraphicsPixmapItem
{
    public:

        Input();
        ~Input();
        void advance();
        Player *playerFire = nullptr;
        Player *playerWater = nullptr;
        //void keyPressEvent(QKeyEvent *event) override;
        //void keyReleaseEvent(QKeyEvent *event) override;

    private:
        bool leftFire;
        bool rightFire;
        bool leftWater;
        bool rightWater;
        bool jumped;

        //void standOnPlatform(QGraphicsItem *tile);
        //void standOnPlatformWater(QGraphicsItem *tile);
        //void reverseBoundiries(QGraphicsItem *rTile);
        //void reverseBoundiriesWater(QGraphicsItem *rTile);

        void detectCollision();
        void detectCollisionWater();
        double boundingRect() const;
        //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
        void jump();
        void walk();

};

#endif // INPUT_H
