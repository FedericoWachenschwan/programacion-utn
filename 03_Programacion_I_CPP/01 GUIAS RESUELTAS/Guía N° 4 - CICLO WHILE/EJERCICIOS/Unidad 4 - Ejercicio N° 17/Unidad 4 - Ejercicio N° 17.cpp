#include <iostream>
#include <cstdlib>

using namespace std;

/* 17 Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresan dos números positivos consecutivos, y luego informar el máximo.
Cuando se ingresa el segundo número positivo consecutivo el mismo debe ser
descartado.
Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listará Máximo 20.
En este caso, el segundo número positivo consecutivo, el 10, no se analiza, sólo
sirve para finalizar el ingreso.
Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listará Máximo 55.
En este caso, el segundo número positivo consecutivo, el 120, no se analiza,
sólo sirve para finalizar el ingreso. */

int main(){

int num, contadorNumeros = 0, maximo, contadorPositivos = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    while (contadorPositivos < 2){
        contadorNumeros ++;
        if (contadorNumeros == 1){
            maximo = num;
        } else {
            if (num > maximo){
                maximo = num;
            }
        }
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num > 0){
            contadorPositivos ++;
        } else {
            contadorPositivos = 0;
        }
    }

    cout << "El maximo numero es " << maximo << endl;

system("pause");
   return 0;
}
