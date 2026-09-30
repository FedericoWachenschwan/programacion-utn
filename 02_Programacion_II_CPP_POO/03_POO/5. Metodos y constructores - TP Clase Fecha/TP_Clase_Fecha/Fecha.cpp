#include "Fecha.h"
#include <string>

/// Actividad 3
int Fecha::diasDelMes(int mes, int anio)
{
    if (mes == 2) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
    {
        return 30;
    }
    return 31;
}

Fecha::Fecha(int dia, int mes, int anio)
{
    if (mes < 1 || mes > 12 || anio < 0 || dia < 1 || dia > diasDelMes(mes, anio))
    {
        _dia = 1;
        _mes = 1;
        _anio = 2023;
    }
    else
    {
        _dia = dia;
        _mes = mes;
        _anio = anio;
    }
}

/// Actividad 2
int Fecha::getDia()
{
    return _dia;
}

int Fecha::getMes()
{
    return _mes;
}

int Fecha::getAnio()
{
    return _anio;
}

void Fecha::setDia(int dia)
{
    _dia = dia;
}

void Fecha::setMes(int mes)
{
    _mes = mes;
}

void Fecha::setAnio(int anio)
{
    _anio = anio;
}

/// Actividad 4

Fecha::Fecha()
{
    _dia = 1;
    _mes = 1;
    _anio = 2023;
}

/// Actividad 5
void Fecha::agregarDia()
{
    _dia++;
    if (_dia > diasDelMes(_mes, _anio))
    {
        _dia = 1;
        _mes++;
        if (_mes > 12)
        {
            _mes = 1;
            _anio++;
        }
    }
}

void Fecha::restarDia()
{
    _dia--;
    if (_dia < 1)
    {
        _mes--;
        if (_mes < 1)
        {
            _mes = 12;
            _anio--;
        }
        _dia = diasDelMes(_mes, _anio);
    }
}

/// Actividad 6
void Fecha::agregarDias(int dias)
{
    if (dias > 0)
    {
        _dia += dias;
        while (_dia > diasDelMes(_mes, _anio))
        {
            _dia -= diasDelMes(_mes, _anio);
            _mes++;
            if (_mes > 12)
            {
                _mes = 1;
                _anio++;
            }
        }
    }
    else if (dias < 0)
    {
        _dia += dias;  // dias es negativo
        while (_dia < 1)
        {
            _mes--;
            if (_mes < 1)
            {
                _mes = 12;
                _anio--;
            }
            _dia += diasDelMes(_mes, _anio);
        }
    }
}

/// Actividad 7
std::string Fecha::toString()
{
    std::string parte_dia, parte_mes;

    if(_dia < 10)
    {
        parte_dia = "0";
    }

    if(_mes < 10)
    {
        parte_mes = "0";
    }

    return parte_dia + std::to_string(_dia) + "/" + parte_mes + std::to_string(_mes) + "/" + std::to_string(_anio);
}
