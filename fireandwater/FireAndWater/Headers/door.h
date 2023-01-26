#ifndef DOOR_H
#define DOOR_H

#include <QGraphicsPixmapItem>

class Door : QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
    public:
        Door();
        ~Door();
};
#endif // DOOR_H
