TEMPLATE = app
QT += gui core widgets multimedia

CONFIG += c++11

isEmpty(CATCH_INCLUDE_DIR): CATCH_INCLUDE_DIR=$$(CATCH_INCLUDE_DIR)
# set by Qt Creator wizard
isEmpty(CATCH_INCLUDE_DIR): CATCH_INCLUDE_DIR="/home/smajli/Documents/projekat_rs/08-fire-and-water/FireAndWater"
!isEmpty(CATCH_INCLUDE_DIR): INCLUDEPATH *= $${CATCH_INCLUDE_DIR}

isEmpty(CATCH_INCLUDE_DIR): {
    message("CATCH_INCLUDE_DIR is not set, assuming Catch2 can be found automatically in your system")
}

SOURCES +=     Test/main.cpp \
    Sources/score.cpp\
    Sources/settings.cpp\
    Sources/levelinfo.cpp\
    Sources/message.cpp\
    Sources/blueDiamond.cpp\
    Sources/blueDoor.cpp\
    Sources/bluePuddle.cpp\
    Sources/door.cpp\
    Sources/greenPuddle.cpp\
    Sources/input.cpp\
    Sources/item.cpp\
    Sources/level.cpp\
    Sources/levelBar.cpp\
    Sources/melody.cpp\
    Sources/player.cpp\
    Sources/playerinfo.cpp\
    Sources/puddle.cpp\
    Sources/redDiamond.cpp\
    Sources/redDoor.cpp\
    Sources/redPuddle.cpp\
    Sources/reversetile.cpp\
    Sources/tile.cpp\
    Sources/widget.cpp\
    Test/diamondTest.cpp \
    Test/doorTest.cpp \
    Test/inputTest.cpp \
    Test/levelInfo.cpp \
    Test/levelTest.cpp \
    Test/messageTest.cpp \
    Test/playerInfo.cpp \
    Test/puddleTest.cpp \
    Test/scoreTest.cpp \
    Test/settingsTest.cpp


HEADERS += \
    Test/catch.hpp\
    Headers/score.h\
    Headers/settings.h\
    Headers/levelinfo.h\
    Headers/message.h\
    Headers/blueDiamond.h\
    Headers/blueDoor.h\
    Headers/bluePuddle.h\
    Headers/door.h\
    Headers/greenPuddle.h\
    Headers/input.h\
    Headers/item.h\
    Headers/level.h\
    Headers/levelBar.h\
    Headers/melody.h\
    Headers/player.h\
    Headers/playerinfo.h\
    Headers/puddle.h\
    Headers/redDiamond.h\
    Headers/redDoor.h\
    Headers/redPuddle.h\
    Headers/reversetile.h\
    Headers/tile.h\
    Headers/widget.h\

FORMS += \
    widget.ui
