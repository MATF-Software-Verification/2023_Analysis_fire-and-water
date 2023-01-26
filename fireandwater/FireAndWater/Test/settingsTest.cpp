#include "catch.hpp"
#include "../Headers/settings.h"


TEST_CASE("settings()", "[function]"){
    SECTION("Kada se kreira nova instanca muzika je ukljucena"){
        // Arrange
        Settings *settings = new Settings();
        bool expectedValue = true;

        // Act
        bool currentValue = settings->getMelody();

        // Assert
        REQUIRE(currentValue == expectedValue);

        delete settings;
    }
}

TEST_CASE("setMelody()", "[function]"){
     SECTION("Kada se ugasi opcija zvuka ocekivano je da nema muzike"){
        // Arrange
        Settings *settings = new Settings();
        settings->setMelody(0);
        bool expectedValue = false;

        // Act
        bool currentValue = settings->getMelody();

        // Assert
        REQUIRE(currentValue == expectedValue);

        delete settings;
     }
}
