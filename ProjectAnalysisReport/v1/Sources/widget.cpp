#include "../Headers/widget.h"
#include "../Headers/score.h"
//#include "../ui_widget.h"
#include "../Headers/level.h"
#include "../Headers/settings.h"

//#include <QCheckBox>

Level *level;
Score *score;

Widget::Widget()//QWidget *parent)
    //: QWidget(parent)
    //: ui(new Ui::Widget)
    : settings(new Settings)
{
    //ui->setupUi(this);

    //ui->melodyBtn->setChecked(true);

    //ui->stackedWidget->setCurrentIndex(2);

    levelInfo = new LevelInfo(settings);

    score = new Score(levelInfo);

}


void Widget::createLevel()
{
    level = new Level(levelId, levelInfo);

    level->start();
}

void Widget::updateScore()
{

    delete level;

}


Widget::~Widget()
{
    delete levelInfo;
    delete score;

}

