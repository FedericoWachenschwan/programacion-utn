#include <iostream>
#include <cstdlib>

using namespace std;

/*32 Se ingresa una lista de 10 números enteros y se pide determinar si la lista está
formada por todos números alternados entre pares e impares o impares y
pares.
Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”.
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”.
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”. */

int main(){

    int num, numAnterior;
    bool alternan = true;

    cout << "Ingrese un numero: ";
        cin >> numAnterior;

    for (int i = 2;i <= 10 ;i++ ){
        cout << "Ingrese un numero: ";
        cin >> num;

        if ((numAnterior % 2 == 0 && num % 2 == 0) || (numAnterior % 2 != 0 && num % 2 != 0)){
           alternan = false;
        }

    numAnterior = num;

    }

    if (alternan){
        cout << "Alternados" << endl;
    } else {
        cout << "No alternados" << endl;
    }


system("pause");
   return 0;
}
