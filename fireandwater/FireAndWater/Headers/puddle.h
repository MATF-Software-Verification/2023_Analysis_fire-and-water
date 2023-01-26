#ifndef PUDDLE_H
#define PUDDLE_H

#include <QGraphicsPixmapItem>

class Puddle : QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
    public:
        Puddle();
        ~Puddle();
};
#endif // PUDDLE_H
