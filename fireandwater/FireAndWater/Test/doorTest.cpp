#include "catch.hpp"
#include "../Headers/blueDoor.h"




TEST_CASE("Door", "[function]")
{

    SECTION("Ukoliko pozovemo kostruktor sa argumentom 40, ocekujemo da width bude 40")
        {
            // Arrange
            BlueDoor *blueDoor = new BlueDoor(40,"");
            qreal ocekivani_width = 40;

            // Act
            qreal dobijeni_width = blueDoor->getWidth();

            delete blueDoor;

            // Assert
            REQUIRE(ocekivani_width == dobijeni_width);
        }
    SECTION("Ukoliko pozovemo kostruktor sa argumentom 40, ocekujemo da height bude 48")
        {
            // Arrange
            BlueDoor *blueDoor = new BlueDoor(40,"");
            qreal ocekivani_height = 48;

            // Act
            qreal dobijeni_height = blueDoor->getHeight();

            delete blueDoor;

            // Assert
            REQUIRE(ocekivani_height == dobijeni_height);
        }
}
