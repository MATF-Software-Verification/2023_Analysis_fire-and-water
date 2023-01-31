#ifndef PUDDLE_H
#define PUDDLE_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QGraphicsPixmapItem>

class Puddle : QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
    public:
        Puddle();
        ~Puddle();
};


#else
class Puddle 
{
    public:
        Puddle();
        ~Puddle();
};
#endif

#endif // PUDDLE_H
