#include <iostream>
#include "Dado.h"
#include <cstdlib>
#include <ctime>

Dado::Dado()
{
    valor = rand() % 6 + 1;
}

void Dado::lanzar()
{
    valor = rand() % 6 + 1;
}

int Dado::getValor()
{
    return valor;
}

bool Dado::esMaximo()
{
    if (valor == 6)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Dado::esMinimo()
{
    if (valor == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
