#include <iostream>
#include <cstdlib>

using namespace std;

/*2 Leer 10 números y guardarlos en un vector. Calcular el promedio y luego
 mostrar por pantalla los valores que son mayores al promedio.*/

int main(){

    int vec[10]{}, suma = 0;
    float promedio;

    for(int i=0; i<=9; i++){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
        suma = suma + vec[i];
    }

    promedio = suma / 10.0;

    cout << "Los valores que son mayores al promedio son: " << endl;

    for (int j= 0; j<=9; j++){
        if (vec[j] > promedio){
            cout << vec[j] << endl;
        }
    }

	system("pause");
	return 0;
}
