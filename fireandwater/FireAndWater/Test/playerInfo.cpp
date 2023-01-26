#include "../Headers/playerinfo.h"
#include "catch.hpp"

TEST_CASE("playerInfo()", "[function]")
{
    SECTION("Pri kreiranju konstruktora _screenHeight je > 0")
    {


        // Arrange
        playerInfo *playerInfo = new class playerInfo();

        // Act
        playerInfo->getScreenHeight();
        qreal returnValue = playerInfo->_screenHeight;

        delete playerInfo;

        // Assert
        REQUIRE(returnValue > 0 );
    }
    SECTION("Funkcija racuna visinu igraca preko visine ekrana")
    {
        // Arrange
        playerInfo *playerInfo = new class playerInfo();
        qreal expectedValue = 80;


        // Act
        qreal returnValue = playerInfo->_height;

        delete playerInfo;

        // Assert
        REQUIRE(returnValue == expectedValue);

    }
    SECTION("Funkcija racuna sirinu igraca kao 50% njegove visine")
       {
           // Arrange
        playerInfo *playerInfo = new class playerInfo();
        playerInfo->_screenHeight = 600;
        qreal expectedValue = 80 * 0.5;

        // Act
        playerInfo->scaleParameters();
        qreal returnValue = playerInfo->_width;

        delete playerInfo;

        // Assert
        REQUIRE(returnValue == expectedValue);
       }

       SECTION("Funkcija racuna korak po y osi kao 8.9% njegove visine")
       {
           // Arrange
        playerInfo *playerInfo = new class playerInfo();
        playerInfo->_screenHeight = 600;
        qreal expectedValue = 80 * 0.089;

           // Act
        playerInfo->scaleParameters();
        qreal returnValue = playerInfo->_stepY;

        delete playerInfo;

        // Assert
        REQUIRE(returnValue == expectedValue);
       }

       SECTION("Funkcija racuna koeficijent gravitacije kao 3% njegovog koraka po y osi")
       {
           // Arrange
        playerInfo *playerInfo = new class playerInfo();
        playerInfo->_screenHeight = 600;
        qreal expectedValue = 80 * 0.089 * 0.03;


           // Act
        playerInfo->scaleParameters();
        qreal returnValue = playerInfo->_gravity;

        delete playerInfo;

           // Assert
           REQUIRE(returnValue == expectedValue);
       }

       SECTION("Funkcija racuna poziciju igraca na y osi kao 30% visine ekrana")
       {
           // Arrange
           playerInfo *playerInfo = new class playerInfo();
           qreal expectedValue = 180;
           playerInfo->_screenHeight = 600;

           // Act
           playerInfo->scaleParameters();
           qreal returnValue = playerInfo->_posY;

           delete playerInfo;


           // Assert
           REQUIRE(returnValue == expectedValue);
       }


}
