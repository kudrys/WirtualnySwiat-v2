#ifndef CIERN_H
#define CIERN_H
#include "Roslina.h"

class Ciern:public Roslina
{
public:
    Ciern();
    virtual ~Ciern();
protected:

private:
    void kolizja();
};

#endif // CIERN_H