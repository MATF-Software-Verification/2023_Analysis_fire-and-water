#include "../Headers/input.h"
//#include "../Headers/blueDiamond.h"
//#include "../Headers/blueDoor.h"
//#include "../Headers/greenPuddle.h"
#include "../Headers/player.h"
#include <iostream>
//#include "../Headers/redDiamond.h"
//#include "../Headers/redDoor.h"
//#include "../Headers/redPuddle.h"
//#include "../Headers/tile.h"
//#include "../Headers/reversetile.h"
#include "../Headers/level.h"
//#include "../Headers/bluePuddle.h"

extern Level *level;

const int y_pos=500;
const int x_pos_f=50;
const int x_pos_w=700;

Input::Input()
{
    playerFire = new Player(PlayerColor::Fire, x_pos_f, y_pos);
    playerWater = new Player(PlayerColor::Water, x_pos_w, y_pos);
    //playerFire->setPixmap(QPixmap(":/img/Images/fireboy.png").scaled(40, 80));
    //playerWater->setPixmap(QPixmap(":/img/Images/fireboy.png").scaled(40, 80));

}

Input::~Input()
{

}
/*
void Input::keyPressEvent()//QKeyEvent *event)
{ /*
    if(event->key()==Qt::Key_W && playerFire->_isOnGround){
        playerFire->info->_velocityY=-playerFire->info->_stepY;
        playerFire->m_y-=playerFire->info->_stepY;
        playerFire->setPos(playerFire->GetX(),playerFire->m_y);
        playerFire->_isOnGround=false;
    }
    if(event->key()==Qt::Key_D && !playerFire->_hitRight){
        playerFire->info->_velocityX = playerFire->info->_stepX;
        playerFire->_hitLeft=false;
    }
    if(event->key()==Qt::Key_A && !playerFire->_hitLeft){
        playerFire->info->_velocityX = -playerFire->info->_stepX;
        playerFire->_hitRight=false;

    }
    if(event->key()==Qt::Key_Up && playerWater->_isOnGround){
        playerWater->info->_velocityY = - playerWater->info->_stepY;
        playerWater->m_y -= playerWater->info->_stepY;
        playerWater->setPos(playerWater->GetX(),playerWater->m_y);
        playerWater->_isOnGround = false;
    }
    if(event->key() == Qt::Key_Right && !playerWater->_hitRight){
        playerWater->info->_velocityX = playerWater->info->_stepX;
        playerWater->_hitLeft=false;
    }
    if(event->key() == Qt::Key_Left && !playerWater->_hitLeft){
        playerWater->info->_velocityX = - playerWater->info->_stepX;
        playerWater->_hitRight=false;
    }

}

void Input::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_D){
            playerFire->info->_velocityX = 0;
    }
    if(event->key()==Qt::Key_A){
            playerFire->info->_velocityX = 0;
    }
    if(event->key()==Qt::Key_Right){
            playerWater->info->_velocityX = 0;
    }
    if(event->key()==Qt::Key_Left){
            playerWater->info->_velocityX = 0;
    } */

void Input::advance()
{
    walk();
    jump();
    detectCollision();
    detectCollisionWater();

    //emit activeTimer();
}

void Input::jump()
{

    if(!playerFire->_isOnGround){
//        qDebug()<<playerFire->info->_velocityY;
        if(playerFire->info->_velocityY < 13){
            playerFire->info->_velocityY += playerFire->info->_gravity;
        }
        playerFire->m_y+=playerFire->info->_velocityY;
        //playerFire->setPos(playerFire->GetX(), playerFire->m_y);

    }
    if(!playerWater->_isOnGround){
//        qDebug()<<playerFire->info->_velocityY;
        if(playerWater->info->_velocityY < 13){
            playerWater->info->_velocityY += playerWater->info->_gravity;
        }
        playerWater->m_y+=playerWater->info->_velocityY;
        //playerWater->setPos(playerWater->GetX(), playerWater->m_y);

    }

}

void Input::walk()
{

    playerFire->m_x += playerFire->info->_velocityX;
    //playerFire->setPos(playerFire->m_x, playerFire->GetY());

    playerWater->m_x += playerWater->info->_velocityX;
    //playerWater->setPos(playerWater->m_x, playerWater->GetY());
}

void Input::detectCollision()
{
/*
    QList<QGraphicsItem *> colliding_items = this->playerFire->collidingItems();

    if(colliding_items.size()){

        for (auto &colliding_item : colliding_items){

            if(dynamic_cast<Tile*>(colliding_item)){
                this->standOnPlatform(colliding_item);
            }
            if(dynamic_cast<BluePuddle*>(colliding_item)){
                level->finishLevel(MessageText::LostLife);
            }
            if(dynamic_cast<GreenPuddle*>(colliding_item)){
                level->finishLevel(MessageText::LostLife);
            }
            if(dynamic_cast<RedDiamond *>(colliding_item)){
                dynamic_cast<RedDiamond *>(colliding_item)->collect(ItemColor::Fire);
            }
            if(dynamic_cast<ReverseTile*>(colliding_item)){
                this->reverseBoundiries(colliding_item);
            }
            if(dynamic_cast<RedDoor *>(colliding_item)){
                level->red=true;
                if(level->red && level->blue)
                    level->finishLevel(MessageText::LevelCompleted);
            }
            else
                level->red=false;
        }
    }
    else{
            playerFire->_isOnGround = false;
        }
*/
}

