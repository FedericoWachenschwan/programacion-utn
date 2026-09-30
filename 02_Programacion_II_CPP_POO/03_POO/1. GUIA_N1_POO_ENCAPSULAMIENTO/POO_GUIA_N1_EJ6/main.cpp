#include <iostream>
#include "Punto.h"

using namespace std;

//6
//Crear una clase llamada Punto que represente un punto en un plano cartesiano.
//La clase debe contener los siguientes atributos:
//x (float): Almacena la coordenada en el eje X.
//y (float): Almacena la coordenada en el eje Y.
//Implementar los siguientes métodos públicos:
//Punto(float xInicial, float yInicial): Constructor que inicializa las coordenadas x y y del punto.
//Getters y Setters para cada atributo.
//calcularDistancia(Punto otroPunto): Devuelve la distancia entre el punto actual y otro punto dado.
//La fórmula para calcular la distancia entre dos puntos (x1, y1) y (x2, y2) es: sqrt((x2 - x1)^2 + (y2 - y1)^2).
//mover(float deltaX, float deltaY): Mueve el punto sumando deltaX a x y deltaY a y.


int main()
{
    Punto punto1(10, 10);

    cout << "La posicion del punto1 (objeto punto1) inicial es: " << endl;
    cout << "x inicial: " << punto1.getX() << endl;
    cout << "Y inicial: " << punto1.getY() << endl << endl;


    punto1.setX(20), punto1.setY(20);;
    cout << "La nueva posicion del punto1 (objeto punto1) es: " << endl;
    cout << "X nuevo punto: " << punto1.getX() << endl;
    cout << "Y nuevo punto: " << punto1.getY() << endl << endl;

    Punto punto2(40, 40);
    cout << "La posicion del punto2 (objeto punto2) es: " << endl;
    cout << "x inicial: " << punto2.getX() << endl;
    cout << "Y inicial: " << punto2.getY() << endl << endl;

    float distancia = punto1.calcularDistancia(punto2);
    cout << "La distancia entre ambos puntos (punto1 y punto2) es de: " << distancia << endl << endl;

    punto1.mover(100, 100);
    cout << "Moviendo el punto1 a + 100 unidades x = " << punto1.getX() << endl;
    cout << "Moviendo el punto1 a + 100 unidades de y = " << punto1.getY() << endl << endl;


    return 0;
}
