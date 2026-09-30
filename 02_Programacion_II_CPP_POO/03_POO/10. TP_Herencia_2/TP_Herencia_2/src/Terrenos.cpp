#include "Terrenos.h"
#include <iostream>
using namespace std;

/// CONSTRUCTOR VACIO DE TERRENOS
Terrenos::Terrenos()
{
    _ancho_en_metros = 0;
    _largo_en_metros = 0;
    _superficie_construible_m2 = 0;
}

/// GETTERS DE TERRENOS
float Terrenos::getAncho_en_metros()
{
    return _ancho_en_metros;
}

float Terrenos::getLargo_en_metros()
{
    return _largo_en_metros;
}

float Terrenos::getSuperficie_construible_m2()
{
    return _superficie_construible_m2;
}

/// SETTERS DE TERRENOS
void Terrenos::setAncho_en_metros(float ancho_en_metros)
{
    _ancho_en_metros = ancho_en_metros;
}

void Terrenos::setLargo_en_metros(float largo_en_metros)
{
    _largo_en_metros = largo_en_metros;
}

void Terrenos::setSuperficie_construible_m2(float superficie_construible_m2)
{
    _superficie_construible_m2 = superficie_construible_m2;
}

/// PEDIR DATOS DE TERRENOS AL USUARIO
void Terrenos::pedirDatos()
{
    // PEDIMOS PRIMERO LOS DATOS COMUNES QUE TERRENOS HEREDA DE INMUEBLES
    Inmuebles::pedirDatos();

    float ancho_en_metros;
    cout << "INGRESE EL ANCHO DEL TERRENO EN METROS: ";
    cin >> ancho_en_metros;
    cin.ignore();
    setAncho_en_metros(ancho_en_metros);

    float largo_en_metros;
    cout << "INGRESE EL LARGO DEL TERRENO EN METROS: ";
    cin >> largo_en_metros;
    cin.ignore();
    setLargo_en_metros(largo_en_metros);

    float superficie_construible_m2;
    cout << "INGRESE LA SUPERFICIE CONSTRUIBLE EN M2: ";
    cin >> superficie_construible_m2;
    cin.ignore();
    setSuperficie_construible_m2(superficie_construible_m2);
}

/// MOSTRAR DATOS DE TERRENOS EN PANTALLA
void Terrenos::mostrarInformacion()
{
    // MOSTRAMOS PRIMERO LOS DATOS COMUNES QUE TERRENOS HEREDA DE INMUEBLES
    Inmuebles::mostrarInformacion();

    cout << "ANCHO: " << _ancho_en_metros << " METROS" << endl;
    cout << "LARGO: " << _largo_en_metros << " METROS" << endl;
    cout << "SUPERFICIE CONSTRUIBLE: " << _superficie_construible_m2 << " M2" << endl;
}
