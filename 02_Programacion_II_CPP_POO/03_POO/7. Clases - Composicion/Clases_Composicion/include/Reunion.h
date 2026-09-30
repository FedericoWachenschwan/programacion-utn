#pragma once
#include "Persona.h"
#include <string>

class Reunion
{
private:
    int _dia;
    int _mes;
    int _anio;
    std::string _horario;
    std::string _lugar;
    std::string _tema;
    int _duracion;
    Persona _integrantes[5];
    int _cantidad_de_participantes = 0;

public:
    Reunion(int dia, int mes, int anio, std::string horario, std::string lugar, std::string tema, int duracion);

    /// GETTERS:
    int getDia();
    int getMes();
    int getAnio();
    std::string getHorario();
    std::string getLugar();
    std::string getTema();
    int getDuracion();

    /// SETTERS:
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    void setHorario(std::string horario);
    void setLugar(std::string lugar);
    void setTema(std::string tema);
    void setDuracion(int duracion);

    /// OTROS METODOS:
    void agregarPersona(Persona persona);
    Persona obtenerPersona(int posicion);
    int obtenerCantidadDeParticipantes();
};
