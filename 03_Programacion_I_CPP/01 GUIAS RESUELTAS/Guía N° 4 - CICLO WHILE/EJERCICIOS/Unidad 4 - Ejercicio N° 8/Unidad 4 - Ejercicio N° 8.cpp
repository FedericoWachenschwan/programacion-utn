#include <iostream>
#include <cstdlib>

using namespace std;

/*Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresa un cero, luego informar el máximo y la posición del máximo en la lista.
En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.*/

int main(){

int n, maximo, contador = 0, posMaximo;

    cout << "Ingrese un numero: ";
    cin >> n;

    while ( n != 0 ){
        contador ++;
        if (contador == 1){
            maximo = n;
            posMaximo = contador;
        } else {
            if (n > maximo){
                maximo = n;
                posMaximo = contador;
            }
        }

        cout << "Ingrese un numero: ";
        cin >> n;

    }

    cout << "El maximo numero ingresado es : " << maximo << " y se encuentra en la posicion " << posMaximo << endl;

system("pause");
   return 0;
}
