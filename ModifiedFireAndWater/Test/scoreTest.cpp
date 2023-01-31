#include "catch.hpp"
#include "../Headers/score.h"

TEST_CASE("increase()")
{
    SECTION("Nakon kreiranja instance klase Score, trenutni skor treba da bude inicijalizovan na 0")
    {
        // Arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        Score *score = new Score(levelInfo);

        int expectedValue = 0;

        // Act
        int currentValue = score->current_score;

        // Assert
        REQUIRE(currentValue == expectedValue);

        delete settings;
        delete levelInfo;
        delete score;
    }

    SECTION("Trenutni skor se uvecava za 1 pri svakom pozivu funkcije")
    {
        // Arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        Score *score = new Score(levelInfo);

        score->current_score = 10;
        int expectedValue1 = 11;

        // Act
        score->increase();
        int returnValue1 = score->current_score;

        // Assert
        REQUIRE(returnValue1 == expectedValue1);

        delete settings;
        delete levelInfo;
        delete score;
    }
}

TEST_CASE("takeLife()")
{
    SECTION("Smanjivanje preostalog broja zivota za 1 i trenutni skor postavlja na 0")
    {
        // Arrange

        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        Score *score = new Score(levelInfo);

        int expectedValue = 2;
        int expectedValue1 = 0;

        // Act
        score->takeLife();
        int returnValue = score->getLives();
        int returnValue1 = score->current_score;

        // Assert
        REQUIRE(returnValue == expectedValue);
        REQUIRE(returnValue1 == expectedValue1);

        delete settings;
        delete levelInfo;
        delete score;

    }
}

TEST_CASE("countLevelScore()")
{
    SECTION("Vraca rezultat 0 nakon odigranog nivoa ukoliko je preostalo vreme 0")
    {
        // Arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        Score *score = new Score(levelInfo);

        int currentValue = 0;
        int expectedValue = 0;

        // Act
        int returnValue = score->countLevelScore(currentValue);

        // Assert
        REQUIRE(expectedValue == returnValue);

        delete settings;
        delete levelInfo;
        delete score;
    }

    SECTION("Vraca rezultat 0 nakon odigranog nivoa ukoliko je trenutni skor 0")
    {
        // Arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        Score *score = new Score(levelInfo);

        int currentValue = 60;
        int expectedValue = 0;
        score->current_score = 0;

        // Act
        int returnValue = score->countLevelScore(currentValue);

        // Assert
        REQUIRE(expectedValue == returnValue);

        delete settings;
        delete levelInfo;
        delete score;
    }

    SECTION("Racunanje skora nakon odigranog nivoa ako je trenutni skor i preostalo vreme vece od 0")
    {
         // Arrange
	 Settings *settings = new Settings();
         LevelInfo *levelInfo = new LevelInfo(settings);
         Score *score = new Score(levelInfo);

         int currentValue = 60;
         score->current_score = 10;

         int expectedValue = 10*60;

         // Act
         int returnValue = score->countLevelScore(currentValue);

         // Assert
         REQUIRE(expectedValue == returnValue);

         delete settings;
         delete levelInfo;
         delete score;
    }
}

TEST_CASE("saveCurrentScore()")
{
    SECTION("Izbacivanje izuzetka za nevalidan unos levelId-a pri pozivu funkcije za cuvanje trenuntnog skora")
    {
        // Arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        Score *score = new Score(levelInfo);

        int currentValue = -1;
        int remainingTime = 60;

        // Act and Assert
        REQUIRE_THROWS(score->saveCurrentScore(currentValue,remainingTime));

        delete settings;
        delete levelInfo;
        delete score;
    }

   }

