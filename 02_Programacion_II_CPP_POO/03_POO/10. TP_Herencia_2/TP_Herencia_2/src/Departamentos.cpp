#include "Departamentos.h"
#include <iostream>
#include <cstring>
using namespace std;

/// CONSTRUCTOR VACIO DE DEPARTAMENTOS
Departamentos::Departamentos()
{
    _piso[0] = '\0';
    _departamento[0] = '\0';
    _antiguedad_construccion = 0;
    _superficie_total_m2 = 0;
    _superficie_cubierta_m2 = 0;
    _habitaciones = 0;
    _superficie_balcon_m2 = 0;
    _con_cochera = false;
    _costo_expensa = 0;
}

/// GETTERS DE DEPARTAMENTOS
int Departamentos::getAntiguedad_construccion()
{
    return _antiguedad_construccion;
}

float Departamentos::getSuperficie_total_m2()
{
    return _superficie_total_m2;
}

float Departamentos::getSuperficie_cubierta_m2()
{
    return _superficie_cubierta_m2;
}

int Departamentos::getHabitaciones()
{
    return _habitaciones;
}

float Departamentos::getSuperficie_balcon_m2()
{
    return _superficie_balcon_m2;
}

bool Departamentos::getCon_cochera()
{
    return _con_cochera;
}

float Departamentos::getCosto_expensa()
{
    return _costo_expensa;
}

/// SETTERS DE DEPARTAMENTOS
void Departamentos::setPiso(char piso[3])
{
    strcpy(_piso, piso);
}

void Departamentos::setDepartamento(char departamento[3])
{
    strcpy(_departamento, departamento);
}

void Departamentos::setAntiguedad_construccion(int antiguedad_construccion)
{
    _antiguedad_construccion = antiguedad_construccion;
}

void Departamentos::setSuperficie_total_m2(float superficie_total_m2)
{
    _superficie_total_m2 = superficie_total_m2;
}

void Departamentos::setSuperficie_cubierta_m2(float superficie_cubierta_m2)
{
    _superficie_cubierta_m2 = superficie_cubierta_m2;
}

void Departamentos::setHabitaciones(int habitaciones)
{
    _habitaciones = habitaciones;
}

void Departamentos::setSuperficie_balcon_m2(float superficie_balcon_m2)
{
    _superficie_balcon_m2 = superficie_balcon_m2;
}

void Departamentos::setCon_cochera(bool con_cochera)
{
    _con_cochera = con_cochera;
}

void Departamentos::setCosto_expensa(float costo_expensa)
{
    _costo_expensa = costo_expensa;
}

/// PEDIR DATOS DE DEPARTAMENTOS AL USUARIO
void Departamentos::pedirDatos()
{
    // PEDIMOS PRIMERO LOS DATOS COMUNES QUE DEPARTAMENTOS HEREDA DE INMUEBLES
    Inmuebles::pedirDatos();

    char piso[3];
    cout << "INGRESE EL PISO: ";
    cin.getline(piso, 3);
    setPiso(piso);

    char departamento[3];
    cout << "INGRESE EL NUMERO DE DEPARTAMENTO: ";
    cin.getline(departamento, 3);
    setDepartamento(departamento);

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

    float superficie_balcon_m2;
    cout << "INGRESE LA SUPERFICIE DEL BALCON EN M2: ";
    cin >> superficie_balcon_m2;
    cin.ignore();
    setSuperficie_balcon_m2(superficie_balcon_m2);

    int opcion_cochera;
    cout << "TIENE COCHERA? INGRESE 1 PARA SI, 0 PARA NO: ";
    cin >> opcion_cochera;
    cin.ignore();

    if (opcion_cochera == 1)
    {
        setCon_cochera(true);
    }
    else
    {
        setCon_cochera(false);
    }

    float costo_expensa;
    cout << "INGRESE EL COSTO DE EXPENSA: ";
    cin >> costo_expensa;
    cin.ignore();
    setCosto_expensa(costo_expensa);
}

/// MOSTRAR DATOS DE DEPARTAMENTOS EN PANTALLA
void Departamentos::mostrarInformacion()
{
    // MOSTRAMOS PRIMERO LOS DATOS COMUNES QUE DEPARTAMENTOS HEREDA DE INMUEBLES
    Inmuebles::mostrarInformacion();

    cout << "PISO: " << _piso << endl;
    cout << "DEPARTAMENTO: " << _departamento << endl;
    cout << "ANTIGUEDAD DE CONSTRUCCION: " << _antiguedad_construccion << " AÑOS" << endl;
    cout << "SUPERFICIE TOTAL: " << _superficie_total_m2 << " M2" << endl;
    cout << "SUPERFICIE CUBIERTA: " << _superficie_cubierta_m2 << " M2" << endl;
    cout << "HABITACIONES: " << _habitaciones << endl;
    cout << "SUPERFICIE BALCON: " << _superficie_balcon_m2 << " M2" << endl;

    if (_con_cochera == true)
    {
        cout << "COCHERA: SI TIENE" << endl;
    }
    else
    {
        cout << "COCHERA: NO TIENE" << endl;
    }

    cout << "COSTO DE EXPENSA: $" << _costo_expensa << endl;
}
