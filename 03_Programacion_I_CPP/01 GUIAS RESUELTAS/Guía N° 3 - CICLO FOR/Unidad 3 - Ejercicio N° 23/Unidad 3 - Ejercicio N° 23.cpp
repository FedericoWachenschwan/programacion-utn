#include <iostream>
#include <cstdlib>

using namespace std;

/*23 Dada una lista de 10 números enteros informar la cantidad de duplas de
números impares que se hayan ingresado consecutivamente.
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5.
En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informará que hay
4 duplas de números impares ingresados consecutivamente.
Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informará que
hay 5 duplas de números impares ingresados consecutivamente.
Aclaración: Sólo hay que listar la cantidad de duplas de impares. No hay que
mostrar cómo están compuestas las duplas de números.*/

int main(){

    int n; ///ENTRADA
    int contadorDeImpares = 0, contadorDeDuplas = 0;

    for (int i=1; i<=10; i++){
        cout << "Ingrese un numero: ";
        cin >> n;

        ///DETECTOR DE IMPARES:
        if (n % 2 != 0){
            contadorDeImpares ++;

            if (contadorDeImpares == 2){
                contadorDeDuplas ++;
                contadorDeImpares = 1;
            }
        } else {
            contadorDeImpares = 0;
        }
    }

    cout << "La cantidad de duplas consecutivas de numeros impares es de " << contadorDeDuplas << endl;


system("pause");
   return 0;
}
