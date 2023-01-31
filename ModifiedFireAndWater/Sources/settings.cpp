#include "Headers/settings.h"

Settings::Settings()
{
    _melody = true;
}

void Settings::setMelody(int isMelodyOn)
{
    if(!isMelodyOn)
        _melody = false;
    else
        _melody = true;
}

bool Settings::getMelody()
{
    return _melody;
}

Settings::~Settings(){}

