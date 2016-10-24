#ifndef ZOLW_H
#define ZOLW_H
#include "Zwierze.h"


class Zolw:public Zwierze
{
public:
    Zolw();
    virtual ~Zolw();
protected:

private:
    int kolizja(Organizm *);
};

#endif // ZOLW_H