#ifndef LEVELBAR_H
#define LEVELBAR_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QLabel>
#include <QGraphicsView>


class LevelBar : public QObject
{
    public:
        LevelBar(QGraphicsView *view);
        void updateInformation();
        ~LevelBar();

    private:
        QGraphicsView *view;
        QVector<QLabel*> lifeLabels;
        QPixmap lifePixmap;

};

#else
class LevelBar 
{
    public:
        LevelBar();
        void updateInformation();
        ~LevelBar();
};
#endif


#endif // LEVELBAR_H
