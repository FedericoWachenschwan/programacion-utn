#include <iostream>
#include <cstdlib>

using namespace std;

/* 20 Dada una lista de números que finaliza cuando se ingresa un cero, informar el
primer número par ingresado y su ubicación en la lista y el último de los
números primos y su ubicación en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2.
Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7.
Último primo: 13 ubicación 5. */

int main(){

    int n, contadorDeDivisores = 0, primerPar, ultimoPrimo, posicion = 0, posicionUltimoPrimo, posicionPrimerPar;
    bool boolPrimerPar = false;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0){
        contadorDeDivisores = 0;
        posicion ++;
        if (n % 2 == 0 && boolPrimerPar == false){
            primerPar = n;
            posicionPrimerPar = posicion;
            boolPrimerPar = true;
        }

        for (int i = 1;i <= n;i++ ){
            if (n % i == 0){
                contadorDeDivisores ++;
            }
        }
        if (contadorDeDivisores == 2){
           ultimoPrimo = n;
           posicionUltimoPrimo = posicion;
        }

        cout << "Ingrese un numero: ";
        cin >> n;
    }

    cout << "El primer numero par ingresado es: " << primerPar << " y se encuentra ubicado en la posicion " << posicionPrimerPar << endl;
    cout << "El ultimo numero primo ingresado es: " << ultimoPrimo << " y se encuentra ubicado en la posicion " << posicionUltimoPrimo << endl;

system("pause");
   return 0;
}
