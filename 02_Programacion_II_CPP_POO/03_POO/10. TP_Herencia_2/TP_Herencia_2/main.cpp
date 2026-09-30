#include <iostream>
#include "Casas.h"
#include "Casas_quintas.h"
#include "Departamentos.h"
#include "Locales.h"
#include "Terrenos.h"
using namespace std;

int main()
{
    /// MOSTRAMOS EL MENU PRINCIPAL
    cout << "=== INMOBILIARIA GONZALEZ&LARA S.A. ===" << endl;
    cout << "QUE TIPO DE INMUEBLE DESEA REGISTRAR?" << endl;
    cout << "1 - CASA" << endl;
    cout << "2 - CASA QUINTA" << endl;
    cout << "3 - DEPARTAMENTO" << endl;
    cout << "4 - LOCAL" << endl;
    cout << "5 - TERRENO" << endl;
    cout << "INGRESE SU OPCION: ";

    int opcion;
    cin >> opcion;
    cin.ignore();

    switch (opcion)
    {
    case 1:
    {
        Casas casa;
        casa.pedirDatos();
        casa.mostrarInformacion();
        break;
    }
    case 2:
    {
        Casas_quintas casa_quinta;
        casa_quinta.pedirDatos();
        casa_quinta.mostrarInformacion();
        break;
    }
    case 3:
    {
        Departamentos departamento;
        departamento.pedirDatos();
        departamento.mostrarInformacion();
        break;
    }
    case 4:
    {
        Locales local;
        local.pedirDatos();
        local.mostrarInformacion();
        break;
    }
    case 5:
    {
        Terrenos terreno;
        terreno.pedirDatos();
        terreno.mostrarInformacion();
        break;
    }
    default:
    {
        cout << "OPCION NO VALIDA. INGRESE UN NUMERO DEL 1 AL 5." << endl;
        break;
    }
    }

    return 0;
}
