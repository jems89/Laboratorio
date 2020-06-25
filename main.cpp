#include <iostream>
#include <clocale>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<ctype.h>
#include<cstring>
#include"FUNC.H"

using namespace std;

int main()

{
int  l, vectdados[6];
char r,nombre[20],apellido[20],ganador[20];
int op;
c
system("cls");
cout<<"INGRESAR TU  NOMBRE"<<endl;
cin.getline(nombre,20);

cout<<"INGRESA TU APELLIDO"<<endl;
cin.getline(apellido,20);
cout<<endl;
cout<<"BIENVENIDO "<<nombre<<" "<<apellido<<" "<<endl;

while(true){
system("cls");
  cout<<"MENU DEL JUEGO"<<endl;
  cout<<"1- JUEGA UN JUGADOR "<<endl;
  cout<<"2- JUEGAN DOS JUGADORES "<<endl;
  cout<<"3- PUNTACION MAS ALTA"<<endl;
  cout<<"4- SALIR"<<endl;
  cout<<"ELIJA UNA OPCION "<<endl;
  cin>>op;
system("cls");

switch(op){

case 1:

cout<<" A TIRAR LOS DADOS !!"<<endl;
      SEGUNDOMENU(),tirardados(vectdados),mostrardados(vectdados),puntos(vectdados,vpuntos,l);
cout<<" S/N!!"<<endl;
cin>>r;
switch ( r){
case 's' : cout<<"si"<<endl;
system("pause");
tirardados(vectdados);
mostrardados(vectdados);
puntos(vectdados,vpuntos,l);

    break;
case 'n': cout<<"no"<<endl;
    system("pause");
    break;
}


break;
  case 2:

    break;
  case 3:cout<<"dada";
    break;
  case 4:return 0;
    break;
    default:cout<<"ERROR";
    return 0;

  }
}

return 0;
}
