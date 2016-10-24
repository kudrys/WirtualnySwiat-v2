#ifndef OWCA_H
#define OWCA_H
#include "Zwierze.h"

class Owca:public Zwierze
{
public:
    Owca();
    virtual ~Owca();
protected:

private:

    void kolizja();
};

#endif // OWCA_H