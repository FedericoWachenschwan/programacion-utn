#include <iostream>
#include <cstdlib>

using namespace std;

/* 7 Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listará Máximo -5.*/

int main(){

    int n, maximo, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while ( n != 0 ){
        contador ++;
        if (contador == 1){
            maximo = n;
        } else {
            if (n > maximo){
                maximo = n;
            }
        }

        cout << "Ingrese un numero: ";
        cin >> n;

    }

    cout << "El maximo numero ingresado es : " << maximo << endl;

system("pause");
   return 0;
}
