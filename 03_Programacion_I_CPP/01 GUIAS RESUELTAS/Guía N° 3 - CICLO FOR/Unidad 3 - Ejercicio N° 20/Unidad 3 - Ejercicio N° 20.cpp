#include <iostream>
using namespace std;

/*20 Se define a un número entero como primo cuando tiene solamente dos
divisores. Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen
solamente dos divisores.
Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)
Hacer un programa para ingresar un número y luego informar con un cartel
aclaratorio si el mismo es un número primo o es número no primo.*/

int main(){

    int n; ///ENTRADA
    int contadorDeDivisores = 0;

    cout << "Ingrese un número: ";
    cin >> n;


    for (int i=1;i<=n; i++){
        if (n % i ==0){
            contadorDeDivisores ++;
        }

    } if (contadorDeDivisores == 2){
        cout << "Es primo" <<endl;
    } else {
        cout << "No es primo " <<endl;
    }

system("pause");
return 0;
}
