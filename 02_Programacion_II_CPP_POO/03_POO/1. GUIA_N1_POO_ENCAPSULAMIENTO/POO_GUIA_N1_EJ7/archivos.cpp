#pragma once
#include "Usuario.h"
#include <string>

using namespace std;

Usuario::Usuario(string nuevo_nombre, string nueva_clave, string nuevo_rol)
{
    nombre = nuevo_nombre;
    clave = nueva_clave;
    rol = nuevo_rol;
}

string Usuario::getNombre()
{
    return nombre;
}

string Usuario::getClave()
{
    return clave;
}

string Usuario::getRol()
{
    return rol;
}

void Usuario::setNombre(string nuevo_nombre)
{
    nombre = nuevo_nombre;
}

void Usuario::setClave(string nueva_clave)
{
    clave = nueva_clave;
}

void Usuario::setRol(string nuevo_rol)
{
    rol = nuevo_rol;
}
