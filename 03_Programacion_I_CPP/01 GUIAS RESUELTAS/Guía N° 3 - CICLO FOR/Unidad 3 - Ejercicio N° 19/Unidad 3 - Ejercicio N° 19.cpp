#include <iostream>
#include <cstdlib>

using namespace std;

/*19 Hacer un programa para ingresar un n£mero entero y luego informar la cantidad
de divisores de ese n£mero.
Ejemplo A. Si se ingresa 6 se listar : 4 divisores.
Ejemplo B. Si se ingresa 9 se listar : 3 divisores.
Ejemplo C. Si se ingresa 11 se listar : 2 divisores.*/

int main(){

    int n; ///ENTRADA
    int divisores = 0;

    cout << "INgrese un número: ";
    cin >> n;

    for (int i=1;i<=n ;i++ ){
        if (n % i == 0){
            divisores ++;
        }

    }

    cout << "La cantidad de divisores que contiene el número " << n << " es de " << divisores <<endl;



system("pause");
   return 0;
}
