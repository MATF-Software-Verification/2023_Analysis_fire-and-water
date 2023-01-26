#include "Headers/widget.h"
#include "Headers/score.h"
#include "ui_widget.h"
#include "Headers/level.h"
#include "Headers/settings.h"

#include <QCheckBox>

Level *level;
Score *score;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , settings(new Settings)
{
    ui->setupUi(this);

    ui->melodyBtn->setChecked(true);

    ui->stackedWidget->setCurrentIndex(2);

    levelInfo = new LevelInfo(settings);

    score = new Score(levelInfo);

    QVector<QLabel*> labels;
    labels.append(ui->Score1);
    labels.append(ui->Score2);
    labels.append(ui->Score3);


    QVector<QPushButton*> buttons;
    buttons.append(ui->level1Btn);
    buttons.append(ui->level2Btn);
    buttons.append(ui->level3Btn);


    score->setScoreLabels(labels);
    score->setLevelButtons(buttons);

    QObject::connect(ui->level1Btn, SIGNAL(clicked()), this, SLOT(createLevel()));
    QObject::connect(ui->level2Btn, SIGNAL(clicked()), this, SLOT(createLevel()));
    QObject::connect(ui->level3Btn, SIGNAL(clicked()), this, SLOT(createLevel()));


    connect(ui->playBtn,&QPushButton::clicked,this,&Widget::onPlayBtn,Qt::QueuedConnection);
    connect(ui->highScoresBtn,&QPushButton::clicked,this,&Widget::onHighScoresBtn,Qt::QueuedConnection);
    connect(ui->backBtn, &QPushButton::clicked, this, &Widget::onBackBtn,Qt::QueuedConnection);
    connect(ui->settingsBtn, &QPushButton::clicked, this, &Widget::onSettingsBtn,Qt::QueuedConnection);
    connect(ui->quitBtn, &QPushButton::clicked, this, &Widget::onQuitBtn,Qt::QueuedConnection);
    connect(ui->settingsBackBtn, &QPushButton::clicked, this, &Widget::onBackBtn,Qt::QueuedConnection);
    connect(ui->backBtn1, &QPushButton::clicked, this, &::Widget::onBackBtn,Qt::QueuedConnection);


}


void Widget::onPlayBtn()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Widget::onHighScoresBtn()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Widget::onSettingsBtn()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void Widget::onQuitBtn()
{
    this->close();
}

void Widget::onBackBtn()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Widget::createLevel()
{
    int levelId = sender()->objectName().toStdString()[5] - '0';
    level = new Level(levelId, levelInfo);

    QObject::connect(level, SIGNAL(endLevel()), this, SLOT(updateScore()));
    level->start();
}


void Widget::updateScore()
{

    delete level;

    if(score->isSuccessful()){
        ui->backBtn1->setText("Success");
    }
    if(score->getLives() == 0){
        score->reset();
        score->msg->setMessageText(MessageText::NoMoreLives);
        ui->stackedWidget->setCurrentIndex(2);
    }
}


void Widget::on_melodyBtn_stateChanged(int arg2)
{
        settings->setMelody(arg2);
}

Widget::~Widget()
{
    delete ui;
    delete levelInfo;
    delete score;

}

