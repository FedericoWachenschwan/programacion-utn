#include <iostream>
#include "Libro.h"

using namespace std;

Libro::Libro(int nuevo_isbn, int nuevo_dia_de_publicacion, int nuevo_mes_de_publicacion, int nuevo_anio_de_publicacion, int nuevo_cant_ejemplares,
        std::string nuevo_nombre_del_libro, std::string nuevo_nombre_del_autor)
{
    isbn = nuevo_isbn;
    dia_de_publicacion = nuevo_dia_de_publicacion;
    mes_de_publicacion = nuevo_mes_de_publicacion;
    anio_de_publicacion = nuevo_anio_de_publicacion;
    cant_ejemplares = nuevo_cant_ejemplares;
    nombre_del_libro = nuevo_nombre_del_libro;
    nombre_del_autor = nuevo_nombre_del_autor;
}

///GETTERS
int Libro::getISBN() const
{
    return isbn;
}

int Libro::getDia_de_publicacion() const
{
    return dia_de_publicacion;
}

int Libro::getMes_de_publicacion() const
{
    return mes_de_publicacion;
}

int Libro::getAnio_de_publicacion() const
{
    return anio_de_publicacion;
}

int Libro::getCant_ejemplares() const
{
    return cant_ejemplares;
}

std::string Libro::getNombre_del_libro() const
{
    return nombre_del_libro;
}

std::string Libro::getNombre_del_autor() const
{
    return nombre_del_autor;
}
