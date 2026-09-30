#pragma once
#include "Casas.h"

/// CLASE CASAS_QUINTAS: HEREDA DE CASAS Y AGREGA PILETA Y QUINCHO
class Casas_quintas : public Casas
{
private:

    /// ATRIBUTOS PROPIOS DE CASAS_QUINTAS
    bool _pileta;
    bool _quincho;

public:

    /// CONSTRUCTOR VACIO DE CASAS_QUINTAS
    Casas_quintas();

    /// GETTERS DE CASAS_QUINTAS
    bool getPileta();
    bool getQuincho();

    /// SETTERS DE CASAS_QUINTAS
    void setPileta(bool pileta);
    void setQuincho(bool quincho);

    /// PEDIR Y MOSTRAR DATOS DE CASAS_QUINTAS
    void pedirDatos();
    void mostrarInformacion();
};
