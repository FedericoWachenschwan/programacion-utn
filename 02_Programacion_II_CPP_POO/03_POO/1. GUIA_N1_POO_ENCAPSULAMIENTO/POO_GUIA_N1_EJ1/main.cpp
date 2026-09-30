#include <iostream>
#include "Rectangulo.h"
using namespace std;

//1
//Crear una clase llamada Rectangulo que represente un rectángulo.
//La clase debe tener dos atributos correspondientes a la base y altura. Implementar los siguientes métodos:
//Getters y Setter de cada atributo.
//calcularArea(): Devuelve el área del rectángulo.
//calcularPerimetro(): Devuelve el perímetro del rectángulo.

int main()
{
    Rectangulo r;
    r.setBase(5), r.setAltura(3);

    cout << "Base: " << r.getBase() << ", Altura: " << r.getAltura() << endl;
    cout << "Area: " << r.calcularArea() << endl;
    cout << "Perimetro: " << r.calcularPerimetro() << endl;

    ///PRUEBA CON VALORES NEGATIVOS:
    cout << endl << "PRUEBA CON VALORES NEGATIVOS (BASE= -10):" << endl;
    Rectangulo r2;
    r2.setBase(-10);
    r2.setAltura(4);
    cout << "Base: " << r2.getBase() << ", Altura: " << r2.getAltura() << endl; // Base debería ser 0

    return 0;
}
