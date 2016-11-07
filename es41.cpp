// DA LIO GIOVANNI IV C 7/11/2016

#include <iostream>
#include <string.h>
using namespace std;

 string nome;
 float daily_money;
 float tot_money=0;
 int i=0;
 float medium_money;
 int n;

 void acquisizione(float daily_money){
     tot_money=tot_money+daily_money;
      i++;}

 void media(float tot_money){
      medium_money= tot_money/i;}


 int main(){
//CICLO DI ACQUISIZIONE DATI E SOMMA GIORNALIERA TOTALE
 while(n<1){
    cout<<"Inserisci il nome del reparto:";
    cin>>nome;
    cout<<"Inserisci il guadagno giornaliero:";
    cin>>daily_money;
    acquisizione(daily_money);
    cout<<"Ci sono altri reparti?(si=0; no=1)";
    cin>>n;}
 cout<<"L'incasso totale giornaliero fra tutti i reparti ammonta a: "<<tot_money<<" Euro"<<'\n';

//MEDIA GIORNALIERA INCASSI
media(tot_money);
cout<<"La media incassi giornaliera totale ammonta a : "<<medium_money<<" Euro"<<'\n';
 return 0;}
