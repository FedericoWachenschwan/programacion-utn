#include "Persona.h"
#include <string>

Persona::Persona()
{
    _apellido = "";
    _nombre = "";
}
Persona::Persona(std::string apellido, std::string nombre)
{
    _apellido = apellido;
    _nombre = nombre;
}

/// GETTERS:
std::string Persona::getApellido()
{
    return _apellido;
}

std::string Persona::getNombre()
{
    return _nombre;
}

/// SETTERS:
void Persona::setApellido(std::string apellido)
{
    _apellido = apellido;
}

void Persona::setNombre(std::string nombre)
{
    _nombre = nombre;
}
