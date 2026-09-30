#include <iostream>
using namespace std;

//3
//Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.


int main(){

    int numero; /// Entrada

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0){
        cout << "El numero ingresado es par" << endl;

    } else {
        cout << "El numero ingresado es impar" << endl;
    }


system("pause");
return 0;
}
