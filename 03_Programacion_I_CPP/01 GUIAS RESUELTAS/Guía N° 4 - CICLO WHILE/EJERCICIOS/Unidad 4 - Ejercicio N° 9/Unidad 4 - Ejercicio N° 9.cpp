#include <iostream>
#include <cstdlib>

using namespace std;

/* 9 Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listará Máximo 36.
Ejemplo B: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listará Máximo 4.
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listará Máximo -8.*/

int main(){

    int n, contador = 0, maxPar;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0){
        if (n % 2 == 0 && contador == 0 && n != 0){
            contador ++;
            maxPar = n;
        } else {
            if (n > maxPar && n % 2 ==0 && n != 0){
                maxPar = n;
            }
        }

        cout << "Ingrese un numero: ";
        cin >> n;

    }

    if (contador == 0){
        cout << "No se ingreso ningun numero par" << endl;
    } else {
        cout << "El maximo numero par ingresado es : " << maxPar << endl;
        }

system("pause");
   return 0;
}
