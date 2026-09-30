#include "Martillo.h"
#include <iostream>
using namespace std;


    Martillo::Martillo(float peso, float longitud, string tipoCabeza) : Herramienta (peso, longitud)
    {
        setNombre("Martillo");
        _tipoCabeza = tipoCabeza;
    }

    ///SETTERS:
    void Martillo::setTipoCabeza(string tipoCabeza)
    {
        _tipoCabeza = tipoCabeza;
    }

    ///GETTERS_
    string Martillo::getTipoCabeza()
    {
        return _tipoCabeza;
    }

    ///MÉTODOS:
    void Martillo::mostrarInformacion()
    {
        Herramienta::mostrarInformacion();
        cout << "Tipo de Cabeza: " << _tipoCabeza << endl << endl;
    }

