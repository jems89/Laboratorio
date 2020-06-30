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

///subo 3 funciones 2 void una para poner en cero los contadores, la otra cargarloscontadores con el vector del dado en este caso le puse v fijo de [5].
///                 1 int que devuelve el puntaje que se realizo en el tiro. cada vez que se tire se va tener que llamar a las 3 funciones .


int funciondepuntaje(int);
int contador[6];
int v[5];
void ponercerouncontador(int);

void ponercerouncontador(int contador[5]){
int i;
for(i=0;i<6;i++){
contador[i]=0;
}
}
void mostrarcontador(int,int );
void mostrarcontador(int contador[6],int v[5]){
int i;
for (i=0;i<6;i++){
    if (v[i]==1) {contador[0]++; }
    if (v[i]==2) {contador[1]++;}
    if (v[i]==3) {contador[2]++;}
    if (v[i]==4) {contador[3]++;}
    if (v[i]==5) {contador[4]++;}
    if (v[i]==6) {contador[5]++;}
}
}
int funciondepuntaje(int contador[6]){
int i;int puntos=0;int acu=0;int contadordeescalera=0;
bool b2,b3=false;
for(i=0;i<6;i++){
if (contador[i]==5){puntos=50;}else{
    if(contador[i]==4){puntos=40;} else{
        if(contador[i]==3){b3=true;puntos=contador[i]*(i+1);}else{
            if(contador[i]==2){b2=true;puntos+=contador[i]*(i+1);}else{
                if(contador[i]==1){contadordeescalera++;}else{
                   if(contador[i]==0) {contadordeescalera--; }
                }
            }
        }
    }
}

/**cout<<contador[i]<<"\t";*/   ///muestra el contador en los indice del 0 al 5, hay que sacarlo//
}
if (b2==true && b3==true){puntos=30;}

if(contadordeescalera==5){puntos=25;}
acu+=puntos;
return acu;
}












#endif // FUNC_H_INCLUDED
