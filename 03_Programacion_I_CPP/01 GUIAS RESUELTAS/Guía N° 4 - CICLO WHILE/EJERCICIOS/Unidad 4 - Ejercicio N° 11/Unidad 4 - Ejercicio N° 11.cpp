#include <iostream>
#include <cstdlib>

using namespace std;

/* 11 Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar el máximo de los negativos y el mínimo de los
positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
Máximo Negativo: -3.
Mínimo Positivo: 2. */

int main(){

    int n, contadorNegativos = 0, contadorPositivos = 0, maximoNegativo, minimoPositivo;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0){

        if (n < 0 &&  contadorNegativos == 0){
            contadorNegativos ++;
            maximoNegativo = n;
        } else {
            if (n < 0 && n > maximoNegativo){
                    maximoNegativo = n;
                }
            }

        if (n > 0 &&  contadorPositivos== 0){
            contadorPositivos ++;
            minimoPositivo = n;
        } else {
            if (n > 0 && n < minimoPositivo){
                    minimoPositivo = n;
                }
            }

        cout << "Ingrese un numero: ";
        cin >> n;

    }

    cout << "El maximo de los numeros negativos es " << maximoNegativo << endl;
    cout << "El minimo de los numeros positivos es " << minimoPositivo << endl;

system("pause");
   return 0;
}
