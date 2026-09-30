#include <iostream>

using namespace std;

//5 Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
//menor de los impares y el mayor de los pares. Suponer que habrá al menos un
//número par y uno impar

int main()
{
    int vec[10] = {};

    for (int i = 0; i < 10; i ++)
    {
        cout << "Ingrese los numeros del  vector: ";
        cin >> vec [i];
        cout << endl;
    }

    int menorImpar, maxPar, contadorDeImpares = 0, contadorDePares = 0;

    for (int j = 0; j < 10; j ++ )
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

    cout << "El menor de los numeros impares es: " << menorImpar << endl;
    cout << "El mayor de los numeros pares es: " << maxPar << endl;

    return 0;
}
