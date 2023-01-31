#include "Headers/level.h"
#include "Headers/blueDiamond.h"
#include "Headers/levelBar.h"
#include "Headers/message.h"
#include "Headers/redDiamond.h"
#include "Headers/redPuddle.h"
#include "Headers/bluePuddle.h"
#include "Headers/greenPuddle.h"
#include "Headers/blueDoor.h"
#include "Headers/redDoor.h"
#include "Headers/levelinfo.h"
#include "Headers/player.h"
#include "Headers/reversetile.h"
#include "Headers/score.h"
#include "Headers/tile.h"
#include "Headers/input.h"
#include "Headers/playerinfo.h"

#include <iostream>

#ifndef MODIFIED_H
#include <QTimer>
#include<QGraphicsScene>
#include<QGraphicsView>
#include <QFile>
#endif

const int width=800;
const int height=600;
const int custom=580;

extern Score *score;

Level::Level(int levelId, LevelInfo *levelInfo)
{
    if(levelId < 1 || levelId > 3)
        throw "Invalid levelId";

    if(levelInfo == nullptr)
            throw "Invalid levelData";

    this->levelInfo = levelInfo;
    this->levelId = levelId;
    info=new playerInfo();
    red=false;
    blue=false;
}


void Level::start()
{
#ifndef MODIFIED_H
    scene = new QGraphicsScene(0, 0, width, height);
    this->setView();

    mainTimer = new QTimer();
    mainTimer->start(5);

    levelTimer = new QTimer(this);
    levelTimer->start(120000);

    QObject::connect(mainTimer, SIGNAL(timeout()), scene, SLOT(advance()));
    QObject::connect(levelTimer, SIGNAL(timeout()), this, SLOT(outOfTime()));
#endif
    music = new Melody(levelInfo->getMelody());

#ifndef MODIFIED_H
    levelBar = new LevelBar(view);
    timerLabel = new QLabel(view);
#endif
    this->parseLevelMap();

    this->input = new Input();
#ifndef MODIFIED_H
    scene->addItem(input);

    input->playerFire->setFlag(QGraphicsItem::ItemIsMovable,true);
    scene->addItem(input->playerFire);

    input->playerWater->setFlag(QGraphicsItem::ItemIsMovable,true);
    scene->addItem(input->playerWater);

    input->setFlag(QGraphicsItem::ItemIsFocusable);
    input->setFocus();

    view->ensureVisible(input);
    view->centerOn(input);

    QApplication::setOverrideCursor(Qt::BlankCursor);

    view->show();
#else
    input->advance();
#endif
}

void Level::setView()
{
#ifndef MODIFIED_H
    this->view = new QGraphicsView(scene);
    view->setBackgroundBrush(QPixmap(":/img/Images/background_brick.jpg").scaled(width, height));
    view->setFixedSize(width, height);
    view->setSceneRect(0, 0, width, height);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff );
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff );
    view->setFocus();
#endif
}

void Level::outOfTime()
{
    this->finishLevel(MessageText::OutOfTime);
}

void Level::finishLevel(MessageText msgText)
{
    music->stopMusic();
#ifndef MODIFIED_H
    QApplication::setOverrideCursor(Qt::ArrowCursor);
#endif
    if(msgText != MessageText::LevelCompleted)
        score->takeLife();
    score->msg->setMessageText(msgText);
#ifndef MODIFIED_H
    score->saveCurrentScore(levelId,levelTimer->remainingTime());
    levelTimer->stop();
    this->view->close();
    emit endLevel();
#endif
}


void Level::parseLevelMap()
{
#ifndef MODIFIED_H
    QFile file(levelInfo->getLevelMap(levelId));
    if(!file.exists()){
        qDebug() << "File does not exist";
        return ;
    }
    if(!file.open(QIODevice::ReadOnly)){
        qDebug() << "Opening failed";
        return ;
    }

    QTextStream in(&file);
    QStringList line = in.readLine().split(" ");
    qreal sizeX = line[0].toInt();
    qreal sizeY = line[1].toInt();

    for(int y = 0; y < sizeY; y++){
        QString sceneObjects = in.readLine();
        for( int x = 0; x < sizeX; x++){
            putObjectOnScene(sceneObjects[x].toLatin1(), x * 800 / (sizeX), y / (sizeY - 1));

        }
    }

    file.close();
#endif
}

#ifndef MODIFIED_H
void Level::putObjectOnScene(char type, qreal x, qreal y)
{

    switch(type){

    case '-':
        break;
    case 'G':{
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom);
        scene->addItem(tile);
#endif
        GreenPuddle *puddle = new GreenPuddle(info->_width, levelInfo->getPuddle(0));
#ifndef MODIFIED_H
        puddle->setPos(x, y * custom-5);
        scene->addItem(puddle);
#endif

        break;
    }
    case 'M':{
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom);
        scene->addItem(tile);
#endif
        BluePuddle *puddle = new BluePuddle(info->_width, levelInfo->getPuddle(1));
#ifndef MODIFIED_H
        puddle->setPos(x, y * custom-5);
        scene->addItem(puddle);
#endif
        break;
    }

    case 'N':{
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom);
        scene->addItem(tile);
#endif
        RedPuddle *puddle = new RedPuddle(40, levelInfo->getPuddle(2));
#ifndef MODIFIED_H
        puddle->setPos(x, y * custom-5);
        scene->addItem(puddle);
#endif
        break;
    }

    case '_':{
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom);
        scene->addItem(tile);
