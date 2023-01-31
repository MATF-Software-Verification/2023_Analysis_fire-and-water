#ifndef SCORE_H
#define SCORE_H

#include "Headers/levelinfo.h"
#include "Headers/message.h"
#include <vector>

#include "Sources/modifiedProject.hpp"

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
#ifndef MODIFIED_H
        void setLevelButtons(QVector<QPushButton *> buttons);
        void setScoreLabels(QVector<QLabel *> labels);
#endif
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
#ifndef MODIFIED_H
        QVector<QLabel*> scoreLabels;
        QVector<QPushButton*> buttons;
#endif
};

#endif // SCORE_H
