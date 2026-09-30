#pragma once
#include "Herramienta.h"
#include "string"

class Taladro : public Herramienta
{
private:
    float _potencia;

public:
    Taladro(float peso, float longitud, float potencia);

    ///GETTERS:
    float getPotencia();

    ///SETTERS:
    void setPotencia(float potencia);

    ///METODOS:
    void mostrarInformacion();
};
