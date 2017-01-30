#include<iostream>
#define N_SCUOLE 5
#define N_STUDENTI 10
using namespace std;

class Scuola{
public:
    unsigned int id;
    string denominazione;
    unsigned int num_studenti;
    Studente studenti[N_STUDENTI];
    public:
        Scuola(string nome_scuola);
        Scuola(string nome_scuola, unsigned int id_scuola);
        void stampa_elenco();
    };

class Studente{
 public:
     string nome;
     string cognome;
     unsigned int id_scuola;
 public:
     Studente (string nome, string cognome, unsigned int id_scuola);
};

 int k=0;
 char facc= 2;

int main(){

Scuola scuole[N_SCUOLE];

for (int i = 0; i<N_SCUOLE; i++){
    string nome_scuola;
    cout<<"Inserisci il nome della scuola: " << endl;
    cin>> nome_scuola;
    Scuola s(nome_scuola);
    scuole[i] = s;
    s.id= i;
    char scelta = 's';
    int j= 0;

while (scelta == 's'){
    string nome_studente;
    cout<<"Inserisci il nome dello studente: " << endl;
    cin>>nome_studente;
    string cognome_studente;
    cout<<"Inserisci il cognome dello studente: " << endl;
    cin>>cognome_studente;
    Studente stud(nome_studente, nome_studente, i );
    s.studente[] = stud ;
    cout<<"Vuoi continuare?(s/n): " << endl;
    cin>> scelta;
    j++;
}
}

unsigned int id;
string nome_scuola;
cout << "Di quale scuola vuoi l'elenco studenti?" << endl;
cin>>id;
outstud(id, scuole);


return 0;
}




void outstud( unsigned int id, Scuola scuole[N_SCUOLE]){
    scuole[id].stampa_elenco();
}

void Scuola::stampa_elenco(Studente studenti[N_STUDENTI], int k){

    while (k<N_STUDENTI){
cout << "STUDENTE " << k<< ":" << endl;
cout << "Nome:" << studenti[k].nome << endl;
cout << "Cognome:" << studenti[k].cognome << endl;
k++;
cout << "----" << facc << "----" << facc << "----" << facc << "----" << facc << "----" << endl;
    }
}




Scuola::Scuola(string nome_scuola, unsigned int id_scuola){
denominazione = nome_scuola;
id=id_scuola;}

Scuola::Scuola(string nome_scuola){
denominazione= nome_scuola;}
