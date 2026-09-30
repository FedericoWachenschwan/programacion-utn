#pragma once
#include "Inmuebles.h"

/// CLASE TERRENOS: HEREDA DE INMUEBLES Y AGREGA LOS DATOS PROPIOS DE UN TERRENO
class Terrenos : public Inmuebles
{
private:

    /// ATRIBUTOS PROPIOS DE TERRENOS
    float _ancho_en_metros;
    float _largo_en_metros;
    float _superficie_construible_m2;

public:

    /// CONSTRUCTOR VACIO DE TERRENOS
    Terrenos();

    /// GETTERS DE TERRENOS
    float getAncho_en_metros();
    float getLargo_en_metros();
    float getSuperficie_construible_m2();

    /// SETTERS DE TERRENOS
    void setAncho_en_metros(float ancho_en_metros);
    void setLargo_en_metros(float largo_en_metros);
    void setSuperficie_construible_m2(float superficie_construible_m2);

    /// PEDIR Y MOSTRAR DATOS DE TERRENOS
    void pedirDatos();
    void mostrarInformacion();
};
