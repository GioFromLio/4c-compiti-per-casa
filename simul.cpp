#include <iostream>
#include <time.h>
using namespace std;

class Cronometro{
private:
    time_t inizio;
    time_t fine;
    bool started;
    time_t parziale[10];

public:
    void start();
    void stop();
    void print();
    void tempo_parziale();
    Cronometro();
};


int n=0, i=0;


int main(){
    char scelta;
    Cronometro cronometro;
    do {
        cout << "[i] fai partire il cronometro." << endl;
        cout << "[f] ferma il cronometro." << endl;
        cout << "[m] prendi il tempo parziale." << endl;
        cout << "[p] mostra il tempo." << endl;
        cout << "[x] termina." << endl;
        cin >> scelta ;
        switch(scelta) {
            case 'i': cronometro.start(); break;
            case 'f': cronometro.stop(); break;
            case 'p': cronometro.print(); break;
            case 'm': cronometro.tempo_parziale(); break;
            default: cout << "Opzione non valida" << endl;
        }
    }while(scelta != 'x');
}

Cronometro::Cronometro(){
    inizio = 0;
	fine= 0;
	started= false;
}

void Cronometro::start(){
	if(started==false){
	inizio= time(0);

	started= true;
}

}

void Cronometro::stop(){
	if(started==true){
	fine= time(0);
	started= false;
}
}
void Cronometro::print(){
	time_t t;
	fine = time(0);
	t = fine-inizio;
	cout<<"Sono trascorsi in secondi :" << t <<endl;
	cout<<"E i parziali sono:"<<endl;
	 while(i<n){
        int am= i+1;
        cout <<"Parziale" << am <<" " << parziale[am] - parziale[i]<< " sec" << endl;
        i++;
	 }


}

void Cronometro::tempo_parziale(){
    if(started == true){
            if(n<10){
            parziale[n] = time(0);
            n++;}
            else{cout<<"Max 10 tempi"<<endl;

            }

    }

}
