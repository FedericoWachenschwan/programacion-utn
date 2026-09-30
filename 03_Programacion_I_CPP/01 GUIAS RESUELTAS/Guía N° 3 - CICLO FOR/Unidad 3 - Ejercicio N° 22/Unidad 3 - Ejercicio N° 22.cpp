#include <iostream>


using namespace std;

/* 22 Dada una lista de 7 números enteros informar el primer número par ingresado y
su ubicación en la lista y el último de los números primos y su ubicación en la
lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.*/

int main(){


    int n; ///ENTRADA
    int contadorPares = 0, primerPar, posPar; ///PRIMER PAR
    int ultimoPrimo, posicionPrimo; ///ÚLTIMO PRIMO

    for (int i = 1; i <= 7; i++){ ///INGRESA 7 NÚMEROS
         int contadorDeDivisores = 0;

         cout << "Ingrese un número: ";
         cin >> n;
         cout << endl;

         ///PRIMER PAR:
         if (n % 2 == 0 && contadorPares == 0){
            contadorPares ++;
            primerPar = n;
            posPar = i;
         }
         for (int x = 1; x <= n; x++){ ///ANALIZA CADA NÚMERO
             ///ÚLTIMO PRIMO:
             if (n % x == 0){
                contadorDeDivisores ++;
             }
        }
        if (contadorDeDivisores == 2){
            ultimoPrimo = n;
            posicionPrimo = i;
        }
    }

    cout << "El primer numero par ingresado es el número " <<primerPar << " y se encuentra en la posición " <<posPar << endl;
    cout << "El ultimo numero primo ingresado es el numero " << ultimoPrimo << " y se encuentra en la posicion " <<posicionPrimo << endl;

system("pause");
return 0;
}
