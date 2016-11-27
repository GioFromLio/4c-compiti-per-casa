/*Da Lio Giovanni 4^C*/
//Esercizio 52

#include<iostream>
using namespace std;

int i;
int numeri[10];

int main(){

for(i=0; i<10; i++){
cin>>numeri[i];
}
i=0;
for(i=0; i<3; i++){
    numeri[i]=2*numeri[i];
}
cout<<"I primi tre numeri sono stati raddoppiati: "<<numeri[0]<<", "<<numeri[1]<<", "<<numeri[2];
return 0;}
