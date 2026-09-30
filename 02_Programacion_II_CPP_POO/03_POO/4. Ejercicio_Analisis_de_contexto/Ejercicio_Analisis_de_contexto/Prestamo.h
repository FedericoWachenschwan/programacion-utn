#pragma once

class Prestamo
{
private:

    int isbnLibro, dniSocio, dia_prestamo, mes_prestamo, anio_prestamo, dia_devolucion, mes_devolucion, anio_devolucion;

public:
    Prestamo(int isbn_nuevo_libroPrestado, int dni_nuevo_socioPrestamo, int nuevo_dia_prestamo, int nuevo_mes_prestamo, int nuevo_anio_prestamo, int nuevo_dia_devolucion,
              int nuevo_mes_devolucion, int nuevo_anio_devolucion);

    ///GETTERS
    int getIsbnLibro() const;
    int getDniSocio() const;
    int getDia_prestamo() const;
    int getMes_prestamo() const;
    int getAnio_prestamo() const;
    int getDia_devolucion() const;
    int getMes_devolucion() const;
    int getAnio_devolucion() const;

    ///SETTERS
    void setDia_devolucion(int nuevo_dia_devolucion);
    void setMes_devolucion(int nuevo_mes_devolucion);
    void setAnio_devolucion(int nuevo_anio_devolucion);
};