#endif
        break;
    }
    case '|':{
        ReverseTile *rtile = new ReverseTile(info->_width, levelInfo->getRTile());
#ifndef MODIFIED_H
        rtile->setPos(x, y * custom - 100);
        scene->addItem(rtile);
#endif
        break;
    }
    case '+':{
        ReverseTile *rtile = new ReverseTile(info->_width, levelInfo->getRTile());
#ifndef MODIFIED_H
        rtile->setPos(x , y * custom - 100);
        scene->addItem(rtile);
#endif
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom);
        scene->addItem(tile);
#endif
        break;
    }

    case '!':{
        ReverseTile *rtile = new ReverseTile(info->_width, levelInfo->getRTile());
#ifndef MODIFIED_H
        rtile->setPos(x + 60, y * custom - 100);
        scene->addItem(rtile);
#endif
        break;
    }
    case '*':{
        ReverseTile *rtile = new ReverseTile(info->_width, levelInfo->getRTile());
#ifndef MODIFIED_H
        rtile->setPos(x + 60, y * custom - 100);
        scene->addItem(rtile);
#endif
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom);
        scene->addItem(tile);
#endif
        break;
    }

    case 'R':{
        RedDiamond *diamond = new RedDiamond(info->_width, levelInfo->getDiamond(0));
#ifndef MODIFIED_H
        diamond->setPos(x, y * height - 50);
        scene->addItem(diamond);
#endif
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom );
        scene->addItem(tile);
#endif
        break;
    }
    case 'B':{
        BlueDiamond *diamond = new BlueDiamond(info->_width, levelInfo->getDiamond(1));
#ifndef MODIFIED_H
        diamond->setPos(x, y * height - 50);
        scene->addItem(diamond);
#endif
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom );
        scene->addItem(tile);
#endif
        break;
    }

    case 'W':{
        BlueDoor *door = new BlueDoor(info->_width, levelInfo->getDoor(1));
#ifndef MODIFIED_H
        door->setPos(x, y * custom - info->_width);
        scene->addItem(door);
#endif
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom );
        scene->addItem(tile);
#endif
        break;
    }
    case 'F':{
        RedDoor *door = new RedDoor(info->_width, levelInfo->getDoor(0));
#ifndef MODIFIED_H
        door->setPos(x, y * custom - info->_width);
        scene->addItem(door);
#endif
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
#ifndef MODIFIED_H
        tile->setPos(x, y * custom );
        scene->addItem(tile);
#endif
        break;
    }

    default:
        break;
    }

}

#else
void Level::putObjectOnScene(char type, double x, double y)
{

    switch(type){

    case '-':
        break;
    case 'G':{
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom);
        //scene->addItem(tile);
        GreenPuddle *puddle = new GreenPuddle(info->_width, levelInfo->getPuddle(0));
        //puddle->setPos(x, y * custom-5);
        //scene->addItem(puddle);

        break;
    }
    case 'M':{
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom);
        //scene->addItem(tile);
        BluePuddle *puddle = new BluePuddle(info->_width, levelInfo->getPuddle(1));
        //puddle->setPos(x, y * custom-5);
        //scene->addItem(puddle);
        break;
    }

    case 'N':{
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom);
        //scene->addItem(tile);
        RedPuddle *puddle = new RedPuddle(40, levelInfo->getPuddle(2));
        //puddle->setPos(x, y * custom-5);
        //scene->addItem(puddle);
        break;
    }

    case '_':{
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom);
        //scene->addItem(tile);
        break;
    }
    case '|':{
        ReverseTile *rtile = new ReverseTile(info->_width, levelInfo->getRTile());
        //rtile->setPos(x, y * custom - 100);
        //scene->addItem(rtile);
        break;
    }
    case '+':{
        ReverseTile *rtile = new ReverseTile(info->_width, levelInfo->getRTile());
        //rtile->setPos(x , y * custom - 100);
        //scene->addItem(rtile);
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom);
        //scene->addItem(tile);
        break;
    }

    case '!':{
        ReverseTile *rtile = new ReverseTile(info->_width, levelInfo->getRTile());
        //rtile->setPos(x + 60, y * custom - 100);
        //scene->addItem(rtile);
        break;
    }
    case '*':{
        ReverseTile *rtile = new ReverseTile(info->_width, levelInfo->getRTile());
        //rtile->setPos(x + 60, y * custom - 100);
        //scene->addItem(rtile);
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom);
        //scene->addItem(tile);
        break;
    }

    case 'R':{
        RedDiamond *diamond = new RedDiamond(info->_width, levelInfo->getDiamond(0));
        //diamond->setPos(x, y * height - 50);
        //scene->addItem(diamond);
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom );
        //scene->addItem(tile);
        break;
    }
    case 'B':{
        BlueDiamond *diamond = new BlueDiamond(info->_width, levelInfo->getDiamond(1));
        //diamond->setPos(x, y * height - 50);
        //scene->addItem(diamond);
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom );
        //scene->addItem(tile);
        break;
    }

    case 'W':{
        BlueDoor *door = new BlueDoor(info->_width, levelInfo->getDoor(1));
        //door->setPos(x, y * custom - info->_width);
        //scene->addItem(door);
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom );
        //scene->addItem(tile);
        break;
    }
    case 'F':{
        RedDoor *door = new RedDoor(info->_width, levelInfo->getDoor(0));
        //door->setPos(x, y * custom - info->_width);
        //scene->addItem(door);
        Tile *tile = new Tile(info->_width, levelInfo->getTile());
        //tile->setPos(x, y * custom );
        //scene->addItem(tile);
        break;
    }

    default:
        break;
    }

}



#endif




Level::~Level()
{
#ifndef MODIFIED_H
    QList<QGraphicsItem *> items = scene->items();

    foreach( QGraphicsItem *item, items ){
            scene->removeItem(item);
    }
    items.clear();

    delete this->mainTimer;
    delete this->levelTimer;
    delete this->timerLabel;
#endif
    delete this->music;
    delete this->levelBar;
}



