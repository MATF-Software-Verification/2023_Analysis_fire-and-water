#ifndef LEVELBAR_H
#define LEVELBAR_H

//#include <QLabel>
//#include <QGraphicsView>


class LevelBar //: public QObject
{
    public:
        LevelBar();//QGraphicsView *view);
        void updateInformation();
        ~LevelBar();

    private:
        //QGraphicsView *view;
        //QVector<QLabel*> lifeLabels;
        //QPixmap lifePixmap;

};


#endif // LEVELBAR_H
