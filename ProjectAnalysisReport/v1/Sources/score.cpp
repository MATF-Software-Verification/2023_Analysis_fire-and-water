#include "../Headers/score.h"
#include "../Headers/levelinfo.h"
#include "../Headers/message.h"

#include <iostream>

//#include <QLabel>
//#include<iostream>
//#include <QPushButton>

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
    //std::cout << current_score << std::endl;
    current_score ++;
    //std::cout <<"Skor:"<< current_score << std::endl;
}

void Score::takeLife()
{
    this->lives--;
    std::cout<<"Zivot:"<<lives<<std::endl;
//    if(lives == 0)
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

void Score::reset()
{

    for(int i = 0; i < 3; i++){
        scores[i] = 0;
        unlocked[i] = false;
        level_time[i] = 0;
        //updateLabels(i+1);
        //updateLevelButton(i+1, false);

    }

    unlocked[0] = true;
    //updateLevelButton(1, true);
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
            //updateLevelButton(levelId+1, true);
        }
    }

        current_score = 0;
        //updateScoreLabel(levelId);

}

Score::~Score()
{

}

