#include "Telewizor.h"

bool Telewizor::getStan()
{
    return wlaczony;
}

void Telewizor::zmienKanal(int a)
{
    kanal = a;
}

int Telewizor::getKanal()
{
    return kanal;
}

void Telewizor::wylacz()
{
    wlaczony = false;
}

void Telewizor::wlacz()
{
    wlaczony = true;
}
