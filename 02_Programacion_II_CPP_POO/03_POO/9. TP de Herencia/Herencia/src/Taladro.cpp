#include "Taladro.h"
#include <iostream>
#include "Herramienta.h"
using namespace std;

Taladro::Taladro(float peso, float longitud, float potencia) : Herramienta(peso, longitud)
{
    setNombre("Taladro");
    _potencia = potencia;
}

///GETTERS:
float Taladro::getPotencia()
{
    return _potencia;
}

///SETTERS:
void Taladro::setPotencia(float potencia)
{
    _potencia = potencia;
}

///METODOS:
void Taladro::mostrarInformacion()
{
    Herramienta::mostrarInformacion();
    cout << "Tipo de potencia: " << _potencia << " watts" << endl << endl;
}

