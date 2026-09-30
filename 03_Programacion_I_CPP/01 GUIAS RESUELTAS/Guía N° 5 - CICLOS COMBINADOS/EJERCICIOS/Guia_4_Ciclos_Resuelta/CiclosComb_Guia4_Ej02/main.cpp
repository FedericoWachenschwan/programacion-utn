#include <iostream>

using namespace std;

//2 Hacer un programa para ingresar una lista de 10 números y luego informar
//cuántos de los números ingresados son primos. Se informa 1 resultado al final.

int main()
{
    int n; ///Entrada
    int contPrimos = 0; ///Salida

    int contDivisores = 0;

    for (int i=1; i<=10; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        for (int j=1; j<=n; j++){

            if (n % j == 0){
                contDivisores++;
            }
        }

        if (contDivisores == 2)
        {
            contPrimos++;
        }

        contDivisores = 0;
    }

    cout << "La cantidad de numeros primos ingresados es de: " << contPrimos << endl;

    system ("pause");
    return 0;
}
