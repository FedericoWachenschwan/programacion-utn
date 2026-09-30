#include <iostream>
#include "GestorDePostulantes.h"
#include "Postulante.h"

using namespace std;

bool GestorDePostulantes::evaluar_edad(const Postulante& p)
{
    if (p.getEdad() >= 22 && p.getEdad() <= 50)
    {
        return true;
    }
    return false;
}

bool GestorDePostulantes::evaluar_anios_de_experiencia(const Postulante& p)
{
    if (p.getAnios_de_experiencia() >= 2)
    {
        return true;
    }

    return false;
}

bool GestorDePostulantes::evaluar_puesto(const Postulante& p)
{
    if (p.getPuesto() == "Programador" || p.getPuesto() == "Tester" || p.getPuesto() == "Diseñador")
    {
        return true;
    }

    return false;
}

bool GestorDePostulantes::esApto(const Postulante& p)
{

    contador_personas_evaluadas++;

    if (evaluar_edad(p) && evaluar_anios_de_experiencia(p) && evaluar_puesto(p))
    {

        return true;
    }
    else
    {
        contador_personas_rechazadas++;
        return false;
    }
}

int GestorDePostulantes::getContador_personas_evaluadas()
{
    return contador_personas_evaluadas;
}

int GestorDePostulantes::getContador_personas_rechazadas()
{
    return contador_personas_rechazadas;
}
