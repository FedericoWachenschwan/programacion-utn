#include <iostream>
#include "Rectangulo.h"
using namespace std;

int Rectangulo::calcularArea()
{
   int area = base * altura;

   return area;
}

int Rectangulo::calcularPerimetro()
{
    int perimetro = 2 * (base + altura);

    return perimetro;
}

int Rectangulo::getBase()
{
    return base;
}

int Rectangulo::getAltura()
{
    return altura;
}

void Rectangulo::setBase(int nuevaBase)
{
    base = nuevaBase;

    if (base >= 0)
    {

    }
    else
    {
        base = 0;
    }
}

void Rectangulo::setAltura(int nuevaAltura)
{
    altura = nuevaAltura;

    if (altura >= 0)
    {
    }
    else
    {
        altura = 0;
    }
}
