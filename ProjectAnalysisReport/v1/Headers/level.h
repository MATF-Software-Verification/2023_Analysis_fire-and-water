#ifndef LEVEL_H
#define LEVEL_H


#include "levelBar.h"
#include "levelinfo.h"
#include "melody.h"
#include "input.h"
#include "message.h"
//#include <QKeyEvent>
//#include<QGraphicsView>
//#include <QObject>


class Level//: public QObject
{
    //Q_OBJECT
    public:
        //QGraphicsView *view = nullptr;
        //QGraphicsScene *scene = nullptr;
        Input *input = nullptr;
        Level(int levelId,LevelInfo *levelInfo);
        void start();
        void finishLevel(MessageText msgText);
        bool red;
        bool blue;
        playerInfo *info;
        virtual ~Level();
        void outOfTime();


    private:
        int levelId;
        Melody *music;
        //Timer *levelTimer;
        //QTimer *mainTimer;
        LevelBar *levelBar;
        //QLabel* timerLabel;
        LevelInfo *levelInfo;
        void setView();
        void parseLevelMap();
        void putObjectOnScene(char type, double x, double y);

};


#endif // LEVEL_H
