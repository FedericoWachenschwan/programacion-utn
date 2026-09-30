#include <iostream>
using namespace std;

//8
//Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar
//qué tipo de triángulo es:
//- Equilátero: si los tres lados son iguales.
//- Isósceles: si dos de los tres lados son iguales.
//- Escaleno: si los tres lados son distintos entre sí.

int main(){

    int longitud1, longitud2, longitud3; ///Entrada

    cout << "Ingrese la longitud 1: ";
    cin >> longitud1;
    cout << "Ingrese la longitud 2: ";
    cin >> longitud2;
    cout << "Ingrese la longitud 3: ";
    cin >> longitud3;

    if (longitud1 == longitud2 && longitud2 == longitud3){

        cout << "Los tres lados son iguales, por lo tanto el triangulo es Equilatero" << endl;

    } else { if (longitud1 == longitud2 || longitud1 == longitud3 || longitud2 == longitud3){

        cout << "Dos de los tres lados son iguales, por lo tanto el triangulo es Isosceles" <<endl;

        }  else { if (longitud1 != longitud2 && longitud2 != longitud3){

            cout << "Los tres lados son distintos, por lo tanto el triangulo es Escaleno" <<endl;

            }
        }
    }

system("pause");
return 0;
}
