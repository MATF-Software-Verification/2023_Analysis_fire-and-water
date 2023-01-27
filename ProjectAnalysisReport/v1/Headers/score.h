#ifndef SCORE_H
#define SCORE_H

#include "levelinfo.h"
#include "message.h"
#include <vector>

class Score
{
    public:

        Score(LevelInfo *levelInfo);
        void takeLife();
        void increase();
        int getLives();
        void updateLabels(int levelId);
        void updateLevelButton(int levelId, bool enabled);
        void reset();
        void saveCurrentScore(int levelId, int remainingTime);
        //void setLevelButtons(QVector<QPushButton *> buttons);
        //void setScoreLabels(QVector<QLabel *> labels);
        int countLevelScore(int remainingTime);
        void updateScoreLabel(int levelId);
        bool isUnlocked(int levelId);
        bool isSuccessful();
        std::vector<int> getScores();
        int current_score;
        Message *msg;

        ~Score();

    private:
        int lives;
        std::vector<bool> unlocked;
        std::vector<int> level_time;
        std::vector<int> scores;
        LevelInfo *level_info;
        //QVector<QLabel*> scoreLabels;
        //QVector<QPushButton*> buttons;
};

#endif // SCORE_H
