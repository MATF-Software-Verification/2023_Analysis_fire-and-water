#ifndef LEVELINFO_H
#define LEVELINFO_H

#include "Headers/settings.h"

#include <QString>
#include <vector>

class LevelInfo
{
    public:
        qreal screenWidth;
        qreal screenHeight;
        qreal sceneSizeX;
        qreal platformOffSet;
        qreal itemOffSet;
        LevelInfo(Settings *settings);
        QString getDoor(int levelId);
        QString getTile();
        QString getRTile();
        QString getPuddle(int levelId);
        QString getDiamond(int levelId);
        QString getLevelMap(int levelId);
        bool getMelody();
        ~LevelInfo();

    private:
        Settings *settings;
        std::vector<QString> tiles;
        std::vector<QString> doors;
        std::vector<QString> rtiles;
        std::vector<QString> puddles;
        std::vector<QString> diamonds;
        std::vector<QString> levelMaps;
};

#endif // LEVELINFO_H
