#include <iostream>
#include <cstdlib>

using namespace std;

/* 12 Dada una lista de números que finaliza cuando se ingresa un cero, informar cual
es el primer y segundo número impar ingresado. Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se
informa 5 y -9 */

int main(){

    int n, primerImpar, segundoImpar, contadorImpares = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0){
        if (contadorImpares == 0 && n % 2 != 0){
            primerImpar = n,
            contadorImpares ++;
        } else {
            if (contadorImpares == 1 && n % 2 != 0){
                segundoImpar = n;
                contadorImpares ++;
            }
        }

        cout << "Ingrese un numero: ";
        cin >> n;
    }

    cout << "El primer numero impar ingresado es " << primerImpar << " y el segundo " << segundoImpar << endl;

system("pause");
   return 0;
}
