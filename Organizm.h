#ifndef ORGANIZM_H
#define ORGANIZM_H
//#include "Swiat.h"

/**
 * base classs
 */
class Organizm
{
public:
    Organizm();
    virtual ~Organizm();
    Organizm * next;

    //getters
    int getX();
    int getY();
    int getSila();
    int getInicjatywa();
    int getSzansa();
    bool getActive();
    char getOrganizmMark();
    char getLabel();
    //methods
    void przypiszXY(int, int);
    void activate();
    void deactivate();
    int akcja(Organizm *);
    int kolizja(Organizm *);
    int whoDied(Organizm *);
    void rozmnazanie();
    void increaseSila(int);
    bool szansaNaSukces();
protected:
    bool active;
    char label;
    char OrganizmMark;
    int x;
    int y;
    int sila;
    int inicjatywa;
    int szansa;
private:


};

#endif // ORGANIZM_H