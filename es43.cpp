//DA LIO GIOVANNI 4^C 11/11/2016
//ESERCIZIO 43
 #include<iostream>
 #include<string.h>
 using namespace std;

 string candidato_1;
 string candidato_2;
 int voti_candidato_1;
 int voti_candidato_2;
 int voti_totali;
 float percentuale_candidato_1;
 float percentuale_candidato_2;

 void seggio(int voti_candidato_1, int voti_candidato_2){
 voti_totali=voti_candidato_1+voti_candidato_2;
 percentuale_candidato_1=(float)(voti_candidato_1*100)/voti_totali;
 percentuale_candidato_2=(float)(voti_candidato_2*100)/voti_totali;
 }

int main(){
cout<<"Inserisci il nome del primo candidato: ";
cin>>candidato_1;
cout<<"Quanti hanno votato per lui/lei? ";
cin>>voti_candidato_1;
cout<<"Inserisci il nome del secondo candidato: ";
cin>>candidato_2;
cout<<"Quanti hanno votato per lui/lei? ";
cin>>voti_candidato_2;
seggio(voti_candidato_1, voti_candidato_2);
if (percentuale_candidato_1>percentuale_candidato_2)
{cout<<"Ha vinto "<<candidato_1<<" con il "<<percentuale_candidato_1<<" % dei voti"<<'\n';
 cout<<candidato_2<<" con il "<<percentuale_candidato_2<<" % dei voti e' arrivato al secondo posto";}
else{
if(percentuale_candidato_1==percentuale_candidato_2)
{cout<<"I candidati hanno pareggiato con il "<<percentuale_candidato_1<<" % dei voti a testa";
}else{
cout<<"Ha vinto "<<candidato_2<<" con il "<<percentuale_candidato_2<<" % dei voti"<<'\n';
cout<<candidato_1<<" con il "<<percentuale_candidato_1<<" % dei voti e' arrivato al secondo posto";
}}
return 0;
}

