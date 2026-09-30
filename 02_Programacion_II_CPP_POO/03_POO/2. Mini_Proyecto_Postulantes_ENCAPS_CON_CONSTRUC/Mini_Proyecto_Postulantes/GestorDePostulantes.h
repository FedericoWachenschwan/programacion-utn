#pragma once
#include "Postulante.h"
#include <string>

class GestorDePostulantes
{
private:
    int contador_personas_evaluadas = 0;
    int contador_personas_rechazadas = 0;

public:
    bool evaluar_edad(const Postulante& p);
    bool evaluar_anios_de_experiencia(const Postulante& p);
    bool evaluar_puesto(const Postulante& p);

    bool esApto (const Postulante& p);
    int getContador_personas_evaluadas();
    int getContador_personas_rechazadas();

};
