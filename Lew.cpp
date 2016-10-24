#include "Lew.h"

Lew::Lew()
{
    label = 'L';
    sila = 11;
    inicjatywa = 7;
}

Lew::~Lew()
{
    //dtor
}

int Lew::kolizja(Organizm * attacking)
{
//Kr�l zwierz�t: �adne zwierz� o sile < 5 nie o�mieli si� wej�� na pole zajmowane przez lwa

    if(attacking->getSila()<5)
        return 3;
    else
        return whoDied(attacking);
}