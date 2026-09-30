#include <iostream>
#include "Herramienta.h"
#include "Martillo.h"
#include "Destornillador.h"
#include "Taladro.h"
#include "TaladroPercutor.h"

using namespace std;

int main()
{
    ///2)
    Martillo martillo(11,5, "asd");

    martillo.mostrarInformacion();

    ///3)
    Destornillador destornillador(20, 6, "DSA");

    destornillador.mostrarInformacion();

    ///4)
    Taladro taladro(30, 25, 100);
    taladro.mostrarInformacion();

    ///ACTIVIDAD 2 -> TALADRO PERCUTOR
    TaladroPercutor taladroPercutor(54.4, 30, 48.6, 11);
    taladroPercutor.mostrarInformacion();
    return 0;
}
