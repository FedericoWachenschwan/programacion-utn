#pragma once
#include "Inmuebles.h"

/// CLASE LOCALES: HEREDA DE INMUEBLES Y AGREGA LOS DATOS PROPIOS DE UN LOCAL
class Locales : public Inmuebles
{
private:

    /// ATRIBUTOS PROPIOS DE LOCALES
    int _antiguedad_construccion;
    float _superficie_total_m2;
    float _superficie_estacionamiento_m2;
    bool _zona_comercial;

public:

    /// CONSTRUCTOR VACIO DE LOCALES
    Locales();

    /// GETTERS DE LOCALES
    int getAntiguedad_construccion();
    float getSuperficie_total_m2();
    float getSuperficie_estacionamiento_m2();
    bool getZona_comercial();

    /// SETTERS DE LOCALES
    void setAntiguedad_construccion(int antiguedad_construccion);
    void setSuperficie_total_m2(float superficie_total_m2);
    void setSuperficie_estacionamiento_m2(float superficie_estacionamiento_m2);
    void setZona_comercial(bool zona_comercial);

    /// PEDIR Y MOSTRAR DATOS DE LOCALES
    void pedirDatos();
    void mostrarInformacion();
};
