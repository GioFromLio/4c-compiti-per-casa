#include<iostream>
#define N_SCUOLE 5
#define N_STUDENTI 10
using namespace std;

class Scuola{
public:
    unsigned int id;
    string denominazione;
    unsigned int num_studenti;
    studente studenti[N_STUDENTI];
    public:
        Scuola(string nome_scuola);
        Scuola(string nome_scuola, unsigned int id_scuola);
    };

class Studente{
 public:
     string nome;
     string cognome;
     unsigned int id_scuola;
 public:
     Studente (string nome, string cognome, unsigned int id_scuola)
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
    char scelta = 's';

while (scelta == 's'){
    string nome_studente;
    cout<<"Inserisci il nome dello studente: " << endl;
    cin>>nome_studente;
    string cognome_studente;
    cout<<"Inserisci il cognome dello studente: " << endl;
    cin>>cognome_studente;
    Studente stud(nome_studente, nome_studente, i );
    cout<<"Vuoi continuare?(s/n): " << endl;
    cin>> scelta;
}
}
string nome_scuola;
cout << "Di quale scuola vuoi l'elenco studenti?" << endl;
cin>>id;
Outstud;




return 0;
}

Scuola(string nome_scuola, unsigned int id_scuola){
denominazione = nome_scuola;
id=id_scuola;}


void Outstud(){
if(Scuola.id==Studente.id_sccuola)
    {
        cout<<"Lo studente appartiene a quella scuola" << endl;
    }
}else{}


Scuola::Scuola(string nome_scuola){
denominazione= nome_scuola;}
