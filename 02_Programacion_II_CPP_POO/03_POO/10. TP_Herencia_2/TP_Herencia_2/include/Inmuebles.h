#pragma once
#include <cstring>

/// CLASE BASE: GUARDA LOS DATOS COMUNES DE TODOS LOS INMUEBLES
class Inmuebles
{
private:

    /// ATRIBUTOS COMUNES A TODOS LOS INMUEBLES
    int _codigo_de_inmueble;
    char _calle[50];
    char _numero[6];
    char _localidad[50];
    float _precio_venta;
    float _precio_alquiler;
    char _apellido_del_duenio[50];
    char _nombre_del_duenio[50];
    char _dni_del_duenio[12];
    char _celular_del_duenio[15];

public:

    /// CONSTRUCTOR VACIO: CREA EL OBJETO SIN DATOS
    Inmuebles();

    /// GETTERS DE INMUEBLES
    int getCodigo_de_inmueble();
    float getPrecio_venta();
    float getPrecio_alquiler();

    /// SETTERS DE INMUEBLES
    void setCodigo_de_inmueble(int codigo_de_inmueble);
    void setCalle(char calle[50]);
    void setNumero(char numero[6]);
    void setLocalidad(char localidad[50]);
    void setPrecio_venta(float precio_venta);
    void setPrecio_alquiler(float precio_alquiler);
    void setApellido_del_duenio(char apellido_del_duenio[50]);
    void setNombre_del_duenio(char nombre_del_duenio[50]);
    void setDni_del_duenio(char dni_del_duenio[12]);
    void setCelular_del_duenio(char celular_del_duenio[15]);

    /// PEDIR Y MOSTRAR DATOS DE INMUEBLES
    void pedirDatos();
    void mostrarInformacion();
};
