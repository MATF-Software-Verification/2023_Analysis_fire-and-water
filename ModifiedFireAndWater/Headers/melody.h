#ifndef MELODY_H
#define MELODY_H

#include "Sources/modifiedProject.hpp"

#ifndef MODIFIED_H
#include <QtMultimedia/QSoundEffect>
#endif
class Melody
{
    public:
        Melody(bool isSoundOn);
#ifndef MODIFIED_H
        QSoundEffect *mediaPlayer;
#endif
        void stopMusic();
        ~Melody();

    private:
        bool melodyOn;
};


#endif // MELODY_H
