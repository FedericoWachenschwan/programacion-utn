#include <iostream>
using namespace std;

//7
//Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
//Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.

int main(){

    int numero; ///Entrada
    int contadorpos = 0, contadornegs = 0, contadorceros = 0;

    for (int i = 1; i <= 10; i++){
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
    }
    cout << "La cantidad total de numeros positivos ingresados es de: " << contadorpos <<", la cantidad de numeros negativos ingresados es de: " << contadornegs << " y la cantidad de ceros ingresados es de: " <<contadorceros <<endl;

system("pause");
return 0;
}
