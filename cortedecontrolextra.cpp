#include<iostream>
#include<cstdlib>

using namespace std;
int main(){
int sucursal,minp,porcentajeminimo,remax2,remax3,remax1,sufin1,sufin2,sufin3,maxre,sucmyre,promedio1,promedio2,promedio3,acns,ns,dia,combustible,precio ,litros;
int ac1,ac2,ac3,ac7,ac24,acdh,cn1,cn2,cn3,rf1,rf2,rf3,lvt,lvp;
int recaud7,recaud24,alit1,alit2,alit3;
int bre,bfc1,bfc2,bfc3,bmin,bs,r1,r2,r3,re,rec,rh,ml,tipc,tipd;
char tipodedia;
 bre=0;
 bfc1=0;
 bfc2=0;
 bfc3=0;
 bmin=0;

lvt=0;alit1=0;alit2=0;alit3=0;

cout<<"////////////////////////////INGRESE LOS DATOS DE LA ESTACIONES DE SERVICIO//////////////////////////////////////////"<<endl;
cout<<"/////////////////////////INGRESE DIA DE LA VENTA DEL 1 / 7//////////////////////////////////////////////////////////"<<endl;
cin>>dia;
cout<<"////////////////////////////TIPO DE DIA H(DIA HABIL) F(FIN DE SEMANA) //////////////////////////////////////////////"<<endl;
cin>>tipodedia;
cout<<"//////////////////////////////TIPO DE COMBUSTIBLE 1(PREMIUM) 2(SUPER)3 (GASOIL)/////////////////////////////////////"<<endl;
cin>>combustible;
cout<<"/////////////////////////////////////PRECIO POR LITRO ////////////////////////////////////////////////////////////"<<endl;
cin>>precio;
cout<<"/////////////////////////////////////LITROS VENDIDOS///////////////////////////////////////////////////////////////"<<endl;
cin>>litros;
cout<<"/////////////////////////////////////***********************************///////////////////////////////////////////"<<endl;
cout<<"////////////////////////////INGRESE NUMERO DE SUCURSAL//////////////////////////////////////////////////////////////"<<endl;
cin>>ns;


while(ns!=0){

 acns=ns;

bs=0;
recaud7=0;recaud24=0;ac1=0;ac2=0;ac3=0;ac7=0;ac24=0;acdh=0;cn1=0;cn2=0;cn3=0;rf1=0;rf2=0;rf3=0;lvp=0;




while(ns==acns   ) {



lvt+=litros;

switch (combustible){
case 1 :
r1=litros*precio;
ac1+=r1;
cn1++;
alit1+=litros;
lvp+=litros;
break;
case 2 :
r2=litros*precio;
ac2+=r2;
cn2++;
alit2+=litros;
break;
case 3:
r3=litros*precio;
ac3+=r3;
cn3++;
alit3+=litros;
break;
}
if(dia<=7){

re=(r1+r2+r3);
ac7+=re;}
else{
        if(dia>=24){rec=(r1+r2+r3);ac24+=rec;}
}

if(tipodedia=='h'){rh=(r1+r2+r3); acdh+=rh;                  }else{ rf1+=r1; rf2+=r2; rf3+=r3;}

if(bs==0) {ml=litros; tipc=combustible;tipd=(char)tipodedia; bs==1;}
else{

if(litros>=ml ){ml=litros; tipc=combustible; tipd=(char)tipodedia;}
}

cout<<"////////////////////////////INGRESE LOS DATOS DE LA ESTACIONES DE SERVICIO//////////////////////////////////////////"<<endl;
cout<<"////////////////////////////INGRESE LOS DATOS DE LA ESTACIONES DE SERVICIO//////////////////////////////////////////"<<endl;
cout<<"/////////////////////////INGRESE DIA DE LA VENTA DEL 1 / 7//////////////////////////////////////////////////////////"<<endl;
cin>>dia;
cout<<"////////////////////////////TIPO DE DIA H(DIA HABIL) F(FIN DE SEMANA) //////////////////////////////////////////////"<<endl;
cin>>tipodedia;
cout<<"//////////////////////////////TIPO DE COMBUSTIBLE 1(PREMIUM) 2(SUPER)3 (GASOIL)/////////////////////////////////////"<<endl;
cin>>combustible;
cout<<"/////////////////////////////////////PRECIO POR LITRO ////////////////////////////////////////////////////////////"<<endl;
cin>>precio;
cout<<"/////////////////////////////////////LITROS VENDIDOS///////////////////////////////////////////////////////////////"<<endl;
cin>>litros;
cout<<"/////////////////////////////////////***********************************///////////////////////////////////////////"<<endl;
cout<<"////////////////////////////INGRESE NUMERO DE SUCURSAL//////////////////////////////////////////////////////////////"<<endl;
cin>>ns;



}


promedio1=ac1/cn1;
promedio2=ac2/cn2;
promedio3=ac3/cn3;

recaud7+=ac7;
recaud24+=ac24;

if(bre==0){maxre=acdh;sucmyre=ns; bre=1;} else{
if(acdh>= maxre ) {maxre=acdh; sucmyre=ns; }

}

if(bfc1==0){remax1=rf1; sufin1=ns; bfc1=1; }else{
 if(rf1>=remax1){remax1=rf1; sufin1=ns; }

}

if(bfc2==0) {remax2=rf2; sufin2=ns; bfc2=1;}else{
  if(rf2>=remax2){ remax2=rf2; sufin2=ns;  }

}

if (bfc3==0) {remax3=rf3; sufin3=ns; bfc3=1;} else{
  if (rf3>=remax3 ){remax3=rf3;sufin3=ns;}

}

porcentajeminimo=(lvp*100)/lvt;
if(bmin==0) {                minp=porcentajeminimo; sucursal=ns; bmin=1; }else{
if(porcentajeminimo<=minp) { minp=porcentajeminimo; sucursal=ns;}              }




/**PUNTO A**/

cout<<"EL PROMEDIO DE RECAUDACION PARA ESTA SUCURSAL ES  "<<endl;
cout<<"1*PREMIUM////////////2*SUPER/////////////3*GASOIL/////// ES : "<<endl;
cout<<promedio1<<endl;
cout<<promedio2<<endl;
 cout<<promedio3<<endl;
/**PUNTO B **/

cout<<"La recaudación total acumulada discriminada para la primera y la última semana de el mes es ."<<endl;
cout<<recaud7<<endl; cout<<recaud24<<endl;

}


/**PUNTO C**/
cout<<" La sucursal con mayor recaudación en los días hábiles : "<<endl;
cout<<sucmyre<<endl;

/**PUNTO D **/
cout<<" La recaudación máxima en fines de semana por cada tipo de combustible y en qué sucursal fue cada uno es "<<endl;

cout<< remax1<<endl;
cout<<remax2<<endl;
cout<<remax3<<endl;
cout<<sufin1<<endl;
cout<<sufin2<<endl;
cout<<sufin3<<endl;

/**PUNTO E **/
cout<<" La cantidad total de litros vendida para cada combustible son 3 resultados "<<endl;
cout <<alit1<<endl;
cout<<alit2<<endl;
cout<<alit3<<endl;
 /**PUNTO F**/
 cout <<"qué combustible fue vendido y en qué tipo de día en una sola venta"<<endl;
 cout<<tipc<<endl;
 cout<<tipd<<endl;
/**punto G*/
cout<<" La sucursal con menor porcentaje en litros vendidos de Premium respecto del total de litros vendidos en cada sucursal. es"<<endl;
cout<<sucursal<<endl;



return 0;
}

