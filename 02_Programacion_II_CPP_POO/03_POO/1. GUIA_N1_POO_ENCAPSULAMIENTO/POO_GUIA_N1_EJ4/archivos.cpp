#include <iostream>
#include "Triangulo.h"

using namespace std;

float Triangulo::getLado(int numero)
{
    if (numero < 1 || numero > 3)
    {
        return 0;
    }
    else
    {
        return longitud [numero-1];
    }
}

void Triangulo::setLado(int numero, float valor)
{
    if (numero <1 || numero > 3)
    {

    }
    else
    {
        longitud[numero-1] = valor;
    }
}

int Triangulo::getTipo()
{
    if (longitud[0] == longitud[1] && longitud[1] == longitud[2])
    {
        return 1; ///equilátero (todos los lados iguales).

    }
    else
    {
        if (longitud[0] == longitud[1] || longitud[0] == longitud[2] || longitud[1] == longitud[2])
        {
            return 2; ///isósceles (dos lados iguales).

        }
        else
        {
            return 3; ///escaleno (todos los lados diferentes)
        }
    }

}

bool Triangulo::isEscaleno()
{
    if (getTipo() == 3) ///escaleno (todos los lados diferentes)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Triangulo::isIsosceles()
{
    if (getTipo() == 2) ///isósceles (dos lados iguales).

    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Triangulo::isEquilatero()
{
    if (getTipo() == 1) ///equilátero (todos los lados iguales).

    {
        return true;
    }
    else
    {
        return false;
    }
}
