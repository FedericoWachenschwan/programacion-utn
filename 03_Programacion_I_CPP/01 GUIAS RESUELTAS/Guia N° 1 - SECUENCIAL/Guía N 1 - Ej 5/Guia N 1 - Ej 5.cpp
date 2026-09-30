#include <iostream>
#include <cstdlib>

using namespace std;

//5)
//Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores
// vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.
//
//Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50%
//y C: 37,50%.


int main(){

    int A, B, C, totalAlfajoresVendidos;
    float porcentajeA, porcentajeB, porcentajeC;

    cout << "Ingrese la cantidad de alfajores vendidos de la marca A: ";
    cin >> A;
    cout << "Ingrese la cantidad de alfajores vendidos de la marca B: ";
    cin >> B;
    cout << "Ingrese la cantidad de alfajores vendidos de la marca C: ";
    cin >> C;

    totalAlfajoresVendidos = A + B + C;
    porcentajeA = (A * 100.0) / totalAlfajoresVendidos;
    porcentajeB = (B * 100.0) / totalAlfajoresVendidos;
    porcentajeC = (C * 100.0) / totalAlfajoresVendidos;

    cout << "El porcentaje de cada marca es: A = " << porcentajeA << "%, " << "B = " << porcentajeB << "% y C = " << porcentajeC <<"%" << endl;

system("pause");
   return 0;
}
