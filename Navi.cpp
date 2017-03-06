#include <iostream>
#include <stdlib.h>
#include <ctime>
int MOSSA_A, MOSSA_B;
enum Esito {IN_CORSO, VITT_COMP, VITT_GIOC};

/*
A video si vedono due griglie 10x10:
- la gliglia del giocatore contiene mostra le navi piazzate
- la griglia del computer contiene le navi ma non le mostra. A video si vedrà
Ciascuna griglia contiene lo stesso numero di navi.
*/


enum enumerazione {A=1,B,C,D,E,F,G,H,I,J};
enumerazione t;

class Gioco{
public:


int matrice_1 [10] [10];
int matrice_2 [10 ] [10]
/*--------------------------------*/
void messaggioIniziale();
void disegna();
void inputUtente();
void mossaPC();//v//
void messaggioFinale();
bool controllaEsito();
};

int main() {
    Gioco gioco;
    bool esci = false;

    gioco.messaggioIniziale();
    while (!esci){
       gioco.disegna();
       gioco.inputUtente();
       gioco.mossaPC();
       esci = (gioco.controllaEsito() != IN_CORSO);
    }
    gioco.messaggioFinale();
    return 0;
}


void Gioco::disegna(){};



void Gioco::inputUtente(){
cout<<"Inserisci la riga: "<< \t ;
cin>> ;
cout<<"inserisci la colonna: "<< \t ;
cin>> ;
};


void Gioco::mossaPC(){

     srand((unsigned)time(NULL));
     MOSSA_A = rand() % 10 + 1;

     srand((unsigned)time(NULL));
     MOSSA_B = rand() % 10 + 1;

};


void Gioco::messaggioFinale(){
if()


};
