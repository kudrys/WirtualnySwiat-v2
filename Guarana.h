#ifndef GUARANA_H
#define GUARANA_H
#include "Roslina.h"

class Guarana:public Roslina
{
public:
    Guarana();
    virtual ~Guarana();
protected:

private:
    int kolizja(Organizm *);
};

#endif // GUARANA_H