#include <iostream>
#include "Swiat.h"
using namespace std;

void test(){

    Swiat nowy(5,5);
    //nowy.losowanieXY();
    nowy.wsadzZwierzakaDoSwiata(1,'W');
    nowy.wsadzZwierzakaDoSwiata(6,'L');
    nowy.wsadzZwierzakaDoSwiata(11,'T');
    nowy.wsadzZwierzakaDoSwiata(16,'Z');
    nowy.wsadzZwierzakaDoSwiata(7,'L');
    nowy.wsadzZwierzakaDoSwiata(12,'C');
    cout<<endl;
    //nowy.tura(nowy.organizmyTab[2][1]);   //do organizmyTab trzeba podawac odwrotnie X i Y
    cout<<endl<<"----WYNIK---"<<endl;
    nowy.rysujSwiat();
    nowy.kolejka.wypisz();
    for(int i=0;i<10;i++){
        nowy.runda();cout << "---------------\n\n";
        nowy.kolejka.wypisz();
        //nowy.rysujSwiat();
    }
}

int main(){

    test();
//    cout<<"RYSZARD KUDUK 143271\n";
//    int x,y;
//    cout<<"podaj x:";
//    cin>>x;
//    cout<<"podaj y:";
//    cin>>y;
//
//    Swiat nowy(x,y);
//    nowy.losowanieXY();
//    cout<<endl;
//    nowy.kolejka.wypisz();
//    while(1){
//        nowy.runda();
//    }
}