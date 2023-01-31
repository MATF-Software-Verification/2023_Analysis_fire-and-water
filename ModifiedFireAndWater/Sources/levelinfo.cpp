#include "Headers/levelinfo.h"

#ifndef MODIFIED_H
#include <QScreen>
#include <QApplication>
#endif

#include <string>

LevelInfo::LevelInfo(Settings *settings)
{
    this->settings = settings;

    tiles = {
        ":/img/Images/tile1.png"
    };
    rtiles = {
        ":/img/Images/rtile.png"
    };

    diamonds = {
        ":/img/Images/red_diamond.png",
        ":/img/Images/blue_diamond.png"
    };

    puddles={
        ":/img/Images/gr_puddle.png",
        ":/img/Images/bl_puddle.png",
        ":/img/Images/rd_puddle.png"
    };

    doors={
        ":/img/Images/red_door.png",
        ":/img/Images/blue_door.png"

    };

    levelMaps = {":/Maps/map1.txt",
                ":/Maps/map2.txt",
                ":/Maps/map3.txt"};



}

#ifndef MODIFIED_H
QString LevelInfo::getTile()
{
    return this->tiles[0];
}

QString LevelInfo::getRTile()
{
    return this->rtiles[0];
}

QString LevelInfo::getPuddle(int levelId)
{
    return this->puddles[levelId];
}

QString LevelInfo::getDiamond(int colorId)
{
    if(colorId != 0 && colorId != 1)
        throw "Invalid id";
    return this->diamonds[colorId];
}

QString LevelInfo::getDoor(int colorId)
{
    if(colorId != 0 && colorId != 1)
        throw "Invalid id";
    return this->doors[colorId];
}

bool LevelInfo::getMelody()
{
    return settings->getMelody();
}

QString LevelInfo::getLevelMap(int levelId)
{
    if(levelId < 1 || levelId > 3)
        throw "Invalid id";
    return this->levelMaps[levelId-1];
}
#else
string LevelInfo::getTile()
{
    return this->tiles[0];
}

string LevelInfo::getRTile()
{
    return this->rtiles[0];
}

string LevelInfo::getPuddle(int levelId)
{
    return this->puddles[levelId];
}

string LevelInfo::getDiamond(int colorId)
{
    if(colorId != 0 && colorId != 1)
        throw "Invalid id";
    return this->diamonds[colorId];
}

string LevelInfo::getDoor(int colorId)
{
    if(colorId != 0 && colorId != 1)
        throw "Invalid id";
    return this->doors[colorId];
}

bool LevelInfo::getMelody()
{
    return settings->getMelody();
}

string LevelInfo::getLevelMap(int levelId)
{
    if(levelId < 1 || levelId > 3)
        throw "Invalid id";
    return this->levelMaps[levelId-1];
}

#endif


LevelInfo::~LevelInfo()
{
}

