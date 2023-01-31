#ifndef ITEM_H
#define ITEM_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QGraphicsPixmapItem>

enum class ItemColor
{
    Fire = 0,
    Water = 1
};

class Item : QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
    public:
        Item();
        ~Item();
        virtual void collect(ItemColor id) = 0;
};

#else
enum class ItemColor
{
    Fire = 0,
    Water = 1
};

class Item 
{
    public:
        Item();
        ~Item();
        virtual void collect(ItemColor id) = 0;
};
#endif

#endif // ITEM_H
