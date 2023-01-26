#ifndef MELODY_H
#define MELODY_H

#include <QtMultimedia/QSoundEffect>

class Melody
{
    public:
        Melody(bool isSoundOn);
        QSoundEffect *mediaPlayer;
        void stopMusic();
        ~Melody();

    private:
        bool melodyOn;
};


#endif // MELODY_H
