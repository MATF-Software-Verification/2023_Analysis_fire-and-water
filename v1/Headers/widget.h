#ifndef WIDGET_H
#define WIDGET_H

// #include <QWidget>
#include "levelinfo.h"
#include "settings.h"

//QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
//QT_END_NAMESPACE

class Widget //: public QWidget
{
    //Q_OBJECT
    public:
       Widget();//QWidget *parent = nullptr);
      ~Widget();
      void updateScore();
      void createLevel();

    private:
       Ui::Widget *ui;
       Settings *settings;
       LevelInfo *levelInfo;
       int levelId;
};
#endif // WIDGET_H
