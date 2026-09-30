#include <iostream>
#include <cstdlib>

using namespace std;

/* 4 Hacer un programa para que el usuario ingrese un número positivo y que luego
se muestre por pantalla los números entre el 1 y el número ingresado por el
usuario. Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y
el 15. */

int main(){

    int n, resultado = 1;

    cout << "Ingrese un numero: ";
    cin >> n;

    while ( resultado <= n ){
    cout << resultado << endl;
    resultado ++;
    }

system("pause");
   return 0;
}
