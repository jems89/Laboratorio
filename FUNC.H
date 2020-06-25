#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
#include <iostream>
#include <clocale>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<ctype.h>
#include<cstring>
using namespace std;

void SEGUNDOMENU();///abre un segundo menu
void tirardados(int );
void mostrardados(int );
void ponerenvectordepuntos(int);
int puntos(int, int,int);
int v[5];int vpuntos[5];   int ronda=0, tiro=0;
char nombre,apellido;
void SEGUNDOMENU(){



 cout<<"RONDA NUMERO: "<<ronda;
system("pause");

}




void tirardados(int v[5]) {
srand(time(NULL));
int i;
for(i=0;i<5;i++){
  v[i]=1+(rand()%6);
}
 }
void mostrardados(int v[5]){
    srand(time(NULL));
    int i;
    for(i=0;i<5;i++){
cout<<v[i]<<"\t";

}
cout<<endl;
}
void ponerenvectordepuntos(int vpuntos[5]){
    int x;
for(x=0;x<5;x++){

    vpuntos[x]=0;
}
}
int puntos(int v[5],int vpuntos[5],int l){
int r,i,acu=0;
int c=0;
for(i=0;i<5;i++){
        r=v[i];
    switch (r){
    case 1: acu+=1;
    break;
    case 2: acu+=2;
    break;
    case 3: acu+=3;
    break;
    case 4: acu+=4;
    break;
    case 5: acu+=5;
    break ;
    case 6:acu+=6;
    break;
    }
}

if(acu==15 || acu==20){ l=50;}{l=acu;}
cout<<"PUNTUACION OPTENIDA "<<l<<endl;
system("pause");
}












#endif // FUNC_H_INCLUDED
