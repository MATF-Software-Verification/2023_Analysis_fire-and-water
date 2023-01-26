#include "Headers/levelBar.h"
#include "Headers/score.h"

extern Score *score;

LevelBar::LevelBar(QGraphicsView *view)
{

    this->view = view;

    lifePixmap = QPixmap(":/img/Images/life.png").scaled(40, 40);
    for(int i = 0; i < score -> getLives(); i++){
        lifeLabels.append(new QLabel(view));
        lifeLabels[i]->setGeometry(20 + (i * 45), 20, 40, 40);
        lifeLabels[i]->setPixmap(lifePixmap);
        lifeLabels[i]->show();
    }
}

void LevelBar::updateInformation()
{
   if(score->getLives() != lifeLabels.size()){
        lifeLabels.clear();
        for(int i = 0; i < score -> getLives(); i++){
            lifeLabels.append(new QLabel(view));
            lifeLabels[i]->setGeometry(10 + (i * 45), 10, 50, 50);
            lifeLabels[i]->setPixmap(lifePixmap);
            lifeLabels[i]->show();
        }
    }

}

LevelBar::~LevelBar()
{

}
