#include<iostream>
#define N_SCUOLE 5

using namespace std;

class Scuola{
public:
    unsigned int id;
    string denominazione;
    public:
        Scuola(string nome_scuola);
        Scuola(string nome_scuola, unsigned int id);
    };

class Studente{
 public:
     string nome;
     string cognome;
     unsigned int id_scuola;
 public:
};


int main(){

Scuola scuole[N_SCUOLE];

for (int i = 0; i<N_SCUOLE; i++){
    string nome_scuola;
    cout<<"Inserisci il nome della scuola: " << endl;
    cin>> nome_scuola;
    Scuola s(nome_scuola);
    scuole[i] = s;
    s.id= i;

}
return 0;
}

Scuola(string nome_scuola, unsigned int id){
denominazione = nome_scuola;
id=id_scuola;}




Scuola::Scuola(string nome_scuola){
denominazione= nome_scuola;}
