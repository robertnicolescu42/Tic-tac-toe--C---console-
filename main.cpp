#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;
char a[4][4],b[4][4],i,j,n=3,xz=1,val,p1,p2,ra;
int ok=1,ac;

void matr(char a[4][4], char n) //construieste tabla de joc
{
    a[1][1]='1';
    a[1][2]='2';
    a[1][3]='3';
    a[2][1]='4';
    a[2][2]='5';
    a[2][3]='6';
    a[3][1]='7';
    a[3][2]='8';
    a[3][3]='9';

}

void afis(char a[4][4], char n) //afiseaza pe ecran matricea dupa fiecare mutare
{system ("cls");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        cout<<setw(3)<<"|"<<a[i][j]<<"|";
    cout<<endl;}
}

int randnmb(int ra) //folosita pentru a genera un numar random astfel incat bot-ul sa isi schimbe tactica
{int nrra;
srand(time(NULL));
nrra=((rand()%10)+1)%5%3;;
return nrra;
}

void schimb(char a[4][4], char p1) //folosita pentru mutarile playerului
{
    cout<<"Introduceti valoarea (1-9): "; cin>>val;
    cout<<endl;
    for(i=1; i<=n;i++){
    for(j=1;j<=n;j++)
    if(a[i][j]==val){
       a[i][j]=p1;}
        }
}

void schimbAI(char a[4][4], char p1,int nr) //folosita pentru mutarile calculatorului
{
     if(nr==0)
     {if((a[3][3]!='X')&&(a[3][3]!='0'))
      a[3][3]=p1;
      else if(((a[2][2]=='X')||(a[2][2]=='0'))&&((a[2][3]!='X')&&(a[2][3]!='0')))
     a[2][3]=p1;
      else  if(((a[2][2]=='X')||(a[2][2]=='0'))&&((a[2][1]!='X')&&(a[2][1]!='0')))
     a[2][1]=p1;
     else if((a[1][1]!='X')&&(a[1][1]!='0'))
     a[1][1]=p1;
       else if((a[1][3]!='X')&&(a[1][3]!='0'))
     a[1][3]=p1;
         else if((a[3][1]!='X')&&(a[3][1]!='0'))
     a[3][1]=p1;
           else if((a[1][1]!='X')&&(a[1][1]!='0'))
     a[1][1]=p1;
           else if((a[3][1]!='X')&&(a[3][1]!='0'))
     a[3][1]=p1;
           else if((a[1][3]!='X')&&(a[1][3]!='0'))
     a[1][3]=p1;
            else if((a[2][1]!='X')&&(a[2][1]!='0'))
     a[2][1]=p1;
            else if((a[2][2]!='X')&&(a[2][2]!='0'))
     a[2][2]=p1;
            else if((a[3][2]!='X')&&(a[3][2]!='0'))
     a[3][2]=p1;
            else if((a[1][2]!='X')&&(a[1][2]!='0'))
     a[1][2]=p1;
            else if((a[2][3]!='X')&&(a[2][3]!='0'))
     a[2][3]=p1;}


    if(nr==1)
      {if((a[1][1]!='X')&&(a[1][1]!='0'))
        a[1][1]=p1;
       else if(((a[2][2]=='X')||(a[2][2]=='0'))&&((a[2][3]!='X')&&(a[2][3]!='0')))
     a[2][3]=p1;
        else  if(((a[2][2]=='X')||(a[2][2]=='0'))&&((a[2][1]!='X')&&(a[2][1]!='0')))
     a[2][1]=p1;
     else if((a[1][1]!='X')&&(a[1][1]!='0'))
     a[1][1]=p1;
       else if((a[1][3]!='X')&&(a[1][3]!='0'))
     a[1][3]=p1;
         else if((a[3][1]!='X')&&(a[3][1]!='0'))
     a[3][1]=p1;
           else if((a[3][1]!='X')&&(a[3][1]!='0'))
     a[3][1]=p1;
           else if((a[1][3]!='X')&&(a[1][3]!='0'))
     a[1][3]=p1;
            else if((a[2][1]!='X')&&(a[2][1]!='0'))
     a[2][1]=p1;
            else if((a[2][2]!='X')&&(a[2][2]!='0'))
     a[2][2]=p1;
            else if((a[3][2]!='X')&&(a[3][2]!='0'))
     a[3][2]=p1;
            else if((a[1][2]!='X')&&(a[1][2]!='0'))
     a[1][2]=p1;
            else if((a[2][3]!='X')&&(a[2][3]!='0'))
     a[2][3]=p1;}

    if(nr==2)
    {if((a[3][1]!='X')&&(a[3][1]!='0'))
          a[3][1]=p1;
         else if(((a[2][2]=='X')||(a[2][2]=='0'))&&((a[2][3]!='X')&&(a[2][3]!='0')))
     a[2][3]=p1;
        else  if(((a[2][2]=='X')||(a[2][2]=='0'))&&((a[2][1]!='X')&&(a[2][1]!='0')))
     a[2][1]=p1;
     else if((a[1][1]!='X')&&(a[1][1]!='0'))
     a[1][1]=p1;
       else if((a[1][3]!='X')&&(a[1][3]!='0'))
     a[1][3]=p1;
           else if((a[1][1]!='X')&&(a[1][1]!='0'))
     a[1][1]=p1;
           else if((a[3][1]!='X')&&(a[3][1]!='0'))
     a[3][1]=p1;
           else if((a[1][3]!='X')&&(a[1][3]!='0'))
     a[1][3]=p1;
            else if((a[2][1]!='X')&&(a[2][1]!='0'))
     a[2][1]=p1;
            else if((a[2][2]!='X')&&(a[2][2]!='0'))
     a[2][2]=p1;
            else if((a[3][2]!='X')&&(a[3][2]!='0'))
     a[3][2]=p1;
            else if((a[1][2]!='X')&&(a[1][2]!='0'))
     a[1][2]=p1;
            else if((a[2][3]!='X')&&(a[2][3]!='0'))
     a[2][3]=p1;}


}
void tabla(char a[4][4], char n) //folosita doar pentru o afisare mai frumoasa la inceputul programului.
{

        cout<<setw(3)<<"|"<<1<<"|"<<"|"<<2<<"|"<<"|"<<3<<"|"<<endl;
        cout<<setw(3)<<"|"<<4<<"|"<<"|"<<5<<"|"<<"|"<<6<<"|"<<endl;
        cout<<setw(3)<<"|"<<7<<"|"<<"|"<<8<<"|"<<"|"<<9<<"|"<<endl;}

