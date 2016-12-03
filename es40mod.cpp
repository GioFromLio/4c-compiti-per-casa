//Es40 DA LIO GIOVANNI IV C
#include<iostream>
using namespace std;

struct punto{
    float xp;
    float yp;
}P;

struct retta{
    float m;
    float q;
}R;

bool controllo(retta R, punto P);

int main(){
    retta R;
    punto P;
    cout<<"Inserisci l'ascissa del punto:";
    cin>>P.xp;
    cout<<"Inserisci l'ordinata del punto:";
    cin>>P.yp;
    cout<<"Inserisci il punto di intersezione con l'asse y:";
    cin>>R.q;
    cout<<"inserisci il coeff. angolare:";
    cin>>R.m;
    if(controllo(P.xp, P.yp, R.q, R.m))
        cout<<"Il punto appartiene alla retta"<<'\n';
    else
        cout<<"Il punto non appartiene alla retta"<<'\n';
    return 0;
}

bool controllo(float P.xp, float P.yp, float R.q, float R.m){
    return (P.yp == (R.m*P.xp)+R.q);
}
