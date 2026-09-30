#include <iostream>
#include <cstdlib>

/**
-EN UN PROYECTO DE SOFTWARE DE CODEBLOCKS HACER UN PROGRAMA CON UN MENÚ CON LAS SIGUIENTES OPCIONES:

|.CARGAR VECTOR
2.MOSTRAR VECTOR
3.MOSTRAR MÁXIMO
4.MOSTRAR MÍNIMO
0.SALIR

-EL VECTOR DEBE SER DE TIPO ENTERO Y TENER UN TAMAÑO DE 10 */

using namespace std;
#include "funciones.h"
int main(){
int opc;
int vec [10];
int maxValor, minValor; ///SE DECLARAN ESTAS VARIABLES SIMPLEMENTE PARA PODER MOSTRAR LUEGO EL VALOR EN EL COUT<<
bool cargado=false;
char mnserror[99] = "OPCION INCORRECTA, VUELVA A INGRESAR";
while(true){
system("cls");
cout<<"--------------MENU-----------------"<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"1 CARGAR VECTOR" <<endl;
if(cargado==true){
cout<<"2 MOSTRAR VECTOR" <<endl;
cout<<"3 MOSTRAR MAXIMO" <<endl;
cout<<"4 MOSTRAR MINIMO" <<endl;
}
cout<<"0 SALIR" <<endl;
cout<<"-----------------------------------"<<endl;
cout<<"INGRESE UNA OPCION:" <<endl;
cin>>opc;
system("cls");
switch (opc){
case 1: cargarVector(vec, 10);
        cargado=true;
    break;
case 2: if (cargado==true)mostrarVector(vec, 10); else{cout<<mnserror <<endl;}
    break;
case 3: if (cargado==true){maxValor=buscarMaximo(vec, 10); cout<<"VALOR MAXIMO: "<<maxValor<<endl;}
        else{cout<<mnserror <<endl;}
    break;
case 4: if (cargado==true){minValor=buscarMinimo(vec, 10); cout<<"VALOR MINIMO: "<<minValor<<endl;}
         else{cout<<mnserror <<endl;}
    break;
case 0: return 0;
    break;
default: cout<<mnserror <<endl;
    break;
}
system("pause");
}
 return 0;
}
