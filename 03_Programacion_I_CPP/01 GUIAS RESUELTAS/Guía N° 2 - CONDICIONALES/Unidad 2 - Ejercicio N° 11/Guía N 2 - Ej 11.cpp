#include <iostream>
using namespace std;

//11
//Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son
//iguales a 0.


int main(){

    int numero; ///Entrada
    int contadorpos = 0, contadornegs = 0, contadorceros = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0){

        contadorpos ++;
    } else { if (numero < 0){

            contadornegs ++;

        } else {

            contadorceros ++;

        }

     }

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0){

        contadorpos ++;
    } else { if (numero < 0){

            contadornegs ++;

        } else {

            contadorceros ++;

        }

     }

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0){

        contadorpos ++;
    } else { if (numero < 0){

            contadornegs ++;

        } else {

            contadorceros ++;

        }

     }

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0){

        contadorpos ++;
    } else { if (numero < 0){

            contadornegs ++;

        } else {

            contadorceros ++;

        }

     }

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero > 0){

        contadorpos ++;
    } else { if (numero < 0){

            contadornegs ++;

        } else {

            contadorceros ++;

        }

     }

    cout << "La cantidad total de numeros positivos ingresados es de: " << contadorpos <<", la cantidad de numeros negativos ingresados es de: " << contadornegs << " y la cantidad de ceros ingresados es de: " <<contadorceros <<endl;

system("pause");
return 0;
}
