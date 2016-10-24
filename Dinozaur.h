#ifndef DINOZAUR_H
#define DINOZAUR_H
#include "Zwierze.h"

class Dinozaur:public Zwierze
{
public:
    Dinozaur();
    virtual ~Dinozaur();
protected:

private:
    int kolizja(Organizm *);
};

#endif // DINOZAUR_H