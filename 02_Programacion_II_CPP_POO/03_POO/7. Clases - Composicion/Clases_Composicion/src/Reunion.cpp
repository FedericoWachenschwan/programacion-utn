#include "Reunion.h"

Reunion::Reunion(int dia, int mes, int anio, std::string horario, std::string lugar, std::string tema, int duracion)
{
    _dia = dia;
    _mes = mes;
    _anio = anio;
    _horario = horario;
    _lugar = lugar;
    _tema = tema;
    _duracion = duracion;
}

/// GETTERS:
int Reunion::getDia()
{
    return _dia;
}

int Reunion::getMes()
{
    return _mes;
}

int Reunion::getAnio()
{
    return _anio;
}

std::string Reunion::getHorario()
{
    return _horario;
}

std::string Reunion::getLugar()
{
    return _lugar;
}

std::string Reunion::getTema()
{
    return _tema;
}

int Reunion::getDuracion()
{
    return _duracion;
}

/// SETTERS:
void Reunion::setDia(int dia)
{
    _dia = dia;
}

void Reunion::setMes(int mes)
{
    _mes = mes;
}

void Reunion::setAnio(int anio)
{
    _anio = anio;
}

void Reunion::setHorario(std::string horario)
{
    _horario = horario;
}

void Reunion::setLugar(std::string lugar)
{
    _lugar = lugar;
}

void Reunion::setTema(std::string tema)
{
    _tema = tema;
}

void Reunion::setDuracion(int duracion)
{
    _duracion = duracion;
}

/// OTROS METODOS:
void Reunion::agregarPersona(Persona persona)
{
    // Ej silla: GUARDAMOS LA PERSONA EN EL SIGUIENTE LUGAR LIBRE DEL ARRAY
    _integrantes[_cantidad_de_participantes] = persona; // sienta a la persona en la silla 0
    // SUMAMOS UNO AL CONTADOR
    _cantidad_de_participantes++; // ahora vale 1
    // El contador siempre apunta a la próxima silla vacía. Así nunca pisás una persona con otra.
}

Persona Reunion::obtenerPersona(int posicion)
{
    return _integrantes[posicion];
}

int Reunion::obtenerCantidadDeParticipantes()
{
    return _cantidad_de_participantes;
}
