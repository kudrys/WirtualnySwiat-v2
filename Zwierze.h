#ifndef ZWIERZE_H
#define ZWIERZE_H
#include "Organizm.h"

class Zwierze:public Organizm
{
public:
    Zwierze();
    virtual ~Zwierze();
    int atak(Organizm *);
protected:
private:
};

#endif // ZWIERZE_H