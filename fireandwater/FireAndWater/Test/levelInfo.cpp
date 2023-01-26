#include "catch.hpp"
#include "../Headers/levelinfo.h"


TEST_CASE("getDiamond", "[function]")
{
    SECTION("za nevalidnu vrednost nivoa funkcija izbacuje izuzetak")
    {
//        arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        int ulaz = 10;

//        act and assert
        REQUIRE_THROWS(levelInfo->getDiamond(ulaz));

        delete levelInfo;
        delete settings;

    }

    SECTION("za validnu vrednost nivoa funkcija vraca odgovarajucu sliku sastojka")
    {
//        arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        int ulaz = 1;
        QString ocekivani_izlaz = ":/img/Images/blue_diamond.png";

//        act
        QString dobijeni_izlaz = levelInfo->getDiamond(ulaz);

//        assert

        REQUIRE(QString::compare(ocekivani_izlaz, dobijeni_izlaz) == 0);

        delete levelInfo;
        delete settings;
    }
}

TEST_CASE("getLevelMap", "[function]")
{
    SECTION("za nevalidnu vrednost nivoa funkcija izbacuje izuzetak")
    {
//        arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        int ulaz = 11;

//        act and assert
        REQUIRE_THROWS(levelInfo->getLevelMap(ulaz));

        delete levelInfo;
        delete settings;

    }

    SECTION("za validnu vrednost nivoa funkcija vraca odgovarajuci fajl mape")
    {
//        arrange
        Settings *settings = new Settings();
        LevelInfo *levelInfo = new LevelInfo(settings);
        int ulaz = 1;
        QString ocekivani_izlaz = ":/Maps/map1.txt";

//        act
        QString dobijeni_izlaz = levelInfo->getLevelMap(ulaz);

//        assert

        REQUIRE(QString::compare(ocekivani_izlaz, dobijeni_izlaz) == 0);

        delete levelInfo;
        delete settings;
    }
}

