#include <iostream>
#include "Prestamo.h"

using namespace std;

Prestamo::Prestamo(int isbn_nuevo_libroPrestado, int dni_nuevo_socioPrestamo,
                   int nuevo_dia_prestamo, int nuevo_mes_prestamo, int nuevo_anio_prestamo,
                   int nuevo_dia_devolucion, int nuevo_mes_devolucion, int nuevo_anio_devolucion)
{
    isbnLibro = isbn_nuevo_libroPrestado;
    dniSocio  = dni_nuevo_socioPrestamo;
    dia_prestamo = nuevo_dia_prestamo;
    mes_prestamo = nuevo_mes_prestamo;
    anio_prestamo = nuevo_anio_prestamo;
    dia_devolucion = nuevo_dia_devolucion;
    mes_devolucion = nuevo_mes_devolucion;
    anio_devolucion = nuevo_anio_devolucion;
}

/// GETTERS
int Prestamo::getIsbnLibro() const
{
    return isbnLibro;
}
int Prestamo::getDniSocio()  const
{
    return dniSocio;
}

int Prestamo::getDia_prestamo() const
{
    return dia_prestamo;
}

int Prestamo::getMes_prestamo() const
{
    return mes_prestamo;
}
int Prestamo::getAnio_prestamo() const
{
    return anio_prestamo;
}

int Prestamo::getDia_devolucion() const
{
    return dia_devolucion;
}

int Prestamo::getMes_devolucion() const
{
    return mes_devolucion;
}

int Prestamo::getAnio_devolucion() const
{
    return anio_devolucion;
}

/// SETTERS
void Prestamo::setDia_devolucion(int nuevo_dia_devolucion)
{
    dia_devolucion = nuevo_dia_devolucion;
}

void Prestamo::setMes_devolucion(int nuevo_mes_devolucion)
{
    mes_devolucion = nuevo_mes_devolucion;
}

void Prestamo::setAnio_devolucion(int nuevo_anio_devolucion)
{
    anio_devolucion = nuevo_anio_devolucion;
}
