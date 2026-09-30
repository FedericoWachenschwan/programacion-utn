#include <iostream>
#include <cstdlib>

using namespace std;

//1 Hacer un programa para ingresar una lista de 10 números y luego informar
//cuántos de los números ingresados son perfectos. Se informa 1 resultado al
//final.

int main(){

    int num; ///Entrada
    int contPerfectos = 0; ///Salida

    int acum = 0;

    for (int i=1; i<=10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> num;

        for (int j=1; j<num; j++)
        {
            if (num % j == 0)
            {
                acum = acum + j;
            }

        }

        if (acum == num)
        {
            contPerfectos++;
        }

        acum = 0;
    }

    cout << "La cantidad de numeros perfectos ingresados es de: " << contPerfectos << endl;

	system("pause");
	return 0;
}
