#ifndef DOOR_H
#define DOOR_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QGraphicsPixmapItem>

class Door : QObject , public  QGraphicsPixmapItem
{
    Q_OBJECT
    public:
        Door();
        ~Door();
};

#else
class Door
{
    public:
        Door();
        ~Door();
};
#endif

#endif // DOOR_H
