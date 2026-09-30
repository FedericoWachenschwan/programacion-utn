#include <iostream>
#include <cstdlib>

using namespace std;

 /*9 Escribir una función que reciba un número y retorne 1 si el número recibido es
 perfecto y 0 si no es perfecto.
 Hacer un programa para que, dada una lista de números que finaliza con cero,
 informe cuántos de ellos eran perfectos. Utilizar la función solicitada.*/

bool numeroPerfecto (int n);

int main(){

    int n, contador = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n != 0){
    if (numeroPerfecto(n)){
        contador ++;
    }
        cout << "Ingrese un numero: ";
        cin >> n;
    }

    cout << "La cantidad de numeros perfectos es de: " << contador << endl;

	system("pause");
	return 0;
}

bool numeroPerfecto (int n){
    int acDivisores = 0;
    for (int i = 1; i < n; i ++){
        if (n % i == 0){
            acDivisores += i;
        }
    }
    if (acDivisores == n){
        return true;
    } else {
        return false;
    }
}
