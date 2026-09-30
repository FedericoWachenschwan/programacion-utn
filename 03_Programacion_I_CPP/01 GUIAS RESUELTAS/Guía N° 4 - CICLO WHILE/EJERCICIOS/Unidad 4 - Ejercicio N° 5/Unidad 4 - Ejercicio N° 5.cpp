#include <iostream>
#include <cstdlib>

using namespace std;

/* 5 Hacer un programa para que el usuario ingrese dos números y luego el
programa muestre por pantalla los números entre el menor y el mayor de
ambos. Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el
3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el
25. */

int main(){

    int n1, n2, maximo, minimo;

    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;

    if (n1 > n2){
        maximo = n1;
        minimo = n2;
    } else {
        maximo = n2;
        minimo = n1;
    }

    while (minimo <= maximo){
        cout << minimo << endl;
        minimo ++;
    }

system("pause");
   return 0;
}
