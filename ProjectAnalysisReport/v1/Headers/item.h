#ifndef ITEM_H
#define ITEM_H

//#include <QGraphicsPixmapItem>

enum class ItemColor
{
    Fire = 0,
    Water = 1
};

class Item //: QObject , public QGraphicsPixmapItem
{
    //Q_OBJECT
    public:
        Item();
        ~Item();
        virtual void collect(ItemColor id) = 0;
};

#endif // ITEM_H
