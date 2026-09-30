#include <iostream>
#include <cstdlib>

using namespace std;

/* 18 Hacer un programa para ingresar un n£mero entero y luego informar todos los
divisores pares de ese n£mero.
Ejemplo A. Si se ingresa 6 se listar : 2 y 6. Ejemplo B. Si se ingresa 8 se listar :
2, 4 y 8. Ejemplo C. Si se ingresa 11 no se listar  nada. */

int main(){

    int n; ///ENTRADA

    cout <<"Ingrese un n£mero: ";
    cin >> n;

    cout << "Los divisores de " << n << " son: ";
    for (int i=1; i<=n; i++){
        if (n % i == 0 &&  i % 2 == 0){
               {
                cout << i << "; ";
                }

        }
    }

    cout << endl;

system("pause");
   return 0;
}
