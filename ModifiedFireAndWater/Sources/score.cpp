#include "Headers/score.h"
#include "Headers/levelinfo.h"
#include "Headers/message.h"

#include <iostream>

#ifndef MODIFIED_H
#include <QLabel>
#include <QPushButton>
#endif

Score::Score(LevelInfo *levelInfo)
{
    scores.resize(3, 0);
    unlocked.resize(3, false);
    unlocked[0] = true;
    level_time.resize(3, 0);
    current_score = 0;
    lives = 3;
    this->level_info = levelInfo;
    this->msg = new Message();
}

void Score::increase()
{
    current_score ++;
}

void Score::takeLife()
{
    this->lives--;
    std::cout<<"Zivot:"<<lives<<std::endl;
    current_score = 0;
}

int Score::getLives()
{
    return this->lives;
}

std::vector<int> Score::getScores()
{
    return this->scores;
}

#ifndef MODIFIED_H
void Score::setScoreLabels(QVector<QLabel *> labels)
{
    this->scoreLabels = labels;
}

void Score::setLevelButtons(QVector<QPushButton *> buttons)
{
    this->buttons = buttons;

    for(int i = 0; i < 3; i++){
        updateLevelButton(i+1, false);
    }
    updateLevelButton(1, true);
}

void Score::updateLabels(int levelId)
{
    QString str = "";
    QLabel* label = scoreLabels[levelId - 1];

    if (levelId == 1){
        label->setStyleSheet("border-image: url(:/img/Images/unlocked.png);");
    }else{
        label->setStyleSheet("border-image: url(:/img/Images/locked_grey.png);");
    }
    label->setText(str);
}

void Score::updateLevelButton(int levelId, bool enabled)
{
    buttons[levelId-1]->setEnabled(enabled);
    if(enabled){
        buttons[levelId - 1]->setStyleSheet("border-image: url(:/img/Images/transparent.png); color: #feff41");
    }
    else{
        buttons[levelId - 1]->setStyleSheet("border-image: url(:/img/Images/transparent.png); color:rgb(245, 194, 17)");
    }
}
#endif

void Score::reset()
{

    for(int i = 0; i < 3; i++){
        scores[i] = 0;
        unlocked[i] = false;
        level_time[i] = 0;
#ifndef MODIFIED_H
        updateLabels(i+1);
        updateLevelButton(i+1, false);
#endif

    }

    unlocked[0] = true;
#ifndef MODIFIED_H
    updateLevelButton(1, true);
#endif
    current_score = 0;
    lives = 3;
}

int Score::countLevelScore(int remainingTime)
{
    if(current_score > 0 && remainingTime > 0){
        return current_score * remainingTime;
    }
    return 0;
}

bool Score::isUnlocked(int levelId)
{
    return unlocked[levelId - 1];
}

#ifndef MODIFIED_H
void Score::updateScoreLabel(int levelId)
{
    QString str = "";
    QLabel* label = scoreLabels[levelId - 1];

    if(isUnlocked(levelId) && scores[levelId - 1] > 0){
        str = QString::number(scores[levelId - 1]);

    }
    if(levelId < 3 && isUnlocked(levelId + 1) && scores[levelId] == 0){
        QLabel *next_label = scoreLabels[levelId];
        next_label->setStyleSheet("border-image: url(:/img/Images/unlocked.png);");
    }
    label->setText(str);
    label->setAlignment(Qt::AlignCenter);
}

#endif

bool Score::isSuccessful()
{

    for(int i = 0; i < 3; i++){
        if(scores[i] == 0)
            return false;
    }

    return true;
}

void Score::saveCurrentScore(int levelId,int remainingTime)
{
    if(levelId < 1 || levelId > 3)
            throw "Invalid id";

    current_score = countLevelScore(remainingTime / 1000);
    if(current_score > scores[levelId - 1]){
        this->scores[levelId - 1] = this->current_score;
        this->level_time[levelId - 1] = remainingTime;
        if(levelId < 3){
            unlocked[levelId] = true;
#ifndef MODIFIED_H
            updateLevelButton(levelId+1, true);
#endif
        }
    }

        current_score = 0;
#ifndef MODIFIED_H
        updateScoreLabel(levelId);
#endif

}

Score::~Score()
{
}

