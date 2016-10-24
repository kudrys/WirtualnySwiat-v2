#ifndef QUEUE_H
#define QUEUE_H
#include "Organizm.h"
#include <iostream>

class Queue
{
public:
    Queue();
    virtual ~Queue();
    Organizm * first;
    Organizm * aktualny;
    void next();
    void reset(){
        aktualny=first;
    }
    void addNode(Organizm *);
    void deleteNode(Organizm *);
    Organizm * getNode(){
        return aktualny;
    }
    void wypisz();
protected:
private:
};

#endif // QUEUE_H