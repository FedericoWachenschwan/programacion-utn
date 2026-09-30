#include <iostream>
#include <cstdlib>

using namespace std;

/* 6 Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7. */

int main(){

    int n, contadorNegativos = 0, contadorPositivos = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0 ){

        if (n < 0){
            contadorNegativos ++;
        } else if (n > 0){
            contadorPositivos ++;
        }

        cout << "Ingrese un numero: ";
        cin >> n;
    }

    cout << "La cantidad de numeros negativos es de: " << contadorNegativos << endl;
    cout << "La cantidad de numeros positivos es de: " << contadorPositivos << endl;

system("pause");
   return 0;
}
