#include <iostream>
using namespace std;

//4
//Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia entre ambos.
//Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5. Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12
//y -1 se emite 11.
//Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
//Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO porque la diferencia absoluta siempre es un valor positivo.


int main(){

    int numero1, numero2; /// Entrada
    int diferencia; /// Salida

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2){

        diferencia = numero1 - numero2;

    } else {

        diferencia = numero2 - numero1;

    }

    cout << "La diferencia entre " <<numero1 <<" y " << numero2 <<" es de: " << diferencia <<endl;

system("pause");
return 0;
}
