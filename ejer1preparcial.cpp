/**1) El club de fans de Brian Lara ha realizado encuentros en algunas ciudades durante todo
el 2019 y parte del 2020. Por cada encuentro realizado se registró la siguiente
información:
- Ciudad (entero entre 1 y 100)
- ID (entero)
- Asistencia (entero)
- Recaudación (real)
La información se encuentra agrupada por ciudad. Se sabe que en cada ciudad se
hicieron tres encuentros. Para poder indicar el fin de la carga de datos se ingresa un
código de ciudad negativo.
Se pide calcular e informar:
A) Por cada ciudad, la recaudación total.
B) El ID de encuentro que haya registrado la menor cantidad de asistencia. Indicar el ID
de encuentro y la asistencia registrada.
C) El promedio de recaudación por asistente.*/

#include<iostream>
using namespace std;
int main(){
int acuidad,ciudad,id,encuentroid,idtotal,asistencia,menorcantidadasistencia,i,acumasistencia,minn,promediototal,promediofinal;
float acumretotal,finacumretotal;
float recaudacion,retotal;
bool menor=false;
bool banderamenor=false;

acumretotal=0;
finacumretotal=0;
cout<<"__________________________________________INGRESE EL NUMERO DE LA CIUDAD________________________ ( DEL 1 AL 100)"<<endl;
cin>>ciudad;
  while(ciudad>=0){

acuidad=ciudad;


retotal=0;
acumasistencia=0;

    while(ciudad==acuidad){


   for(i=1;i<4;i++){

   cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\*INGRESE LOS SIGUIENTES DATOS*/////////////////////////////"<<endl;
   cout<<"ID_ _";
   cin>>id;
   cout<<"ASISTENCIA _ _ ";
   cin>>asistencia;
   cout<<"RECAUDACION _ _ ";
   cin>>recaudacion;


        retotal+=recaudacion;

   acumasistencia+=asistencia;

        if (menor==0){ menorcantidadasistencia=asistencia; menor=true; encuentroid=id;} else{
            if(asistencia<menorcantidadasistencia){menorcantidadasistencia=asistencia;}
        }


   }
   cout<<"__________________________________________INGRESE EL NUMERO DE LA CIUDAD___________________ ( DEL 1 AL 100)"<<endl;
   cin>>ciudad;

    }


cout<<"-----------------------------------------****************************************************************************------------------"<<endl;
cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\*******************LA RECAUDACION TOTAL DE LA CUIDAD ANTERIOR INGRESADA FUE //////////////////////***** "<<endl;
cout<<retotal<<endl;
acumretotal+=retotal;
finacumretotal+=acumretotal;

if(banderamenor==0){minn=menorcantidadasistencia;idtotal=encuentroid;banderamenor=true;}else{

    if(menorcantidadasistencia<minn){minn=menorcantidadasistencia;idtotal=encuentroid;}
}




  }
  promediofinal=acumretotal/acumasistencia;
cout<<"_____________________________________________________________________________________________________________________"<<endl;
cout<<"EL ID ENCUENTRO QUE REGISTRO LA MENOR CANTIDAD DE ASISTENCIA ES "<<idtotal<<endl;
cout<<"SU ASISTENCIA FUE "<<minn<<endl;


cout<<"EL PROMEDIO DE RECAUDACION POR ASISTENCIA ES "<<promediofinal<<endl;



return 0;
}

