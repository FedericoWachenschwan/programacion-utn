#include <iostream>
#include "Postulante.h"
#include <string>

using namespace std;

Postulante::Postulante(std::string nombre_ingresado, int edad_ingresada, std::string puesto_ingresado, int anios_de_experiencia_ingresados)
{
    nombre = nombre_ingresado;
    edad = edad_ingresada;
    puesto = puesto_ingresado;
    anios_de_experiencia = anios_de_experiencia_ingresados;
}

///SETTERS

void Postulante::setNombre(std::string nuevo_nombre)
{
    nombre = nuevo_nombre;
}

void Postulante::setEdad(int nueva_edad)
{
    edad = nueva_edad;
}

void Postulante::setPuesto(std::string nuevo_puesto)
{
    puesto = nuevo_puesto;
}

void Postulante::setAnios_de_experiencia(int nuevo_anios_de_experiencia)
{
    anios_de_experiencia = nuevo_anios_de_experiencia;
}

///GETTERS

std::string Postulante::getNombre() const
{
    return nombre;
}

int Postulante::getEdad() const
{
    return edad;
}

std::string Postulante::getPuesto() const
{
    return puesto;
}

int Postulante::getAnios_de_experiencia() const
{
    return anios_de_experiencia;
}
