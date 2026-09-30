#include <iostream>
#include <cstdlib>

using namespace std;

/*23 Dada una lista de números que finaliza cuando se ingresa un número divisible
por 7, informar cual es el anteúltimo y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.
Nota: Contemplar la posibilidad que podría no haber números impares en la
lista. */

int main(){

    int n, ultimoImpar, anteultimoImpar, contadorImpares = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n % 7 != 0){

         if (n % 2 != 0){
            if (contadorImpares == 0){
                contadorImpares ++;
                ultimoImpar = n;
                anteultimoImpar = n;
            } else {
                anteultimoImpar = ultimoImpar;
                ultimoImpar = n;

            }
         }
    cout << "Ingrese un numero: ";
    cin >> n;
    }

    if (contadorImpares == 0){
        cout << "No se ingreso ningun numero impar" << endl;
    } else if (contadorImpares == 1) {
        cout << "Solo se ingreso un numero impar, el " << ultimoImpar << endl;
    } else {
        cout << "El anteultimo numero impar ingresado es " << anteultimoImpar << " y el ultimo numero impar ingresado es " << ultimoImpar << endl;
    }

system("pause");
   return 0;
}
