#include <iostream>
#include <cstdlib>

using namespace std;

/* 4 Hacer una función llamada EsPrimoSophieGermain que reciba un número
 entero y determine si el mismo es un número primo de Sophie Germain. Debe
 devolver verdadero si lo es y falso si no lo es.
 NOTA: En teoría de números, se dice que un número natural es un número
 primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
 El número 2 es número primo de Sophie Germain porque:
 2 es primo
 2*2+1 → 5 es primo.
 Hacer un programa para ingresar un número y, utilizando
 EsPrimoSophieGermain, emita luego un cartel indicando si el número
 ingresado es primo Sophie Germain o no lo es.*/

bool EsPrimoSophieGermain (int n);

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    if (EsPrimoSophieGermain (n)){
        cout << "El numero ingresado es primo Sophie Germain" << endl;
    } else {
        cout << "El numero ingresado no es primo Sophie Germain" << endl;
    }

system("pause");
   return 0;
}

bool EsPrimoSophieGermain (int n){
    int recorridoDelNumero = 1, contadorDeDivisores = 0;

    while (recorridoDelNumero <= n){
        if (n % recorridoDelNumero == 0){
            contadorDeDivisores ++;
        }
                recorridoDelNumero ++;
    }
    if (contadorDeDivisores == 2){
        contadorDeDivisores = 0;
        recorridoDelNumero = 1;
        int resultado = (n * 2) + 1;

        while (recorridoDelNumero <= resultado){
            if (resultado % recorridoDelNumero == 0){
                contadorDeDivisores ++;
            }
            recorridoDelNumero ++;
        }
    }
    if (contadorDeDivisores == 2){
        return true;
    } return false;
}
