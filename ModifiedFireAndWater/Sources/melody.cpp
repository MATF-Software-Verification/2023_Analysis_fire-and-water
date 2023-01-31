#include "Headers/melody.h"

#ifndef MODIFIED_H
#include <QtMultimedia/QSoundEffect>

Melody::Melody(bool isMelodyOn)
{
    this->melodyOn = isMelodyOn;
    mediaPlayer = new QSoundEffect();
    mediaPlayer->setSource(QUrl::fromLocalFile(":/Sound/backgroundMelody.wav"));
    mediaPlayer->setVolume(50);

    if(melodyOn){
        mediaPlayer->play();
    }
}

void Melody::stopMusic()
{
    if(melodyOn)
        mediaPlayer->stop();

}
Melody::~Melody()
{
    delete mediaPlayer;
}


#else
Melody::Melody(bool isMelodyOn)
{
}

void Melody::stopMusic()
{

}
Melody::~Melody()
{
}
#endif

