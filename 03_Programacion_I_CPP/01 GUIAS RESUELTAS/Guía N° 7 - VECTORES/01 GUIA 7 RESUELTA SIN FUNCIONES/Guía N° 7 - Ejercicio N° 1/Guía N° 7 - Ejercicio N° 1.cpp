#include <iostream>
#include <cstdlib>

using namespace std;

/* 1 Hacer un programa para ingresar 10 números y guardarlos en un vector.
 Determinar e informar cuál es la suma de los valores del vector.*/

int main(){

    int vec[10]{}, suma = 0;

    for (int i=0; i<=9; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
        suma = suma + vec[i];
    }

    cout << "La suma de los valores del vector es " << suma << endl;

	system("pause");
	return 0;
}
