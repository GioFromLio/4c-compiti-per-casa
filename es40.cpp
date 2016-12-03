//Es40 DA LIO GIOVANNI IV C
#include<iostream>
using namespace std;
    int xp;
    int yp;
    int q;
    int m;
    char facc= 2;
void controllo(int xp, int yp, int q, int m)
{
    int a=yp;
    int b=(m*xp)+q;
 if(a == b)
 {  cout<<"Il punto appartiene alla retta"<<'\n';
 }
 else{
    cout<<"Il punto non appartiene alla retta"<<'\n';
 };}

int main(){
    cout<<"Inserisci l'ascissa del punto:";
    cin>>xp;
    cout<<"Inserisci l'ordinata del punto:";
    cin>>yp;
    cout<<"Inserisci il punto di intersezione con l'asse y:";
    cin>>q;
    cout<<"inserisci il coeff. angolare:";
    cin>>m;
    controllo(xp, yp, q, m);
    cout<<"Grazie per aver lavorato con noi "<<facc;
    return 0;

}
