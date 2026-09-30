#include <iostream>
#include <cstdlib>

using namespace std;



int main(){

    int cantidad_de_horas;
    char tipo_de_lenguaje;
    bool urgencia;

    float costoTotal;

    cout << "Ingrese la cantidad de horas de desarrollo del proyecto: ";
    cin >> cantidad_de_horas;
    cout << endl;

    cout << "Ingrese en qu‚ tipo de lenguaje desea que se realice su proyecto: ";
    cin >> tipo_de_lenguaje;
    switch (tipo_de_lenguaje)
    {
    case 'C': costoTotal = cantidad_de_horas * 7500;
        break;

    case '#': costoTotal = cantidad_de_horas * 6100;
        break;

    case 'P': costoTotal = cantidad_de_horas * 5400;
        break;

    case 'G': costoTotal = cantidad_de_horas * 5000;
        break;

    default:
    cout << "Error: tipo de lenguaje no v lido." << endl;
    return 0;
    }

    cout << "¨Desea marcar su proyecto como urgente? (1 = S¡, 0 = No): ";
    cin >> urgencia;

    if (urgencia){
        costoTotal= costoTotal * 2.20;

    }

     cout << "El costo total de su proyecto es de $" <<costoTotal <<endl;


system("pause");
   return 0;
}
