#pragma once
#include "Inmuebles.h"

/// CLASE CASAS: HEREDA DE INMUEBLES Y AGREGA LOS DATOS PROPIOS DE UNA CASA
class Casas : public Inmuebles
{
private:

    /// ATRIBUTOS PROPIOS DE CASAS
    int _antiguedad_construccion;
    float _superficie_total_m2;
    float _superficie_cubierta_m2;
    int _habitaciones;

public:

    /// CONSTRUCTOR VACIO DE CASAS
    Casas();

    /// GETTERS DE CASAS
    int getAntiguedad_construccion();
    float getSuperficie_total_m2();
    float getSuperficie_cubierta_m2();
    int getHabitaciones();

    /// SETTERS DE CASAS
    void setAntiguedad_construccion(int antiguedad_construccion);
    void setSuperficie_total_m2(float superficie_total_m2);
    void setSuperficie_cubierta_m2(float superficie_cubierta_m2);
    void setHabitaciones(int habitaciones);

    /// PEDIR Y MOSTRAR DATOS DE CASAS
    void pedirDatos();
    void mostrarInformacion();
};
