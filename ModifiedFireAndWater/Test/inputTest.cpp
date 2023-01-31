#include "catch.hpp"
#include "../Headers/input.h"
#include "qevent.h"


TEST_CASE("keyPressEvent", "[function]"){
   SECTION("Postavljanje brzine na velicinu koraka pritiskom tastera D"){
        // Arrange
        Input *input = new Input();
        playerInfo *info = new playerInfo();
        qreal expectedValue = info->_stepX;

        // Act
        QKeyEvent *event = new QKeyEvent(QEvent::KeyPress,Qt::Key_D,Qt::NoModifier);
        input->keyPressEvent(event);
        qreal currentValue = input->playerFire->info->_velocityX;


        delete input;
        delete info;
        delete event;

        REQUIRE(currentValue == expectedValue);
        }
   SECTION("Postavljanje brzine na velicinu koraka pritiskom tastera A"){
        // Arrange
        Input *input = new Input();
        playerInfo *info = new playerInfo();
        qreal expectedValue = -info->_stepX;

        // Act
        QKeyEvent *event = new QKeyEvent(QEvent::KeyPress,Qt::Key_A,Qt::NoModifier);
        input->keyPressEvent(event);
        qreal currentValue = input->playerFire->info->_velocityX;


        delete input;
        delete info;
        delete event;

        REQUIRE(currentValue == expectedValue);
        }
}

TEST_CASE("keyRealeaseEvent", "[function]"){
    SECTION("Postavljanje brzine na 0 prilikom pustanja tastera D"){
         // Arrange
         Input *input = new Input();
         playerInfo *info = new playerInfo();
         qreal expectedValue = 0;

         // Act
         QKeyEvent *event = new QKeyEvent(QEvent::KeyRelease,Qt::Key_D,Qt::NoModifier);
         input->keyReleaseEvent(event);
         qreal currentValue = input->playerFire->info->_velocityX;


         delete input;
         delete info;
         delete event;

         REQUIRE(currentValue == expectedValue);
         }
    SECTION("Postavljanje brzine na 0 prilikom pustanja tastera A"){
         // Arrange
         Input *input = new Input();
         playerInfo *info = new playerInfo();
         qreal expectedValue = 0;

         // Act
         QKeyEvent *event = new QKeyEvent(QEvent::KeyRelease,Qt::Key_A,Qt::NoModifier);
         input->keyReleaseEvent(event);
         qreal currentValue = input->playerFire->info->_velocityX;


         delete input;
         delete info;
         delete event;

         REQUIRE(currentValue == expectedValue);
         }

}
