#include <iostream>
using namespace std;

//5
//Un negocio de perfumería efectúa descuentos según el importe de la venta.
//Si el importe es menor a $100 aplicar un descuento del 5%
//Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
//Si el importe es mayor a $500 aplicar un descuento del 15%
//
//Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
//Importante: Verifique que el programa emita UN SOLO CARTEL.


int main(){

    float importeOriginal; /// Entrada
    float importeConDescuento; /// Salida

    cout << "Ingrese el Importe Original: ";
    cin >> importeOriginal;

    if (importeOriginal < 100){

        importeConDescuento = importeOriginal * 0.95;

    } else { if (importeOriginal >= 100 && importeOriginal <= 500){

           importeConDescuento = importeOriginal * 0.90;

        } else {

            importeConDescuento = importeOriginal * 0.85;
        }

    }

    cout << "El Importe con descuento es de: " << importeConDescuento <<endl;

system("pause");
return 0;
}
