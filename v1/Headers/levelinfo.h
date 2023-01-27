#ifndef LEVELINFO_H
#define LEVELINFO_H

#include "settings.h"
#include <string>

using namespace std;

//#include <QString>
#include <vector>

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

#endif // LEVELINFO_H
