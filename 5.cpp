#include<iostream>
#include<string.h>
using namespace std;
//orologio
int o, m , s;
char scelta;
/*----------------------------------*/
class Orologio{
  public:
int ore;
int minuti;
int secondi;
  public:
Orologio(int ore, int minuti, int secondi);
void azzera();
void correggi();
void leggi();
};
/*--------------------------------*/

int main(){
cout<<"Inserisci l'ora:";
cin>>o;
cout<<" Inserisci i minuti: ";
cin>>m;
cout<<"Inserisci i secondi:";
cin>>s;

Orologio reogio(o , m , s);

do{
    cout<<"[a]-->Azzera ora"<<endl;
    cout<<"[c]-->Correggi ora"<<endl;
    cout<<"[l]-->Leggi ora"<<endl;
    cout<<"[s]-->Stop programma"<<endl;

    switch(scelta){
    case 'a': reogio.azzera(); break;
    case 'c': reogio.correggi(); break;


    }
}


while(scelta != 's')


}






Orologio::Orologio(int o, int m, int s){
    ore = o;
    minuti = m;
    secondi = s;
}

void Orologio::azzera(){
ore=0;
minuti=0;
secondi=0;
}

void Orologio::correggi(){
cin>>o;
cin>>m;
cin>>s;
ore= o;
minuti = m;
secondi = s;
}

void Orologio::leggi(){
cout<<ore << " h  " << minuti << " m  " << secondi << " s  "<<endl;
}
