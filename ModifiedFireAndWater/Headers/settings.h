#ifndef SETTINGS_H
#define SETTINGS_H

#include "Sources/modifiedProject.hpp"

class Settings
{
    public:
        Settings();

        void setMelody(int value);
        bool getMelody();
        ~Settings();

    private:
        int _sound;
        int _melody;
};

#endif // SETTINGS_H
