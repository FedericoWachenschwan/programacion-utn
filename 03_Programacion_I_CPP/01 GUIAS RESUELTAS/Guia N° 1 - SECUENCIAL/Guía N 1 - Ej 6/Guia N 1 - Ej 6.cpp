#include <iostream>
#include <cstdlib>

using namespace std;

//6
//Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
// El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
//Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana:
//20%, 15%, 60% y 5%.


int main(){

    float recaudacion1, recaudacion2, recaudacion3, recaudacion4, recaudacionPromedio, porcentajeRecSem1, porcentajeRecSem2, porcentajeRecSem3, porcentajeRecSem4, recaudacionTotal;

    cout << "Ingrese la recaudacion de la semana 1: ";
    cin >> recaudacion1;
    cout << "Ingrese la recaudacion de la semana 2: ";
    cin >> recaudacion2;
    cout << "Ingrese la recaudacion de la semana 3: ";
    cin >> recaudacion3;
    cout << "Ingrese la recaudacion de la semana 4: ";
    cin >> recaudacion4;

    recaudacionTotal = recaudacion1 + recaudacion2 + recaudacion3 + recaudacion4;

    porcentajeRecSem1 = (recaudacion1 * 100) / recaudacionTotal;
    porcentajeRecSem2 = (recaudacion2 * 100) / recaudacionTotal;
    porcentajeRecSem3 = (recaudacion3 * 100) / recaudacionTotal;
    porcentajeRecSem4 = (recaudacion4 * 100) / recaudacionTotal;

    recaudacionPromedio = (recaudacion1 + recaudacion2 + recaudacion3 + recaudacion4) / 4;

    cout << "El porcentaje de la recaudacion de la semana 1 es de: " <<porcentajeRecSem1 <<"%" <<endl;
    cout << "El porcentaje de la recaudacion de la semana 2 es de: " <<porcentajeRecSem2 <<"%" <<endl;
    cout << "El porcentaje de la recaudacion de la semana 3 es de: " <<porcentajeRecSem3 <<"%" <<endl;
    cout << "El porcentaje de la recaudacion de la semana 4 es de: " <<porcentajeRecSem4 <<"%" <<endl;

    cout << "La recaudacion promedio es de: $" <<recaudacionPromedio <<endl;

system("pause");
   return 0;
}
