#ifndef SETTINGS_H
#define SETTINGS_H

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
