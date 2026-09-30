#include "Inmuebles.h"
#include <iostream>
#include <cstring>
using namespace std;

/// CONSTRUCTOR VACIO DE INMUEBLES
Inmuebles::Inmuebles()
{
    _codigo_de_inmueble = 0;
    _calle[0] = '\0';
    _numero[0] = '\0';
    _localidad[0] = '\0';
    _precio_venta = 0;
    _precio_alquiler = 0;
    _apellido_del_duenio[0] = '\0';
    _nombre_del_duenio[0] = '\0';
    _dni_del_duenio[0] = '\0';
    _celular_del_duenio[0] = '\0';
}

/// GETTERS DE INMUEBLES
int Inmuebles::getCodigo_de_inmueble()
{
    return _codigo_de_inmueble;
}

float Inmuebles::getPrecio_venta()
{
    return _precio_venta;
}

float Inmuebles::getPrecio_alquiler()
{
    return _precio_alquiler;
}

/// SETTERS DE INMUEBLES
void Inmuebles::setCodigo_de_inmueble(int codigo_de_inmueble)
{
    _codigo_de_inmueble = codigo_de_inmueble;
}

void Inmuebles::setCalle(char calle[50])
{
    strcpy(_calle, calle);
}

void Inmuebles::setNumero(char numero[6])
{
    strcpy(_numero, numero);
}

void Inmuebles::setLocalidad(char localidad[50])
{
    strcpy(_localidad, localidad);
}

void Inmuebles::setPrecio_venta(float precio_venta)
{
    _precio_venta = precio_venta;
}

void Inmuebles::setPrecio_alquiler(float precio_alquiler)
{
    _precio_alquiler = precio_alquiler;
}

void Inmuebles::setApellido_del_duenio(char apellido_del_duenio[50])
{
    strcpy(_apellido_del_duenio, apellido_del_duenio);
}

void Inmuebles::setNombre_del_duenio(char nombre_del_duenio[50])
{
    strcpy(_nombre_del_duenio, nombre_del_duenio);
}

void Inmuebles::setDni_del_duenio(char dni_del_duenio[12])
{
    strcpy(_dni_del_duenio, dni_del_duenio);
}

void Inmuebles::setCelular_del_duenio(char celular_del_duenio[15])
{
    strcpy(_celular_del_duenio, celular_del_duenio);
}

/// PEDIR DATOS DE INMUEBLES AL USUARIO
void Inmuebles::pedirDatos()
{
    int codigo_de_inmueble;
    cout << "INGRESE EL CODIGO DEL INMUEBLE: ";
    cin >> codigo_de_inmueble;
    cin.ignore();
    setCodigo_de_inmueble(codigo_de_inmueble);

    char calle[50];
    cout << "INGRESE LA CALLE: ";
    cin.getline(calle, 50);
    setCalle(calle);

    char numero[6];
    cout << "INGRESE EL NUMERO: ";
    cin.getline(numero, 6);
    setNumero(numero);

    char localidad[50];
    cout << "INGRESE LA LOCALIDAD: ";
    cin.getline(localidad, 50);
    setLocalidad(localidad);

    float precio_venta;
    cout << "INGRESE EL PRECIO DE VENTA (0 SI NO ESTA EN VENTA): ";
    cin >> precio_venta;
    cin.ignore();
    setPrecio_venta(precio_venta);

    float precio_alquiler;
    cout << "INGRESE EL PRECIO DE ALQUILER (0 SI NO ESTA EN ALQUILER): ";
    cin >> precio_alquiler;
    cin.ignore();
    setPrecio_alquiler(precio_alquiler);

    char apellido_del_duenio[50];
    cout << "INGRESE EL APELLIDO DEL DUEÑO: ";
    cin.getline(apellido_del_duenio, 50);
    setApellido_del_duenio(apellido_del_duenio);

    char nombre_del_duenio[50];
    cout << "INGRESE EL NOMBRE DEL DUEÑO: ";
    cin.getline(nombre_del_duenio, 50);
    setNombre_del_duenio(nombre_del_duenio);

    char dni_del_duenio[12];
    cout << "INGRESE EL DNI DEL DUEÑO: ";
    cin.getline(dni_del_duenio, 12);
    setDni_del_duenio(dni_del_duenio);

    char celular_del_duenio[15];
    cout << "INGRESE EL CELULAR DEL DUEÑO: ";
    cin.getline(celular_del_duenio, 15);
    setCelular_del_duenio(celular_del_duenio);
}

/// MOSTRAR DATOS DE INMUEBLES EN PANTALLA
void Inmuebles::mostrarInformacion()
{
    cout << "--- INFORMACION DEL INMUEBLE ---" << endl;
    cout << "CODIGO: " << _codigo_de_inmueble << endl;
    cout << "CALLE: " << _calle << endl;
    cout << "NUMERO: " << _numero << endl;
    cout << "LOCALIDAD: " << _localidad << endl;

    if (_precio_venta > 0)
    {
        cout << "PRECIO DE VENTA: $" << _precio_venta << endl;
    }
    else
    {
        cout << "NO ESTA EN VENTA" << endl;
    }

    if (_precio_alquiler > 0)
    {
        cout << "PRECIO DE ALQUILER: $" << _precio_alquiler << endl;
    }
    else
    {
        cout << "NO ESTA EN ALQUILER" << endl;
    }

    cout << "DUEÑO: " << _nombre_del_duenio << " " << _apellido_del_duenio << endl;
    cout << "DNI DEL DUEÑO: " << _dni_del_duenio << endl;
    cout << "CELULAR DEL DUEÑO: " << _celular_del_duenio << endl;
}
