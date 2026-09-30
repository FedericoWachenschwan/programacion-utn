#include <iostream>
using namespace std;

//1 Hacer una función llamada EsPar que determine si un número es par o no. La
//función debe recibir un número entero por valor y devolver true si es par o false
//si no lo es. La función no debe mostrar nada por pantalla.
//Hacer un programa para ingresar un número y, utilizando EsPar, emita luego un
//cartel indicando si el número ingresado es par o no es par.

bool esPar (int n);

int main(){

    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    if (esPar(n)){

        cout << "El numero ingresado es par" <<endl;

    } else {
        cout << "El numero ingresado no es par" <<endl;
    }

system("pause");
return 0;
}

bool esPar (int n){

    return n % 2 == 0;

    }


