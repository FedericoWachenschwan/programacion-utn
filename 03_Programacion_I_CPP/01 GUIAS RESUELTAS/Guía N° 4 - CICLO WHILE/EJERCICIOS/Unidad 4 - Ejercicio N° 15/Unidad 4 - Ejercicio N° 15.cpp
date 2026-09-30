#include <iostream>
#include <cstdlib>

using namespace std;

/* 15 Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el
máximo y cuál el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4  */

int main(){

    int n, maximo, segundoMaximo, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0){
        contador ++;
        if (contador == 1){
            maximo = n;
            segundoMaximo = n;
        } else {
            if (n >= maximo){
                segundoMaximo = maximo;
                maximo = n;
            } else if (n > segundoMaximo){
                segundoMaximo = n;
            }
        }
    cout << "Ingrese un numero: ";
    cin >> n;
    }

    cout << "El maximo numero ingresado es " << maximo << " y el segundo maximo es " << segundoMaximo << endl;

system("pause");
   return 0;
}
