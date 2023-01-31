#include "catch.hpp"
#include "../Headers/blueDiamond.h"




TEST_CASE("Diamond", "[function]")
{

    SECTION("Ukoliko pozovemo kostruktor sa argumentom 40, ocekujemo da width bude 36")
        {
            // Arrange
            BlueDiamond *blueDiamond = new BlueDiamond(40,"");
            qreal ocekivani_width = 36;

            // Act
            qreal dobijeni_width = blueDiamond->getWidth();

            delete blueDiamond;

            // Assert
            REQUIRE(ocekivani_width == dobijeni_width);
        }
    SECTION("Ukoliko pozovemo kostruktor sa argumentom 40, ocekujemo da height bude 32")
        {
            // Arrange
            BlueDiamond *blueDiamond = new BlueDiamond(40,"");
            qreal ocekivani_height = 28.8;

            // Act
            qreal dobijeni_height = blueDiamond->getHeight();

            delete blueDiamond;

            // Assert
            REQUIRE(ocekivani_height == dobijeni_height);
        }
}
