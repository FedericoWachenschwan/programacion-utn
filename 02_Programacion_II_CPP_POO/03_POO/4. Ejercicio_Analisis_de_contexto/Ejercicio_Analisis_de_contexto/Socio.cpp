#include <iostream>
#include "Socio.h"
#include <string>

using namespace std;

Socio::Socio(int nuevo_dni, std::string nuevo_nombre, std::string nuevo_apellido, int nuevo_numero_de_telefono, std::string nuevo_mail, int nuevo_dia,
              int nuevo_mes ,int nuevo_anio, int nuevo_numero_de_socio)
{
    dni = nuevo_dni;
    nombre = nuevo_nombre;
    apellido = nuevo_apellido;
    numero_de_telefono = nuevo_numero_de_telefono;
    mail = nuevo_mail;
    dia = nuevo_dia;
    mes = nuevo_mes;
    anio = nuevo_anio;
    numero_de_socio = nuevo_numero_de_socio;
}

///GETTERS
int Socio::getDNI() const
{
    return dni;
}

int Socio::getNumeroDeTelefono() const
{
    return numero_de_telefono;
}

int Socio::getDia() const
{
    return dia;
}

int Socio::getMes() const
{
    return mes;
}

int Socio::getAnio() const
{
    return anio;
}

int Socio::getNumeroDeSocio() const
{
    return numero_de_socio;
}

std::string Socio::getNombre() const
{
    return nombre;
}

std::string Socio::getApellido() const
{
    return apellido;
}

std::string Socio::getMail() const
{
    return mail;
}

///SETTERS
void Socio::setNuevoNumeroDeTelefono(int nuevo_num_telefono)
{
    numero_de_telefono = nuevo_num_telefono;
}

void Socio::setNuevoMail(std::string nuevo_mail)
{
    mail = nuevo_mail;
}
