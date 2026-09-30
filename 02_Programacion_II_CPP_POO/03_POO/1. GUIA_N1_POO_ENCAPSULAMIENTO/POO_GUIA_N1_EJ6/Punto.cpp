#include <iostream>
#include "Punto.h"
#include <cmath>

using namespace std;

Punto::Punto(float xInicial, float yInicial)
{
    x = xInicial;
    y = yInicial;
}

float Punto::getX()
{
    return x;
}

float Punto::getY()
{
    return y;
}

void Punto::setX(float nueva_x)
{
    x = nueva_x;
}

void Punto::setY(float nueva_y)
{
    y = nueva_y;
}

float Punto::calcularDistancia(Punto otroPunto)
{

    ///FORMULA QUE HAY QUE USAR: sqrt((x2 - x1)² + (y2 - y1)²)

    // Paso 1: calcular diferencias
    float diferenciaEnX = otroPunto.getX() - x;
    float diferenciaEnY = otroPunto.getY() - y;

    // Paso 2: elevar al cuadrado (multiplicar por sí mismo)
    float difXAlCuadrado = diferenciaEnX * diferenciaEnX;
    float difYAlCuadrado = diferenciaEnY * diferenciaEnY;

    // Paso 3: sumar
    float sumaDeCuadrados = difXAlCuadrado + difYAlCuadrado;

    // Paso 4: raíz cuadrada
    float distancia = sqrt(sumaDeCuadrados);

    return distancia;

}

void Punto::mover(float deltaX, float deltaY)
{
    x += deltaX;
    y += deltaY;
}
