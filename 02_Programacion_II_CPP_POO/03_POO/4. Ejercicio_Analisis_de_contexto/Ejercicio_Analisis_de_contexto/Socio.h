#pragma once
#include <string>

class Socio
{
private:
    int dni, numero_de_telefono, dia, mes, anio, numero_de_socio;
    std::string nombre, apellido, mail;

public:
    Socio(int nuevo_dni, std::string nuevo_nombre, std::string nuevo_apellido, int nuevo_numero_de_telefono,
          std::string nuevo_mail, int nuevo_dia, int nuevo_mes ,int nuevo_anio, int nuevo_numero_de_socio);

    ///GETTERS
    int getDNI() const;
    int getNumeroDeTelefono() const;
    int getDia() const;
    int getMes() const;
    int getAnio() const;
    int getNumeroDeSocio() const;
    std::string getNombre() const;
    std::string getApellido() const;
    std::string getMail() const;

    ///SETTERS
    void setNuevoNumeroDeTelefono(int nuevo_num_telefono);
    void setNuevoMail(std::string nuevo_mail);

};
