#include <iostream>
using namespace std;

//2
//Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo
//del segundo.


int main(){

    int n1, n2; /// Entrada.

    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if (n1 % n2 == 0){

     cout << "El numero " << n1 << " es multiplo de " << n2 << endl;

    } else {

        cout << n1 << " no es multiplo de " << n2 << endl;
    }

system("pause");
return 0;
}
