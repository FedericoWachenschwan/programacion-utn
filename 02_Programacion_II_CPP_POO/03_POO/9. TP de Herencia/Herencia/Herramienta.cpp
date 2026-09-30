#include "Herramienta.h"
#include <iostream>
using namespace std;

    Herramienta::Herramienta(float peso, float longitud, float precioDeCompra)
    {
        _peso = peso;
        _longitud = longitud;
        _nombre = "";
        _precioDeCompra = precioDeCompra;
    }

    ///GETTERS
    float Herramienta::getPeso()
    {
        return _peso;
    }

    float Herramienta::getLongitud()
    {
        return _longitud;
    }

    std::string Herramienta::getNombre()
    {
        return _nombre;
    }

    ///ACTIVIDAD 3
    float Herramienta::getPrecioDeCompra()
    {
        return _precioDeCompra;
    }

    ///SETTERS:
    void Herramienta::setPeso(float peso)
    {
        _peso = peso;

    }

    void Herramienta::setLongitud(float longitud)
    {
        _longitud = longitud;

    }

    void Herramienta::setNombre(std::string nombre)
    {
        _nombre = nombre;
    }

    ///ACTIVIDAD 3
    void Herramienta::setPrecioDeCompra(float precioDeCompra)
    {
        _precioDeCompra = precioDeCompra;
    }

    /// OTROS MÉTODOS:
    void Herramienta::mostrarInformacion()
    {
        cout << "Informacion de Herramienta: Nombre: " << _nombre
             << ", Peso: " << _peso
             << " , Longitud: " << _longitud
             << " y Precio de compra: " << _precioDeCompra << endl;
    }
