#include <iostream>
#include "Swiat.h"
using namespace std;

void test(){

    Swiat nowy(5,1);
    //nowy.losowanieXY();

    nowy.wsadzZwierzakaDoSwiata(0,'D');
    nowy.wsadzZwierzakaDoSwiata(1,'L');
    nowy.wsadzZwierzakaDoSwiata(2,'W');
    nowy.wsadzZwierzakaDoSwiata(3,'O');
    nowy.wsadzZwierzakaDoSwiata(4,'Z');
    //nowy.wsadzZwierzakaDoSwiata(6,'L');
    cout<<endl;
    //nowy.tura(nowy.organizmyTab[2][1]);   //do organizmyTab trzeba podawac odwrotnie X i Y
    cout<<endl<<"----WYNIK---"<<endl;
    nowy.rysujSwiat();
    nowy.kolejka.wypisz();
    nowy.kolejka.aktualny = nowy.kolejka.first;
    for(int i=0;i<10;i++){
        nowy.runda();cout << "---------------\n\n";
        nowy.kolejka.wypisz();
        nowy.rysujSwiat();
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