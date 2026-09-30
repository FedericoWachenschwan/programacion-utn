#include "Casas_quintas.h"
#include <iostream>
using namespace std;

/// CONSTRUCTOR VACIO DE CASAS_QUINTAS
Casas_quintas::Casas_quintas()
{
    _pileta = false;
    _quincho = false;
}

/// GETTERS DE CASAS_QUINTAS
bool Casas_quintas::getPileta()
{
    return _pileta;
}

bool Casas_quintas::getQuincho()
{
    return _quincho;
}

/// SETTERS DE CASAS_QUINTAS
void Casas_quintas::setPileta(bool pileta)
{
    _pileta = pileta;
}

void Casas_quintas::setQuincho(bool quincho)
{
    _quincho = quincho;
}

/// PEDIR DATOS DE CASAS_QUINTAS AL USUARIO
void Casas_quintas::pedirDatos()
{
    // PEDIMOS PRIMERO LOS DATOS DE CASAS E INMUEBLES QUE CASAS_QUINTAS HEREDA
    Casas::pedirDatos();

    int opcion_pileta;
    cout << "TIENE PILETA? INGRESE 1 PARA SI, 0 PARA NO: ";
    cin >> opcion_pileta;
    cin.ignore();

    if (opcion_pileta == 1)
    {
        setPileta(true);
    }
    else
    {
        setPileta(false);
    }

    int opcion_quincho;
    cout << "TIENE QUINCHO? INGRESE 1 PARA SI, 0 PARA NO: ";
    cin >> opcion_quincho;
    cin.ignore();

    if (opcion_quincho == 1)
    {
        setQuincho(true);
    }
    else
    {
        setQuincho(false);
    }
}

/// MOSTRAR DATOS DE CASAS_QUINTAS EN PANTALLA
void Casas_quintas::mostrarInformacion()
{
    // MOSTRAMOS PRIMERO LOS DATOS DE CASAS E INMUEBLES QUE CASAS_QUINTAS HEREDA
    Casas::mostrarInformacion();

    if (_pileta == true)
    {
        cout << "PILETA: SI TIENE" << endl;
    }
    else
    {
        cout << "PILETA: NO TIENE" << endl;
    }

    if (_quincho == true)
    {
        cout << "QUINCHO: SI TIENE" << endl;
    }
    else
    {
        cout << "QUINCHO: NO TIENE" << endl;
    }
}
