#include "Headers/widget.h"
#include "Headers/level.h"
#include "Headers/levelinfo.h"
#include "Headers/settings.h"

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QApplication>
#endif

int main(int argc, char *argv[])
{
#ifndef MODIFIED_H
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
#else
    int i = 0;
    int levelId = 1;
    while(i++ != 1) {
        levelId = levelId % 3;
        if(!levelId)
            levelId++;

        Settings *s = new Settings();
        LevelInfo *li = new LevelInfo(s);
        Level *level = new Level(levelId, li);

        level->start();

        delete s; delete li; delete level;
    }
#endif
}
