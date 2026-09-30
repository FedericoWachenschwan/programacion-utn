#include "Destornillador.h"
#include <iostream>
using namespace std;

    Destornillador::Destornillador(float peso, float longitud, std::string tipoPunta)

    :Herramienta (peso, longitud)
    {
        setNombre("Destornillador");
        _tipoPunta = tipoPunta;
    }

    ///GETTERS:
    std::string Destornillador::getTipoPunta()
    {
        return _tipoPunta;
    }

    ///SETTERS:
    void Destornillador::setTipoPunta(std::string tipoPunta)
    {
        _tipoPunta = tipoPunta;
    }

    ///MÉTODOS:
    void Destornillador::mostrarInformacion()
    {
        Herramienta::mostrarInformacion();
        cout << "Tipo punta: " << _tipoPunta << endl << endl;
    }

