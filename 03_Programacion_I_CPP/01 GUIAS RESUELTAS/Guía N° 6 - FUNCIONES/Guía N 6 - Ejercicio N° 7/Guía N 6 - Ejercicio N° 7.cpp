#include <iostream>
#include <cstdlib>

using namespace std;

/*  7 Escribir una función CalcularMaximoAbsoluto que reciba dos números y
 retorne el máximo absoluto de ambos. Por ejemplo el máximo absoluto de los
 números-40 y 20 es 40.
 Hacer un programa para ingresar dos números y, utilizando
 CalcularMaximoAbsoluto, emita luego el número mayor absoluto de ambos.*/

int CalcularMaximoAbsoluto (int n1, int n2);

int main(){

    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "El maximo numero es : " << CalcularMaximoAbsoluto(num1, num2) << endl;

	system("pause");
	return 0;
}

int CalcularMaximoAbsoluto (int n1, int n2){
    int maximo;

    if (n1 < 0){
        n1 = -n1;
    }
    if (n2 < 0){
        n2 = -n2;
    }


    if (n1 > n2){
        maximo = n1;
    } else {
        maximo = n2;
    }
    return maximo;
}
