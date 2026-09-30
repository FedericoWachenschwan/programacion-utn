#include <iostream>
#include <cstdlib>

using namespace std;

/* 13 Dada una lista de números que finaliza cuando se ingresa un cero, informar cual
es el primer y último número impar ingresado. Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se
informa -5 y 5. */

int main(){
    int n, primerImpar, ultimoImpar;
    bool encontreImpar = false;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0){
        if (!encontreImpar && n % 2 != 0){
            primerImpar = n;
            ultimoImpar = n;
            encontreImpar = true;
        } else {
            if (n % 2 != 0){
                ultimoImpar = n;
            }
        }

        cout << "Ingrese un numero: ";
        cin >> n;
    }

    cout << "El primer numero impar ingresado es " << primerImpar << " y el ultimo " << ultimoImpar << endl;

system("pause");
   return 0;
}
