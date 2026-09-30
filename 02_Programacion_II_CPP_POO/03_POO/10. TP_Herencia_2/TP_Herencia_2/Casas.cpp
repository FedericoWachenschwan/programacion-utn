#include "Casas.h"
#include <iostream>
using namespace std;

/// CONSTRUCTOR VACIO DE CASAS
Casas::Casas()
{
    _antiguedad_construccion = 0;
    _superficie_total_m2 = 0;
    _superficie_cubierta_m2 = 0;
    _habitaciones = 0;
}

/// GETTERS DE CASAS
int Casas::getAntiguedad_construccion()
{
    return _antiguedad_construccion;
}

float Casas::getSuperficie_total_m2()
{
    return _superficie_total_m2;
}

float Casas::getSuperficie_cubierta_m2()
{
    return _superficie_cubierta_m2;
}

int Casas::getHabitaciones()
{
    return _habitaciones;
}

/// SETTERS DE CASAS
void Casas::setAntiguedad_construccion(int antiguedad_construccion)
{
    _antiguedad_construccion = antiguedad_construccion;
}

void Casas::setSuperficie_total_m2(float superficie_total_m2)
{
    _superficie_total_m2 = superficie_total_m2;
}

void Casas::setSuperficie_cubierta_m2(float superficie_cubierta_m2)
{
    _superficie_cubierta_m2 = superficie_cubierta_m2;
}

void Casas::setHabitaciones(int habitaciones)
{
    _habitaciones = habitaciones;
}

/// PEDIR DATOS DE CASAS AL USUARIO
void Casas::pedirDatos()
{
    // PEDIMOS PRIMERO LOS DATOS COMUNES QUE CASAS HEREDA DE INMUEBLES
    Inmuebles::pedirDatos();

    int antiguedad_construccion;
    cout << "INGRESE LA ANTIGUEDAD DE CONSTRUCCION (EN AÑOS): ";
    cin >> antiguedad_construccion;
    cin.ignore();
    setAntiguedad_construccion(antiguedad_construccion);

    float superficie_total_m2;
    cout << "INGRESE LA SUPERFICIE TOTAL EN M2: ";
    cin >> superficie_total_m2;
    cin.ignore();
    setSuperficie_total_m2(superficie_total_m2);

    float superficie_cubierta_m2;
    cout << "INGRESE LA SUPERFICIE CUBIERTA EN M2: ";
    cin >> superficie_cubierta_m2;
    cin.ignore();
    setSuperficie_cubierta_m2(superficie_cubierta_m2);

    int habitaciones;
    cout << "INGRESE LA CANTIDAD DE HABITACIONES: ";
    cin >> habitaciones;
    cin.ignore();
    setHabitaciones(habitaciones);
}

/// MOSTRAR DATOS DE CASAS EN PANTALLA
void Casas::mostrarInformacion()
{
    // MOSTRAMOS PRIMERO LOS DATOS COMUNES QUE CASAS HEREDA DE INMUEBLES
    Inmuebles::mostrarInformacion();

    cout << "ANTIGUEDAD DE CONSTRUCCION: " << _antiguedad_construccion << " AÑOS" << endl;
    cout << "SUPERFICIE TOTAL: " << _superficie_total_m2 << " M2" << endl;
    cout << "SUPERFICIE CUBIERTA: " << _superficie_cubierta_m2 << " M2" << endl;
    cout << "HABITACIONES: " << _habitaciones << endl;
}
