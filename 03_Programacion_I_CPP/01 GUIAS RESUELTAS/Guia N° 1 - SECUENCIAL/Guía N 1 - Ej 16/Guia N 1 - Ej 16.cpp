#include <iostream>
using namespace std;

//16)
//El Laboratorio V&V hace frascos de píldoras para aprender a programar. Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol,
// 2 grs de Micilina y 7 mg de Ácido Sinítico.
//Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y muestre la cantidad de miligramos de Betamol,
//Micilina y de Ácido Sinítico que son necesarios para elaborarlos.
//


int main(){

    int cantidadFrascos; // Entrada
    int miligramosBetamol, miligramosMicilina, miligramosAS; // Salida

    cout << "Ingrese la cantidad de frascos solicitados: ";
    cin >> cantidadFrascos;

    miligramosBetamol = cantidadFrascos * (75 * 45);
    miligramosMicilina = cantidadFrascos * (75 * 2);
    miligramosAS = cantidadFrascos * (75 * 7);

    cout << "La cantidad de miligramos de Betamol es de: " << miligramosBetamol << endl;
    cout << "La cantidad de miligramos de Micilinaes de: " << miligramosMicilina << endl;
    cout << "La cantidad de miligramos de Betamol es de: " << miligramosAS << endl << endl;

system("pause");
return 0;
}
