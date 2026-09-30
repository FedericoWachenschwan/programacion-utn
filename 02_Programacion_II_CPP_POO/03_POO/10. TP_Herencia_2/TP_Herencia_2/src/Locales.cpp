#include "Locales.h"
#include <iostream>
using namespace std;

/// CONSTRUCTOR VACIO DE LOCALES
Locales::Locales()
{
    _antiguedad_construccion = 0;
    _superficie_total_m2 = 0;
    _superficie_estacionamiento_m2 = 0;
    _zona_comercial = false;
}

/// GETTERS DE LOCALES
int Locales::getAntiguedad_construccion()
{
    return _antiguedad_construccion;
}

float Locales::getSuperficie_total_m2()
{
    return _superficie_total_m2;
}

float Locales::getSuperficie_estacionamiento_m2()
{
    return _superficie_estacionamiento_m2;
}

bool Locales::getZona_comercial()
{
    return _zona_comercial;
}

/// SETTERS DE LOCALES
void Locales::setAntiguedad_construccion(int antiguedad_construccion)
{
    _antiguedad_construccion = antiguedad_construccion;
}

void Locales::setSuperficie_total_m2(float superficie_total_m2)
{
    _superficie_total_m2 = superficie_total_m2;
}

void Locales::setSuperficie_estacionamiento_m2(float superficie_estacionamiento_m2)
{
    _superficie_estacionamiento_m2 = superficie_estacionamiento_m2;
}

void Locales::setZona_comercial(bool zona_comercial)
{
    _zona_comercial = zona_comercial;
}

/// PEDIR DATOS DE LOCALES AL USUARIO
void Locales::pedirDatos()
{
    // PEDIMOS PRIMERO LOS DATOS COMUNES QUE LOCALES HEREDA DE INMUEBLES
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

    float superficie_estacionamiento_m2;
    cout << "INGRESE LA SUPERFICIE DE ESTACIONAMIENTO EN M2: ";
    cin >> superficie_estacionamiento_m2;
    cin.ignore();
    setSuperficie_estacionamiento_m2(superficie_estacionamiento_m2);

    int opcion_zona_comercial;
    cout << "ESTA EN ZONA COMERCIAL? INGRESE 1 PARA SI, 0 PARA NO: ";
    cin >> opcion_zona_comercial;
    cin.ignore();

    if (opcion_zona_comercial == 1)
    {
        setZona_comercial(true);
    }
    else
    {
        setZona_comercial(false);
    }
}

/// MOSTRAR DATOS DE LOCALES EN PANTALLA
void Locales::mostrarInformacion()
{
    // MOSTRAMOS PRIMERO LOS DATOS COMUNES QUE LOCALES HEREDA DE INMUEBLES
    Inmuebles::mostrarInformacion();

    cout << "ANTIGUEDAD DE CONSTRUCCION: " << _antiguedad_construccion << " AÑOS" << endl;
    cout << "SUPERFICIE TOTAL: " << _superficie_total_m2 << " M2" << endl;
    cout << "SUPERFICIE DE ESTACIONAMIENTO: " << _superficie_estacionamiento_m2 << " M2" << endl;

    if (_zona_comercial == true)
    {
        cout << "ZONA COMERCIAL: SI" << endl;
    }
    else
    {
        cout << "ZONA COMERCIAL: NO" << endl;
    }
}
