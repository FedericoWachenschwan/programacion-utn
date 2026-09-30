#include <iostream>
#include <cstdlib>

using namespace std;

/*13 Dada una lista de 10 n£meros enteros informar cual es el m ximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa m ximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa m ximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa m ximo: -8  */

int main(){

    int n, maxPar;
    int primerPar = 0;
    for (int i=1;i<=10 ;i++){
        cout <<"Ingrese un n£mero: ";
        cin >> n;

        if (n % 2 == 0 && primerPar == 0){
            maxPar = n;
            primerPar ++;

        } else if (n % 2 == 0 && n > maxPar){
            maxPar = n;
        }
    }

    if (primerPar > 0) {
        cout << "El m ximo n£mero par es: " << maxPar << endl;
    } else {
        cout << "No se ingresaron n£meros pares." << endl;
    }


system("pause");
   return 0;
}
