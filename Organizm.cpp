#include "Organizm.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
using namespace std;

Organizm::Organizm(){
    szansa = 100;
    next = 0;
    active = false;
}
Organizm::~Organizm(){
}

/**
* flag 1 - organizm to roslina
* flag 2 - napotkany to NULL
* flag 3 - te same organizmy, rozmnazanie
* flag 4 - kolizja
*/
int Organizm::akcja(Organizm * napotkany){
    if(szansaNaSukces()){
        if(this->OrganizmMark=='R'){
            return 1;  //roslina
        }
        if(napotkany==0){
            return 2;  //wolne pole-poruszenie
        }
        if(this->label==napotkany->getLabel()){
            return 3;  //rozmnarzanie
        }
        return 4;  //kolizja
    }
}

bool Organizm::szansaNaSukces(){
    srand( time( 0 ));
    int r = rand()%100 +1;
    return (r<=szansa);
}


int Organizm::kolizja(Organizm * attacking){
    return whoDied(attacking);
}

/**
 *  2 - def zyje (10)
 *  1 - att zyje (01)
 *  3 - obydwoje zyja (11)
 */
int Organizm::whoDied(Organizm * attacking){
    int defAlive = 1;
    int attAlive = 1;
    if (this->sila <= attacking->sila){
        defAlive = 0;
    }else{
        attAlive = 0;
    }
    return defAlive*2+attAlive;
}

void Organizm::rozmnazanie(){

}
void Organizm::przypiszXY(int x, int y){
    this->x=x;
    this->y=y;
}
int Organizm::getX(){
    return x;
}
int Organizm::getY(){
    return y;
}
int Organizm::getSila(){
    return sila;
}
void Organizm::increaseSila(int v){
    this->sila = this->sila+v;
}
int Organizm::getInicjatywa(){
    return inicjatywa;
}
int Organizm::getSzansa(){
    return szansa;
}
char Organizm::getLabel(){
    return label;
}
char Organizm::getOrganizmMark(){
    return OrganizmMark;
}

bool Organizm::getActive(){
    return active;
}
void Organizm::deactivate(){
    active = false;
}
void Organizm::activate(){
    active = true;
}