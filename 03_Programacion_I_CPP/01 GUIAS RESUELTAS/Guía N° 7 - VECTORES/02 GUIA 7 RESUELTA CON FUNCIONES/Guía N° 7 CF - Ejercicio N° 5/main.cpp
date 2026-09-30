#include <iostream>

using namespace std;

// 5 Realizar una función que, dado un vector de 10 números enteros, determine el menor de los impares y el mayor de los pares.
//La función debe devolver ambos valores mediante parámetros.

void menor_impar_y_max_par (int vec[], int tam, int &menorImpar, int &maxPar);

int main()
{
    int const tamanio = 10;
    int vec[tamanio], menorImpar, maxPar;

    menor_impar_y_max_par(vec, tamanio, menorImpar, maxPar);

    cout << "El menor numero impar ingresado es: " << menorImpar << endl;
    cout << "El mayor numero par ingresado es: " << maxPar << endl;

    return 0;
}

void menor_impar_y_max_par (int vec[], int tam, int &menorImpar, int &maxPar)
{
        for (int i = 0; i < tam; i ++)
    {
        cout << "Ingrese los numeros del  vector: ";
        cin >> vec [i];
        cout << endl;
    }

    int contadorDeImpares = 0, contadorDePares = 0;

    for (int j = 0; j < tam; j ++ )
    {
        if (vec[j] % 2 != 0 && contadorDeImpares == 0)
        {
            contadorDeImpares ++;
            menorImpar = vec[j];
        }
        else
        {
            if (vec[j] % 2 != 0 && vec[j] < menorImpar)
            {
                menorImpar = vec[j];
            }
        }

        if (vec[j] % 2 == 0 && contadorDePares == 0)
        {
            contadorDePares ++;
            maxPar = vec[j];
        }
        else
        {
            if (vec[j] % 2 == 0 && vec[j] > maxPar)
            {
                maxPar = vec[j];
            }
        }
    }
}
