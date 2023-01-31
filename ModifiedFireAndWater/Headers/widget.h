#ifndef WIDGET_H
#define WIDGET_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QWidget>
#include "Headers/levelinfo.h"
#include "Headers/settings.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
    public:
       Widget(QWidget *parent = nullptr);
      ~Widget();

    public slots:

       void onPlayBtn();
       void onHighScoresBtn();
       void onSettingsBtn();
       void onQuitBtn();
       void onBackBtn();

    private slots:
       void on_melodyBtn_stateChanged(int arg1);
       void updateScore();
       void createLevel();

    private:
       Ui::Widget *ui;
       Settings *settings;
       LevelInfo *levelInfo;
       int levelId;
};
#endif

#endif // WIDGET_H
