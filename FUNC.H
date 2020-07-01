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


void tirardados(int );///con un vector fijo de 6 elementos se carga en forma aleatorio.
void mostrardados(int );/// muestra el vector cargado en la funcion tirardados.

void ponercerouncontador(int); ///pone en cero un contador de 6 caras del dado. con un vector de 6 elementos.
void cargarcontador(int,int ); /// con el vector de dados , cargo el vector de contador.
int funciondepuntaje(int);  /// recorro el vector y cuento las repeticiones para devolver el resultado del lanzamiento.

int v[5];int contador[6]; /// vectores , dados y el contador





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




void ponercerouncontador(int contador[5]){
int i;
for(i=0;i<6;i++){
contador[i]=0;
}
}

void cargarcontador(int contador[6],int v[5]){
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
int i;int puntos=0;int acu=0; int contadordeescalera=0;
bool b2,b3=false;
for(i=0;i<6;i++){
/**puntos=contador[i]*(i+1);*/
if (contador[i]==5){puntos=50;}else{
    if(contador[i]==4){puntos=40;} else{
        if(contador[i]==3){b3=true;puntos=contador[i]*(i+1);}else{
            if(contador[i]==2){b2=true;puntos+=contador[i]*(i+1);}else{
                if(contador[i]==1){contadordeescalera++;}else{
                   if(contadordeescalera!=5 && contadordeescalera !=0) {contadordeescalera--;}
                }
            }
        }
    }
}


}
if (b2==true && b3==true){puntos=30;}
if(contadordeescalera==5){puntos=25;}
acu+=puntos;

return acu;


}




#endif // FUNC_H_INCLUDED
