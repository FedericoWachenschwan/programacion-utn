#pragma once
#include <string>

class Fecha
{
private:
    int diasDelMes(int mes, int anio);

    /// Actividad 1
    int _dia;
    int _mes;
    int _anio;

    /// Actividad 5
    void agregarDia();
    void restarDia();

public:

    /// Actividad 2
    ///GETTERS:
    int getDia();
    int getMes();
    int getAnio();

    ///SETTERS:
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    /// Actividad 3
    Fecha(int dia, int mes, int anio);

    /// Actividad 4
    Fecha();

    /// Actividad 6
    void agregarDias(int dias);

    /// Actividad 7
    std::string toString();
};




