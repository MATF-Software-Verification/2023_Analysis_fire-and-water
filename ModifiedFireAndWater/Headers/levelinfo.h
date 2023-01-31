#ifndef LEVELINFO_H
#define LEVELINFO_H

#include "Headers/settings.h"

#include <vector>

#include "Sources/modifiedProject.hpp"

using namespace std;

#ifndef MODIFIED_H
#include <QString>

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

#else
#include <string>

class LevelInfo
{
    public:
        double screenWidth;
        double screenHeight;
        double sceneSizeX;
        double platformOffSet;
        double itemOffSet;
        LevelInfo(Settings *settings);
        string getDoor(int levelId);
        string getTile();
        string getRTile();
        string getPuddle(int levelId);
        string getDiamond(int levelId);
        string getLevelMap(int levelId);
        bool getMelody();
        ~LevelInfo();

    private:
        Settings *settings;
        std::vector<string> tiles;
        std::vector<string> doors;
        std::vector<string> rtiles;
        std::vector<string> puddles;
        std::vector<string> diamonds;
        std::vector<string> levelMaps;
};
#endif

#endif // LEVELINFO_H
