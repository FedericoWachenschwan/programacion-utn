#include <iostream>
using namespace std;

//3)
//Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido.
//Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar
// por pantalla el sueldo total a pagar.
//Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.


int main(){


int cantidadDeAutosVendidos;
float totalAPagar;

    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> cantidadDeAutosVendidos;

    totalAPagar = (cantidadDeAutosVendidos * 700) + 5000;

    cout << "Su sueldo es de $ " << totalAPagar << endl;

system("pause");
return 0;
}
