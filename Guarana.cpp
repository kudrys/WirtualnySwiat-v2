#include "Guarana.h"

Guarana::Guarana()
{
    label = 'G';
    sila = 0;
    szansa = 40;
}

Guarana::~Guarana()
{
    //dtor
}

int Guarana::kolizja(Organizm * attacking)
{
    //Zwi�ksza si�� zwierz�cia, kt�re zjad�o t� ro�lin�, o 3.
    attacking->increaseSila(3);
    return whoDied(attacking);
}