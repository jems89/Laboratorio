/**
8) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates�
considerar la primera aparici�n.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7.
*/
#include <iostream>
using namespace std;
int main(){

int con,maxx,ba,pos;
float n;

cout<<"ingrese su lista de numeros"<<endl;
cin>>n;

con=0;maxx=0;ba=0;pos=0;
while(n!=0){


        if(ba==0){ba=1;maxx=n;con++;pos=con;}else {
        if( n>maxx){maxx=n;con++;pos=con;} else {
         if( n==maxx) {maxx=n; con++;pos=pos; }  else {

         con++;
         }

        }                           }

         cout<<"ingrese un numero"<<endl;
         cin>>n;
        }





cout<<"El maximo es : "<<maxx<<" y la posicion es  "<<pos<<endl;



return 0 ;
}
