QT       += core gui multimedia

QMAKE_CXXFLAGS += -g

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17 -Wall -Wextra

# You can make your code Firefail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Sources/blueDiamond.cpp \
    Sources/blueDoor.cpp \
    Sources/bluePuddle.cpp \
    Sources/door.cpp \
    Sources/greenPuddle.cpp \
    Sources/level.cpp \
    Sources/levelBar.cpp \
    Sources/main.cpp \
    Sources/melody.cpp \
    Sources/message.cpp \
    Sources/puddle.cpp \
    Sources/redDiamond.cpp \
    Sources/redDoor.cpp \
    Sources/redPuddle.cpp \
    Sources/reversetile.cpp \
    Sources/score.cpp \
    Sources/settings.cpp \
    Sources/tile.cpp \
    Sources/widget.cpp \
    Sources/player.cpp \
    Sources/input.cpp \
    Sources/levelinfo.cpp \
    Sources/playerinfo.cpp \
    Sources/item.cpp

HEADERS += \
    Headers/blueDiamond.h \
    Headers/blueDoor.h \
    Headers/bluePuddle.h \
    Headers/door.h \
    Headers/greenPuddle.h \
    Headers/item.h \
    Headers/level.h \
    Headers/levelBar.h \
    Headers/melody.h \
    Headers/message.h \
    Headers/puddle.h \
    Headers/redDiamond.h \
    Headers/redDoor.h \
    Headers/redPuddle.h \
    Headers/reversetile.h \
    Headers/score.h \
    Headers/settings.h \
    Headers/tile.h \
    Headers/widget.h \
    Headers/player.h \
    Headers/input.h \
    Headers/levelinfo.h \
    Headers/playerinfo.h \
    Headers/item.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    Maps/map1.txt
