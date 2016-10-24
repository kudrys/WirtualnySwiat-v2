#ifndef LEW_H
#define LEW_H
#include "Zwierze.h"

class Lew: public Zwierze
{
public:
    Lew();
    virtual ~Lew();
protected:

private:
    int kolizja(Organizm *);
};

#endif // LEW_H