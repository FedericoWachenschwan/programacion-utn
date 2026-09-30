#include <iostream>

using namespace std;

//3 Hacer un programa para ingresar una lista de números que finaliza cuando se
//ingresa un cero y luego informar el porcentaje de números primos y el
//porcentaje de números no primos. Se informan 2 resultados al final.

int main()
{

    int n; ///Entrada

    int contDivisores = 0, contPrimos = 0, contNumerosIngresados = 0;

    float pctjPrimos, pctjNoPrimos; ///Salida

    cout << "Ingrese un numero: ";
    cin >> n;

    contNumerosIngresados++;

    while (n!=0)
    {
        for (int i=1; i<=n; i++)
        {
           if (n % i == 0)
           {
                contDivisores++;
           }
        }

        if (contDivisores == 2)
        {
            contPrimos++;
        }

        contDivisores = 0;

        cout << "Ingrese un numero: ";
        cin >> n;
        contNumerosIngresados++;
    }

    pctjPrimos = (contPrimos * 100) / contNumerosIngresados;
    pctjNoPrimos = ((contNumerosIngresados - contPrimos) * 100) / contNumerosIngresados;

    cout << "El porcentaje de numeros primos ingresados es de: " << pctjPrimos << endl;
    cout << "El porcentaje de numeros no primos ingresados es de: " << pctjNoPrimos << endl;

    return 0;
}
