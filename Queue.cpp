#include "Queue.h"

Queue::Queue(){
    first = 0;
}

Queue::~Queue(){
    //dtor
}
void Queue::next(){
    aktualny=aktualny->next;
}

void Queue::addNode(Organizm * wsadzany){
    Organizm * temp = first;
    if(!temp ||wsadzany->getInicjatywa()>first->getInicjatywa()){
        wsadzany->next = first;
        first=wsadzany;
    }else{
        while(temp){
            if(temp->next){
                if(wsadzany->getInicjatywa()>temp->next->getInicjatywa()){
                    wsadzany->next = temp->next;
                    temp->next = wsadzany;
                    return;
                }
                temp = temp->next;
            }else{
                temp->next= wsadzany;
                return;
            }
        }
    }
}

void Queue::wypisz(){
    Organizm * temp = first;
    while(temp){
        std::cout <<temp->getLabel() << " ";
        temp=temp->next;
    }
    std::cout << "\n";
}

void Queue::deleteNode(Organizm * nodeToDelete){
    Organizm * temp = first;
    if (temp==nodeToDelete){
        first=0;
        return;
    }

    while(temp->next && temp->next!=nodeToDelete)
        temp=temp->next;
    if(temp->next){
        temp->next=temp->next->next;
        nodeToDelete->next=0;
        delete nodeToDelete;std::cout<<"\ndeleted\n";
    }

}

