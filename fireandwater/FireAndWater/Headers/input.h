#ifndef INPUT_H
#define INPUT_H

#include "Headers/player.h"
#include <QGraphicsItem>




class Input: public QObject, public QGraphicsPixmapItem
{
    public:

        Input();
        ~Input();
        Player *playerFire = nullptr;
        Player *playerWater = nullptr;
        void keyPressEvent(QKeyEvent *event) override;
        void keyReleaseEvent(QKeyEvent *event) override;

    private:
        bool leftFire;
        bool rightFire;
        bool leftWater;
        bool rightWater;
        bool jumped;

        void standOnPlatform(QGraphicsItem *tile);
        void standOnPlatformWater(QGraphicsItem *tile);
        void reverseBoundiries(QGraphicsItem *rTile);
        void reverseBoundiriesWater(QGraphicsItem *rTile);

        void detectCollision();
        void detectCollisionWater();
        QRectF boundingRect() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
        void jump();
        void walk();

    public slots:
        void advance(int phase) override;

};

#endif // INPUT_H
