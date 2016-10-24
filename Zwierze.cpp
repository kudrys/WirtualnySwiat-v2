#include "Zwierze.h"


Zwierze::Zwierze(){
    OrganizmMark ='Z';
}

Zwierze::~Zwierze(){
    //dtor
}

int Zwierze::atak(Organizm * napotkany)
{
    bool isAlive;
    if(napotkany->getLabel()==this->label){
        rozmnazanie();
        isAlive=1;
    }else{
        return napotkany->kolizja(this);
    }
    return isAlive;
}