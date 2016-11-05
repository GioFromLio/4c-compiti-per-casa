//es38 DA LIO GIOVANNI IV C
#include <iostream>
using namespace std;

float prezzo;
float sconto;
float prezzo_scontato;
void lollipop(float prezzo,float sconto){

float k=(prezzo/100)*sconto;

prezzo_scontato=prezzo-k;
cout<<"Prezzo scontato:"<<prezzo_scontato;
}
int main()
{
    cout<<"Inserisci il prezzo:";
cin>>prezzo;
    cout<<"inserisci lo sconto:";
cin>>sconto;
    lollipop (prezzo,sconto);

    return 0;
}