void Input::detectCollisionWater()
{
/*
    QList<QGraphicsItem *> colliding_items = this->playerWater->collidingItems();

    if(colliding_items.size()){

        for (auto &colliding_item : colliding_items){

            if(dynamic_cast<Tile*>(colliding_item)){
                this->standOnPlatformWater(colliding_item);
            }
            if(dynamic_cast<BlueDiamond *>(colliding_item)){
                dynamic_cast<BlueDiamond *>(colliding_item)->collect(ItemColor::Water);
                //emit countChanged();
            }
            if(dynamic_cast<ReverseTile*>(colliding_item)){
                this->reverseBoundiriesWater(colliding_item);
            }
            if(dynamic_cast<RedPuddle*>(colliding_item)){
                level->finishLevel(MessageText::LostLife);
            }
            if(dynamic_cast<GreenPuddle*>(colliding_item)){
                level->finishLevel(MessageText::LostLife);
            }
            if(dynamic_cast<BlueDoor *>(colliding_item)){
                level->blue=true;
                if(level->red && level->blue)
                    level->finishLevel(MessageText::LevelCompleted);
            }
            else
                level->blue=false;

        }
    }
    else{
            playerWater->_isOnGround = false;
        }
*/
}

/*void Input::standOnPlatform(int *tile){

    QRectF tileRect = tile->boundingRect();
    QPolygonF tileRectPoints = tile->mapToScene(tileRect);

    QPolygonF _playerRectPoints = playerFire->mapToScene(playerFire->boundingRect());
    //0 1
    //3 2


    if(_playerRectPoints[2].y() <= tileRectPoints[0].y() + 20) // on the platform
    {
       playerFire->_isOnGround = true;
    }
    else if(!playerFire->_isOnGround && _playerRectPoints[3].x() <= tileRectPoints[3].x() - 20 &&
            _playerRectPoints[1].y() <= tileRectPoints[3].y() - 20) // on the left side
    {
       setPos(x() - 10, y());
    }

    else if(!playerFire->_isOnGround && _playerRectPoints[2].x() >= tileRectPoints[2].x() + 20 &&
            _playerRectPoints[1].y() <= tileRectPoints[3].y() - 20) // on the right side
    {
        setPos(x() + 10, y());
    }

     if(!playerFire->_isOnGround && _playerRectPoints[1].y() <= tileRectPoints[3].y() + 5 &&
         _playerRectPoints[2].x() > tileRectPoints[3].x() + 2 &&
         _playerRectPoints[3].x() < tileRectPoints[2].x() - 2) // under the platform
    {
            this->playerFire->info->_velocityY = playerFire->info->_stepY/2;
    } */

/*
void Input::standOnPlatformWater(QGraphicsItem *tile){

    QRectF tileRect = tile->boundingRect();
    QPolygonF tileRectPoints = tile->mapToScene(tileRect);

    QPolygonF _playerRectPoints = playerWater->mapToScene(playerWater->boundingRect());

    if(_playerRectPoints[2].y() <= tileRectPoints[0].y() + 20) // on the platform
    {
       playerWater->_isOnGround = true;
    }
    else if(!playerWater->_isOnGround && _playerRectPoints[3].x() <= tileRectPoints[3].x() - 20 &&
            _playerRectPoints[1].y() <= tileRectPoints[3].y() - 20) // on the left side
    {
       setPos(x() - 10, y());
    }

    else if(!playerWater->_isOnGround && _playerRectPoints[2].x() >= tileRectPoints[2].x() + 20 &&
            _playerRectPoints[1].y() <= tileRectPoints[3].y() - 20) // on the right side
    {
        setPos(x() + 10, y());
    }
    //uraditi nakon postavljanja playerInfo
     if(!playerWater->_isOnGround && _playerRectPoints[1].y() <= tileRectPoints[3].y() + 5 &&
         _playerRectPoints[2].x() > tileRectPoints[3].x() + 2 &&
         _playerRectPoints[3].x() < tileRectPoints[2].x() - 2) // under the platform
    {
            this->playerWater->info->_velocityY = playerWater->info->_stepY/2;
    }
}

void Input::reverseBoundiries(QGraphicsItem *rTile){

    QRectF tileRect = rTile->boundingRect();
    QPolygonF tileRectPoints = rTile->mapToScene(tileRect);

    QPolygonF _playerRectPoints = playerFire->mapToScene(playerFire->boundingRect());
    //0 1  0 1
    //3 2  3 2

    if(qAbs(_playerRectPoints[0].x() - tileRectPoints[1].x()) <= 5) // on the platform
    {
       this->playerFire->info->_velocityX = 0;
       this->playerFire->_hitLeft=true;
    }
    if(_playerRectPoints[2].x() <= tileRectPoints[3].x()+5) // on the platform
    {
       this->playerFire->info->_velocityX = 0;
       this->playerFire->_hitRight=true;

    }
}

void Input::reverseBoundiriesWater(QGraphicsItem *rTile)
{
    QRectF tileRect = rTile->boundingRect();
    QPolygonF tileRectPoints = rTile->mapToScene(tileRect);

    QPolygonF _playerRectPoints = playerWater->mapToScene(playerWater->boundingRect());
    //0 1
    //3 2

    //qDebug() << _playerRectPoints[0].x() << " " << tileRectPoints[1].x();
    if(qAbs(_playerRectPoints[0].x() - tileRectPoints[1].x()) <= 5) // on the platform
    {
       this->playerWater->info->_velocityX = 0;
       this->playerWater->_hitLeft=true;
    }
    if(_playerRectPoints[1].x() <= tileRectPoints[0].x() + 20) // on the platform
    {
       this->playerWater->info->_velocityX = 0;
        this->playerWater->_hitRight=true;
    }

} */
