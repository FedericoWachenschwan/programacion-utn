#include <iostream>
using namespace std;

//6
//Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números.
// Se pide informar cuantos son positivos
//Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
//Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará: Cantidad de Positivos: 0


int main(){

    int num1, num2; /// Entrada

    cout << "Ingrese cuantos numeros componen la lista: ";
    cin >> num1;

    for (int i = 1; i <= num1; i++){

        cout <<"Ingrese un numero: ";
        cin >> num2;

    }

system("pause");
return 0;
}
