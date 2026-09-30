#pragma once
#include <string>

class Libro
{
private:
    int isbn, dia_de_publicacion, mes_de_publicacion, anio_de_publicacion, cant_ejemplares;
    std::string nombre_del_libro, nombre_del_autor;

public:
    Libro(int nuevo_isbn, int nuevo_dia_de_publicacion, int nuevo_mes_de_publicacion, int nuevo_anio_de_publicacion, int nuevo_cant_ejemplares,
           std::string nuevo_nombre_del_libro, std::string nuevo_nombre_del_autor);

    ///GETTERS
    int getISBN() const;
    int getDia_de_publicacion() const;
    int getMes_de_publicacion() const;
    int getAnio_de_publicacion() const;
    int getCant_ejemplares() const;
    std::string getNombre_del_libro() const;
    std::string getNombre_del_autor() const;

};

