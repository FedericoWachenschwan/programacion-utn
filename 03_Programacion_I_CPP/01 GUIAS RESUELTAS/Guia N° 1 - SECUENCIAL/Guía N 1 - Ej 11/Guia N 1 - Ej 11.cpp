#include <iostream>
#include <cstdlib>

using namespace std;

//11)
//Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos
//equivalen.
//Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
//Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.


int main(){

    int cantidadDeMinutosTotales; // Entrada
    int dias, horas, minutosRestantes; // Salida

    cout << "Ingrese la cantidad de minutos totales: ";
    cin >> cantidadDeMinutosTotales;

    horas = (cantidadDeMinutosTotales / 60) % 24;
    minutosRestantes = cantidadDeMinutosTotales % 60;
    dias = (cantidadDeMinutosTotales / 60) / 24;

    cout << "La cantidad de minutos ingresados equivale a: " << dias << " dias, " << horas << " horas y " <<minutosRestantes << " minutos," << endl;

system("pause");
   return 0;
}
