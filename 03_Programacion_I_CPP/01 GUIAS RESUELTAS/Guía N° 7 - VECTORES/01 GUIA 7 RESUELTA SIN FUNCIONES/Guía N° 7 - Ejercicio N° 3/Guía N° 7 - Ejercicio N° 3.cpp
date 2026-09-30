#include <iostream>
#include <cstdlib>

using namespace std;

/*3 Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
 valor máximo y su posición dentro del vector.*/

int main(){

    int vec[10]{}, maximo, posmax;

    for (int i=0;i<=9 ;i++ ){
        cout << "Ingrese un numero: ";
        cin >> vec[i];
    }

    for (int j=0; j<=9; j++){
        if (j==0){
            maximo = vec[j];
            posmax = j;
        } else {
            if (vec[j] > maximo ){
                maximo = vec[j];
                posmax = j;
            }
        }
    }

    cout << "El valor máximo es: " << maximo << " y su posicion dentro del vector es " << posmax << endl;

	system("pause");
	return 0;
}
