#pragma once
#include <string>

class Postulante
{
private:
    std::string nombre;
    int edad;
    std::string puesto;
    int anios_de_experiencia;

public:
    Postulante(std::string nombre_ingresado, int edad_ingresada, std::string puesto_ingresado, int anios_de_experiencia_ingresados);
    void setNombre (std::string nuevo_nombre);
    void setEdad (int nueva_edad);
    void setPuesto (std::string nuevo_puesto);
    void setAnios_de_experiencia (int nuevo_anios_de_experiencia);

    std::string getNombre() const;
    int getEdad() const;
    std::string getPuesto() const;
    int getAnios_de_experiencia() const;

};
