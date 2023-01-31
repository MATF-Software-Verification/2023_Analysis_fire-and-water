#ifndef PLAYER_H
#define PLAYER_H

#include "Headers/playerinfo.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#endif

enum class PlayerColor
{
    Fire = 0,
    Water = 1
};

#ifndef MODIFIED_H
class Player : public QGraphicsPixmapItem, public QObject
{
    public:

        Player(PlayerColor id, float x, float y);
        ~Player();

        QRectF boundingRect() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

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


#else
class Player
{
    public:

        Player(PlayerColor id, float x, float y);
        ~Player();

        double boundingRect();
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
#endif

#endif // PLAYER_H