bool eplina(char a[4][4], char n) //stabileste daca mai sunt mutari posibile
{
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        if((a[i][j]!='X')&&(a[i][j]!='0'))
            return true;
    return false;
}

void win(char a[4][4], char n, int &ac) //stabileste castigatorul
{
  for(i=1;i<=n;i++)
  {
  for(j=1;j<=n;j++){


  if(i==j)if((a[i][j]==a[i+1][j+1])&&(a[i+1][j+1]==a[i+2][j+2]))
          { if(a[i][j]=='X'){
                ac=1;}
           else if(a[i][j]=='0')
                ac=0;
                ok=0;
                break;} //verificare pentru diagonala principala

  if(j==n-i+1){if((a[i-1][j+1]==a[i][j])&&(a[i][j]==a[i+1][j-1]))
            { if(a[i][j]=='X'){
                ac=1;}
           else if(a[i][j]=='0')
                ac=0;
                ok=0;
                break;}} //verificare pentru diagonala secundara

 if((a[i][j]==a[i+1][j])&&(a[i+1][j]==a[i+2][j]))
    { if(a[i][j]=='X'){
                ac=1;}
           else if(a[i][j]=='0')
                ac=0;
                ok=0;
                break;} //verificare pentru linii

 if((a[i][j]==a[i][j+1])&&(a[i][j+1]==a[i][j+2]))
    { if(a[i][j]=='X'){
                ac=1;}
           else if(a[i][j]=='0')
                ac=0;
                ok=0;
                break;}} //verificare pentru coloane

    if(ok==1) ac=3;

}}

void multiplayer() //folosita pentru modul de joc 1 ( 1v1 de la tastatura)
{cout<<"Player #1: (X/0)? "; cin>>p1;
if(p1=='X')
{cout<<"Player #2 va juca cu 0"<<endl;
 p2='0';}
else if(p1=='0')
{cout<<"Player #2 va juca cu X"<<endl;
 p2='X';}
if(p1!='X')
if(p1!='0')
{cout<<"\nPlayer #1 nu a nici X, nici 0;\nIntroduceti o valoare corecta \n\n";
multiplayer();
}
    while(eplina(a,n)==true){

schimb(a,p1);

afis(a,n);
win(a,n,ac);
if(ac==1)
 break;
if(ac==0)
  break;
if(eplina(a,n)==false) break;
schimb(a,p2);

afis(a,n);

}
if(ac==3)
    cout<<"EGALITATE!";
    else if(ac==1) cout<<"X a castigat";
    else cout<<"0 a castigat";
}

void singleplayer() //folosita pentru modul de joc 2( vs calculator)
{int nr;
    nr=randnmb(ra);

cout<<"Player: (X/0)? "; cin>>p1;
if(p1=='X')
{cout<<"Calculatorul va juca cu 0"<<endl;
 p2='0';}
else if(p1=='0')
{cout<<"Calculatorul va juca cu X"<<endl;
 p2='X';}
if(p1!='X')
if(p1!='0'){
 cout<<"\nPlayer #1 nu a ales nici X, nici 0;\nIntroduceti o valoare corecta \n\n";
singleplayer();}
while(eplina(a,n)==true)
{schimbAI(a,p2,nr);
afis(a,n);
win(a,n,ac);
if(ac==1)
 break;
if(ac==0)
  break;
if(eplina(a,n)==false) break;
schimb(a,p1);
afis(a,n);
}
if(ac==3)
    cout<<"EGALITATE!";
    else if(ac==1) cout<<"X a castigat";
    else cout<<"0 a castigat";

}

void modDeJoc()
{int mod;
tabla(a,n);
matr(a,n);
cout<<"\r\n";
cout<<"Alege modul de joc\n Pentru 2 jucatori, apasa 1\n Pentru joc impotriva calculatorului, apasa 2 (acesta va face prima mutare):\n(1/2)?:";
cin>>mod;
cout<<"\r\n";
if(mod==1) multiplayer();
else if(mod==2) singleplayer();
    else {system ("cls");
            cout<<"Valoare incorecta. Alegeti 1 sau 2.\n";
    modDeJoc();}
}

int main()
{modDeJoc();
    return 0;
}
