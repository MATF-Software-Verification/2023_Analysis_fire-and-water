#include "catch.hpp"
#include "../Headers/level.h"
#include "../Headers/settings.h"

TEST_CASE("Level", "[funtion]")
{
    SECTION("Poziv konstruktora sa nevalidnim levelId ispaljuje izuzetak")
    {
        // Arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);

        // Act + Assert
        REQUIRE_THROWS(Level(-5, levelInfo));
        delete settings;
        delete levelInfo;
    }

    SECTION("Poziv konstruktora sa nevalidnim levelData ispaljuje izuzetak")
    {
        // Arrange
        int levelId = 3;

        // Act + Assert
        REQUIRE_THROWS(Level(levelId, nullptr));
    }
}

