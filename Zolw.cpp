#include "Zolw.h"

Zolw::Zolw(){
    sila = 2;
    inicjatywa = 1;
    label = 'Z';
    szansa = 75;
}

Zolw::~Zolw(){
    //dtor
}

int Zolw::kolizja(Organizm * attacking)
{
//Odpiera ataki zwierz�t o sile <5. Napastnik musi wr�ci� na swoje poprzednie pole
    if(attacking->getSila()<5)
        return 3;
    else
        return whoDied(attacking);
}