#include <iostream>

using namespace std;

//4
//Hacer una función que reciba un vector de enteros y su tamaño y devuelva la cantidad de números distintos
// que se repiten en el vector.

int funcionEnteros (int vec[], int tam)
{
    bool *repetido = new bool [tam]{}, contadorHuboRepetidos = false;
    int contadorDeDistintosRepetidos = 0;

    for (int i=0; i<tam; i++)
    {
        for (int j=0; j<tam; j++)
        {
            if (repetido[j] == false && i != j)
            {
                if (vec[i] == vec[j])
                {
                    repetido[i] = true;
                    repetido[j] = true;
                    contadorHuboRepetidos = true;
                }
            }
        }

        if (contadorHuboRepetidos == true)
        {
            contadorDeDistintosRepetidos++;
            contadorHuboRepetidos = false;
        }
    }

    delete[] repetido;

    return contadorDeDistintosRepetidos;
}

int main()
{
    const int tam = 5;
    int n, vec[tam];

    for (int i=0; i<tam; i++)
    {
        cout << "Ingrese el numero " << i+1 << "/" << tam << ": ";
        cin >> vec[i];
    }

    n = funcionEnteros(vec, tam);

    cout << "La cantidad de numeros distintos repetidos es de: " << n;

    return 0;
}
