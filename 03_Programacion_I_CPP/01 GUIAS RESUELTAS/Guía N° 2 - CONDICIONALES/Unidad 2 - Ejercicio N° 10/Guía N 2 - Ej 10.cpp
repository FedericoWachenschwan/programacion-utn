#include <iostream>
using namespace std;

//10
//Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.

int main(){

    int num; //Entrada
    int maximo, minimo; //Salida

    cout << "Ingrese un numero: ";
    cin >> num;
    maximo = num;
    minimo = num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > maximo){

        maximo = num;
    } else { if (num < minimo){

        minimo = num;

        }
    }

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > maximo){

        maximo = num;

    } else { if (num < minimo){

        minimo = num;

        }
    }

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > maximo){

        maximo = num;

    } else { if (num < minimo){

        minimo = num;

        }
    }

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > maximo){

        maximo = num;

    } else { if (num < minimo){

        minimo = num;

        }
    }

    cout << "El maximo numero es " <<maximo <<" y el minimo numero es " <<minimo <<endl;

system("pause");
return 0;
}
