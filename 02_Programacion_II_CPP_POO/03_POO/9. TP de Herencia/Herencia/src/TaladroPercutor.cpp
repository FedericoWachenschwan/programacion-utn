#include "TaladroPercutor.h"
#include <iostream>
#include <string>

using namespace std;

TaladroPercutor::TaladroPercutor(float peso, float longitud, float potencia, int golpesPorMinuto)
: Taladro(peso, longitud, potencia)
{
    setNombre("Taladro percutor");
    _golpesPorMinuto = golpesPorMinuto;
}

int TaladroPercutor::getGolpesPorMinuto()
{
    return _golpesPorMinuto;
}

void TaladroPercutor::setGolpesPorMinuto(int golpesPorMinuto)
{
    _golpesPorMinuto = golpesPorMinuto;
}

void TaladroPercutor::mostrarInformacion()
{
    Taladro::mostrarInformacion();
    cout << "Golpes por minuto: " << _golpesPorMinuto << endl << endl;
}
