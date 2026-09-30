#include <iostream>
#include "Postulante.h"
#include "GestorDePostulantes.h"

using namespace std;

int main()
{
    GestorDePostulantes gestor;
    Postulante p1("Carlitos", 15, "Programador", 3);
    Postulante p2("Osvaldo", 22, "Diseñador", 2);

    if (gestor.esApto(p1))
    {
        cout << "El postulante " << p1.getNombre() << " es apto " << endl;
    }
    else
    {
        cout << "El postulante " << p1.getNombre() << " no es apto " << endl;
    }

    cout << endl;

        if (gestor.esApto(p2))
    {
        cout << "El postulante " << p2.getNombre() << " es apto " << endl;
    }
    else
    {
        cout << "El postulante " << p2.getNombre() << " no es apto " << endl;
    }

    cout << "La cantidad de personas evaluadas es de: " << gestor.getContador_personas_evaluadas() << endl;
    cout << "La cantidad de personas rechazadas es de: " << gestor.getContador_personas_rechazadas() << endl;

    return 0;
}
