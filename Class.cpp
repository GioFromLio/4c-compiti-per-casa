#include <iostream>
#include<string.h>
using namespace std;
//ESERCIZIO PER CASA

// Questo programma contiene concetti del libro che vanno da pagina
// 132 a 140

class Data{
public:
   int giorno;
   string mese;
   int anno;
};

class Studente {
  private:
    unsigned int id;
    float altezza = 1.78;
    Data d;
    // questo attributo ha come tipo la classe Data, che va definita sopra
  public:

    string nome;
    string cognome;
    int anno_di_corso;
    char sezione;
    string crea_progetto(string traccia);
    void stampa_altezza();
    void set_nome(string n);
    void set_cognome(string c);
    void set_nascita();
};

int main () {
  Studente s;
  Data d;
  s.set_nome("Gino");
  s.set_cognome("Strada");
  // inserire il codice che assegna una data di nascita
  d.giorno=12;
  d.mese="Maggio";
  d.anno= 1999;
  // allo studente s
  cout << "Nome: " << s.nome << endl;
  cout << "Cognome: " << s.cognome << endl;
  s.stampa_altezza();
  // inserire il codice che stampa la data di nascita
  s.set_nascita();
  // dello studente s
  cout << "Svolgimento: " << s.crea_progetto("velocità della luce") << endl;
  return 0;
}

string Studente::crea_progetto(string traccia){
    return "Ho cercato in Internet riguardo a " + traccia;
}

void Studente::stampa_altezza(){
    cout << "Altezza: " << altezza << endl;
}

void Studente::set_nome(string n){
    nome = n;
}

void Studente::set_cognome(string c){
    cognome = c;
}

void Studente::set_nascita(){
cout<<"Giorno:"<<d.giorno<< endl;
cout<<"Mese:" << d.mese<< endl;
cout<<"Anno:" << d.anno<< endl;
}
