#ifndef SWIAT_H
#define SWIAT_H
#include "Organizm.h"
#include "Queue.h"
class Swiat
{
public:
    Swiat(int, int);
    virtual ~Swiat();
    //getters
    int getXfromValue(int);
    int getYfromValue(int);
    int getSzeroskosc();
    int getWysokosc();
    //methods
    Queue kolejka;
    void losowanieXY();
    Organizm * first;
    void rysujSwiat();
    void wsadzZwierzakaDoSwiata(int, char);
    void usunZwierzakaZListy();
    void poruszenie(char, int, int);
    int wylosujWolnePole(int,int);
    int wylosujPole(int,int,bool);
    int wylosujPoleDoOkola(int, int);
    int tura(Organizm*);
    char coToZaKierunek(int,int,int,int);
    void runda();
    void usunZwierzaka(int, int);
    Organizm *** organizmyTab;
protected:
    int wysokosc;   //y
    int szerokosc;  //x
    //wskaznik na wskaznik (tablica tablic)
private:
};

#endif // SWIAT_H