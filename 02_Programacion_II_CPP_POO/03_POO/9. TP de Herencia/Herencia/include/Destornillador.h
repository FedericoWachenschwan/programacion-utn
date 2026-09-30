#pragma once
#include "Herramienta.h"
#include "string"

class Destornillador: public Herramienta
{
private:
    std::string _tipoPunta;

public:
    Destornillador(float peso, float longitud, std::string tipoPunta);

    ///GETTERS:
    std::string getTipoPunta();

    ///SETTERS:
    void setTipoPunta(std::string tipoPunta);

    ///MÉTODOS:
    void mostrarInformacion();

};
