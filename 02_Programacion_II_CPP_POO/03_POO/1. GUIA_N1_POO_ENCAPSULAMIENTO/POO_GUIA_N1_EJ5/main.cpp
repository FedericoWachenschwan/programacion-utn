#include <iostream>
#include "Termometro.h"

using namespace std;

//5
//Crear una clase llamada Termometro que represente un termómetro digital.
//La clase debe contener los siguientes atributos:
//temperatura (float): Almacena la temperatura actual medida por el termómetro.
//unidad (char): Almacena la unidad de medida de la temperatura ('C' para Celsius, 'F' para Fahrenheit).
//Implementar los siguientes métodos:
//Termometro(float tempInicial, char unidadInicial):
//Constructor que inicializa la temperatura y la unidad de medida.
//get y set de temperatura.
//cambiarUnidad(char nuevaUnidad): Cambia la unidad de medida entre Celsius y Fahrenheit.
// Si la nueva unidad es diferente de la actual, convierte la temperatura a la nueva unidad.
//Fórmula de conversión de Celsius a Fahrenheit: (C * 9/5) + 32
//Fórmula de conversión de Fahrenheit a Celsius: (F - 32) * 5/9
//getUnidad(): Devuelve la unidad actual de medida.

int main()
{
    Termometro t(5.5, 'C');

    cout << "Temperatura inicial: " << t.getTemperatura() << endl;
    cout << "Unidad inicial: " << t.getUnidad() << endl << endl;

    t.cambiarUnidad('F');
    cout << "Temperatura cambiada a " << t.getUnidad() << endl;
    cout << "Nueva temperatura: " << t.getTemperatura() << endl << endl;

    t.cambiarUnidad('C');
    cout << "Temperatura cambiada a " << t.getUnidad() << endl;
    cout << "Nueva temperatura: " << t.getTemperatura() << endl << endl;

    t.setTemperatura(100);
    cout << "Temperatura manual: " << t.getTemperatura() << " " << t.getUnidad() << endl;

    return 0;
}
