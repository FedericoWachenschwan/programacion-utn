#include <iostream>
#include <cstdlib>

using namespace std;

//17 Hacer un programa para ingresar por teclado cuatro números. Si los valores que
//se ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto
//Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
//Ejemplo A: si los números que se ingresan son 8, 10, 12 y 14, entonces están
//ordenados.
//Ejemplo B: si los números que se ingresan son 8, 12, 12 y 14, entonces están
//ordenados.
//Ejemplo C: si los números que se ingresan son 10, 8, 12 y 14, entonces están
//desordenados.

int main(){

    float n1, n2, n3, n4;

    cout << "Ingrese los 4 números: " << endl;
    cin >> n1 >> n2 >> n3 >> n4;
    cout << endl;

    if (n1 <= n2 && n2 <= n3 && n3 <= n4){

        cout << "Conjunto ordenado" <<endl;

    } else {

        cout <<"Conjunto desordenado" << endl;
    }


system("pause");
   return 0;
}
