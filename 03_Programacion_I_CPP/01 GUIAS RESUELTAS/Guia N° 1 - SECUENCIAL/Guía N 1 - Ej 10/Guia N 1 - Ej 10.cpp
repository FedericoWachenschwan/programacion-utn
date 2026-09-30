#include <iostream>
#include <cstdlib>

using namespace std;
//10)
//Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.
//Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y 2 horas.
//Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y 0 horas.
//Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y 20 horas.

int main(){

    int cantidadDeHorasTotales;
    int cantidadDeDias, cantidadDeHorasSobrantes; //Salida

    cout << "Ingrese la cantidad de horas totales: ";
    cin >> cantidadDeHorasTotales;

    cantidadDeDias = cantidadDeHorasTotales / 24;
    cantidadDeHorasSobrantes = cantidadDeHorasTotales % 24;

    cout << "La cantidad de horas ingresadas equivalen a " << cantidadDeDias << " dias y " << cantidadDeHorasSobrantes << " horas sobrantes" <<endl;


system("pause");
   return 0;
}
