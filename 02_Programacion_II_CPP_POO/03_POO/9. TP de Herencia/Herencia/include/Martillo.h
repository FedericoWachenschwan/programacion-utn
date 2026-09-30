#pragma once
#include "Herramienta.h"
#include <string>

class Martillo: public  Herramienta
{
private:
    std::string _tipoCabeza;

public:
    Martillo(float peso, float longitud, std::string tipoCabeza);
    void setTipoCabeza(std::string tipoCabeza);
    std::string getTipoCabeza();
    void mostrarInformacion();

};
