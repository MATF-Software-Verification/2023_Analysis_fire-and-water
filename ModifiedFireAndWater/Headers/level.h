#ifndef LEVEL_H
#define LEVEL_H


#include "Headers/levelBar.h"
#include "Headers/levelinfo.h"
#include "Headers/melody.h"
#include "Headers/input.h"
#include "Headers/message.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QKeyEvent>
#include<QGraphicsView>
#include <QObject>


class Level: public QObject
{
    Q_OBJECT
    public:
        QGraphicsView *view = nullptr;
        QGraphicsScene *scene = nullptr;
        Input *input = nullptr;
        Level(int levelId,LevelInfo *levelInfo);
        void start();
        void finishLevel(MessageText msgText);
        bool red;
        bool blue;
        playerInfo *info;
        virtual ~Level();

    public slots:
        void outOfTime();

    signals:
        void endLevel();


    private:
        int levelId;
        Melody *music;
        QTimer *levelTimer;
        QTimer *mainTimer;
        LevelBar *levelBar;
        QLabel* timerLabel;
        LevelInfo *levelInfo;
        void setView();
        void parseLevelMap();
        void putObjectOnScene(char type, qreal x, qreal y);

};


#else
class Level
{
    public:
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
        LevelBar *levelBar;
        LevelInfo *levelInfo;
        void setView();
        void parseLevelMap();
        void putObjectOnScene(char type, double x, double y);

};

#endif

#endif // LEVEL_H
