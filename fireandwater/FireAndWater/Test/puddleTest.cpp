#include "catch.hpp"
#include "../Headers/bluePuddle.h"




TEST_CASE("Puddle", "[function]")
{

    SECTION("Ukoliko pozovemo kostruktor sa argumentom 40, ocekujemo da width bude 80")
        {
            // Arrange
            BluePuddle *bluePuddle = new BluePuddle(40,"");
            qreal ocekivani_width = 80;

            // Act
            qreal dobijeni_width = bluePuddle->getWidth();

            delete bluePuddle;

            // Assert
            REQUIRE(ocekivani_width == dobijeni_width);
        }
    SECTION("Ukoliko pozovemo kostruktor sa argumentom 40, ocekujemo da height bude 20")
        {
            // Arrange
            BluePuddle *bluePuddle = new BluePuddle(40,"");
            qreal ocekivani_height = 20;

            // Act
            qreal dobijeni_height = bluePuddle->getHeight();

            delete bluePuddle;

            // Assert
            REQUIRE(ocekivani_height == dobijeni_height);
        }
}
