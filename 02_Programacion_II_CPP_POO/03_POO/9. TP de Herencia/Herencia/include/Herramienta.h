#pragma once
#include <string>

class Herramienta
{
private:
    std::string _nombre;
    float _peso, _longitud;

    ///ACTIVIDAD 3
    float _precioDeCompra;

public:
    Herramienta(float peso, float longitud, float precioDeCompra = 0);

    ///GETTERS
    float getPeso();
    float getLongitud();
    std::string getNombre();
    ///ACTIVIDAD 3
    float getPrecioDeCompra();

    ///SETTERS:
    void setPeso(float peso);
    void setLongitud(float longitud);
    void setNombre (std::string nombre);
    ///ACTIVIDAD 3
    void setPrecioDeCompra(float precioDeCompra);

    ///OTROS MÉTODOS:
    void mostrarInformacion();
};
