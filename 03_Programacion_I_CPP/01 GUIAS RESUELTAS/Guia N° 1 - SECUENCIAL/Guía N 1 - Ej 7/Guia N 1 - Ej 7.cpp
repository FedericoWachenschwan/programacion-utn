#include <iostream>
#include <cstdlib>

using namespace std;

//7)
//Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a la misma y luego
//informar por pantalla el importe a pagar.
//Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
//Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.


int main(){

    float importeDeVenta, porcentajeDeDescuento; //Entradas
    float importeAPagar; //Salida

    cout << "Ingrese el importe de venta: ";
    cin >> importeDeVenta;
    cout << "Ingrese el porcentaje de descuento para aplicar a la venta: ";
    cin >> porcentajeDeDescuento;

    importeAPagar = importeDeVenta - (importeDeVenta * (porcentajeDeDescuento / 100));

    cout << "El importe a pagar es: $" << importeAPagar <<endl;

system("pause");
   return 0;
}
