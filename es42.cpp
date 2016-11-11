//DA LIO GIOVANNI 4^C 11/11/2016
//ESERCIZIO 42
 #include<iostream>
 #include<string.h>
 using namespace std;

 string descrizione;
 float prezzo;
 float incremento;
 float percentuale;
 float prezzo_incrementato;
 int r;

 void pippuzzo(float prezzo, float percentuale){
 incremento=(prezzo*percentuale)/100;
 prezzo_incrementato=prezzo+incremento;
 }

 int main(){
cout<<"ESERCIZIO 42"<<'\n';
cout<<"Inserisci la percentuale da incrementare: ";
cin>>percentuale;
while(r==0){
cout<<"Inserisci la descrizione del prodotto: ";
cin>>descrizione;
cout<<"Inserisci il prezzo del prodotto: ";
cin>>prezzo;
pippuzzo(prezzo, percentuale);
cout<<"Il prezzo incrementato del prodotto: "<<descrizione<<" e' di: "<<prezzo_incrementato<<" Euro"<<'\n';
cout<<"Ci sono altri prodotti?(si=0, no=1)";
cin>>r;
}
return 0;}
