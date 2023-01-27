#ifndef PLAYER_H
#define PLAYER_H

#include "playerinfo.h"
//#include <QGraphicsScene>
//#include <QGraphicsPixmapItem>

enum class PlayerColor
{
    Fire = 0,
    Water = 1
};

class Player //: public QGraphicsPixmapItem, public QObject
{
    public:

        Player(PlayerColor id, float x, float y);
        ~Player();

        double boundingRect();
        //void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

        float GetX() const;
        float GetY() const;
        void SetX(float x);
        void SetY(float y);

        playerInfo *info;

        PlayerColor m_id;
        float m_x;// x koordinata polozaja
        float m_y; // y koordinata polozaja

        bool _isOnGround = true;
        bool _hitLeft=false;
        bool _hitRight=false;



};

#endif // PLAYER_H
