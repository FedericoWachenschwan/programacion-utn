#include <iostream>
using namespace std;

//1
//Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo,
//negativo o cero.
//Importante: Verifique que el programa emita UN SOLO CARTEL.


int main(){

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0){

        cout << "El numero ingresado es positivo" << endl;

    } else { if (numero < 0) {

                cout << "El numero ingresado es negativo" << endl;

                } else {
                    cout << "El numero ingresado es cero" << endl;


                }
            }

system("pause");
return 0;
}
