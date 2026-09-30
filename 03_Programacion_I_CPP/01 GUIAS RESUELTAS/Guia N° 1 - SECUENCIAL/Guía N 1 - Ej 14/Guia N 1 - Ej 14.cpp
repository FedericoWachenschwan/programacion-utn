#include <iostream>
#include <cstdlib>

using namespace std;

//14
//Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento,
//el descuento aplicado y el importe total a cobrar.
//Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
//Importe: 4500, Descuento: 1800, total: 2700.

int main(){

    float importeDeCompra; //Entrada
    int descuentoAAplicar; //Entrada
    float importeTotalACobrar; //Salida

    cout << "Ingrese el importe de la compra: ";
    cin >> importeDeCompra;
    cout << "Ingrese el descuento a aplicar: ";
    cin >> descuentoAAplicar;

    importeTotalACobrar = importeDeCompra - ((descuentoAAplicar * 100) / importeDeCompra);

    cout << "El importe sin descuento es: "
         << importeDeCompra
         << ", el deescuento aplicado es: "
         << descuentoAAplicar
         << " y el importe total a cobrar es: "
         << importeTotalACobrar <<endl;

system("pause");
   return 0;
}
