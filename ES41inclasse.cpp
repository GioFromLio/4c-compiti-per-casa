// DA LIO GIOVANNI IV C 7/11/2016

#include <iostream>
#include <string.h>
 using namespace std;
 string nome;
 float incasso_giornaliero;
 int somma_incassi=0;

 int n=0;
 char risposta;

 void acquisizione_somma(char risposta, string nome, float incasso_giornaliero, int somma_incassi, int n)
 {
    //inserimento numero di reparti
    while (risposta='s'){
        cout<<"Inserisci il nome del reparto:";
            cin>>nome;
        cout<<"Inserisci l'incasso giornaliero:";
            cin>>incasso_giornaliero;
    somma_incassi=somma_incassi+incasso_giornaliero;
    n++;
    cout<<"Ci sono altri reparti?(s/n)";
    cin>>risposta;
    }}
void media_incassi (int media_incassi, int n, int somma_incassi){
media_incassi=somma_incassi/n;};

int main(){

void acquisizione_somma(char risposta, string nome, float incasso_giornaliero, int somma_incassi, int n);

void media_incassi (int media_incassi, int n, int somma_incassi);




return 0;}


