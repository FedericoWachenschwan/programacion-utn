#pragma once
#include "Inmuebles.h"

/// CLASE DEPARTAMENTOS: HEREDA DE INMUEBLES Y AGREGA LOS DATOS PROPIOS DE UN DEPARTAMENTO
class Departamentos : public Inmuebles
{
private:

    /// ATRIBUTOS PROPIOS DE DEPARTAMENTOS
    char _piso[3];
    char _departamento[3];
    int _antiguedad_construccion;
    float _superficie_total_m2;
    float _superficie_cubierta_m2;
    int _habitaciones;
    float _superficie_balcon_m2;
    bool _con_cochera;
    float _costo_expensa;

public:

    /// CONSTRUCTOR VACIO DE DEPARTAMENTOS
    Departamentos();

    /// GETTERS DE DEPARTAMENTOS
    int getAntiguedad_construccion();
    float getSuperficie_total_m2();
    float getSuperficie_cubierta_m2();
    int getHabitaciones();
    float getSuperficie_balcon_m2();
    bool getCon_cochera();
    float getCosto_expensa();

    /// SETTERS DE DEPARTAMENTOS
    void setPiso(char piso[3]);
    void setDepartamento(char departamento[3]);
    void setAntiguedad_construccion(int antiguedad_construccion);
    void setSuperficie_total_m2(float superficie_total_m2);
    void setSuperficie_cubierta_m2(float superficie_cubierta_m2);
    void setHabitaciones(int habitaciones);
    void setSuperficie_balcon_m2(float superficie_balcon_m2);
    void setCon_cochera(bool con_cochera);
    void setCosto_expensa(float costo_expensa);

    /// PEDIR Y MOSTRAR DATOS DE DEPARTAMENTOS
    void pedirDatos();
    void mostrarInformacion();
};
