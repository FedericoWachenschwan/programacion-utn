#include <iostream>
#include "Termometro.h"

using namespace std;

Termometro::Termometro(float tempInicial, char unidadInicial)
{
    temperatura = tempInicial;
    unidad = unidadInicial;
}

void Termometro::cambiarUnidad(char nuevaUnidad)
{
    if (unidad != nuevaUnidad)
    {
        if (nuevaUnidad == 'F')
        {
            temperatura = (temperatura * 9.0/5.0) + 32;
            unidad = 'F';
        }
        else
        {
            if (nuevaUnidad == 'C')
            {
                temperatura = (temperatura - 32) * 5.0/9.0;
                unidad = 'C';
            }
        }
    }
}

void Termometro::setTemperatura(float nueva_temperatura)
{
    temperatura = nueva_temperatura;
}

float Termometro::getTemperatura()
{
    return temperatura;
}

char Termometro::getUnidad()
{
    return unidad;
}

