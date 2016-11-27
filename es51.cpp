/*Da Lio Giovanni 4^C */
//Esercizio 51

#include<iostream>
using namespace std;

int main(){

int numeri[10];
int i, f=0;
cout<<"Inserisci 10 numeri"<<endl;
for(i=0; i<10; i++){
    cin>>numeri[i];
    if(numeri[i]>5){f++;}
    else{};
}
cout<<"I numeri maggiori di 5 sono in tutto: "<<f;
return 0;}
