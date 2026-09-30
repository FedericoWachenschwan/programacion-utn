#include <iostream>
#include <cstdlib>

using namespace std;

//4
//Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados
// y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
//Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será
//de un 40% y el porcentaje de no ocupación será de un 60%.


int main(){

    int cantAsientosEnAvion, cantPasajerosQueViajan;
    float porcentajeDeOcupacion, porcentajeDeNoOcupacion;

    cout << "Ingrese la cantida de asientos que tiene el avion: ";
    cin >> cantAsientosEnAvion;
    cout << "Ingrese la cantida de pasajeros que viajan: ";
    cin >> cantPasajerosQueViajan;
    cout << endl;

    // cant asientosenAvion____________ 100%
    // cantapasajeros que viajan________ x
    porcentajeDeOcupacion = (cantPasajerosQueViajan * 100) / cantAsientosEnAvion;
    porcentajeDeNoOcupacion = 100 - porcentajeDeOcupacion;

    cout << "El porcentaje de ocupacion es de: " <<porcentajeDeOcupacion<< "%" <<endl;
    cout << "El porcentaje de no ocupacion es de: " <<porcentajeDeNoOcupacion << "%" <<endl;

system("pause");
   return 0;
}
