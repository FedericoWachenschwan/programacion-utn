#include <iostream>
#include <cstdlib>

using namespace std;

/*17 Hacer un programa para ingresar un n£mero entero y luego informar todos los
divisores de ese n£mero.
Ejemplo A. Si se ingresa 6 se listar n: 1, 2, 3 y 6
Ejemplo B. Si se ingresa 9 se listar n: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listar n 1 y 11.*/

int main(){

    int n; ///ENTRADA

    cout << "Ingrese un n£mero: ";
    cin >> n;

    cout << "El n£mero " <<n <<" es divisible por ";

    for (int i=1;i<=n;i++){
        if (n % i == 0){
            cout <<i << "; ";
        }
    }



system("pause");
   return 0;
}
