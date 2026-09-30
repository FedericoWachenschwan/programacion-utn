#include <iostream>

using namespace std;

//6
//Escribir un programa que solicite al usuario ingresar una lista de 10 números enteros.
//Luego, el programa debe mostrar los números pares distintos que se ingresaron.
//Para resolver este ejercicio, se debe implementar una función que reciba un vector de enteros y su tamaño,
// y que devuelva un puntero a un vector dinámico que contenga solo los números pares distintos del vector recibido.

int *mostrar_y_devolver_numeros(int vec[], int tam)
{
    bool *paresRepetidos = new bool [tam]{false};

    int contador_de_pares = 0;
    int *paresDistintos = new int [tam];

    for (int i=0; i<tam; i++)
    {
        if (vec[i] % 2 == 0) ///si es par...
        {
            if (paresRepetidos[i] == false) ///si el numero en la pos i, no fue analizado...
            {
                for (int j=1+i; j<tam; j++) ///recorro todos los demás numeros....
                {
                    if (vec[i] == vec[j]) ///si el numero en la pos de i, es igual a algun numero de los restantes...
                    {
                        if (paresRepetidos[j] == false) ///...pregunto si en el puntero booleano ese numero repetido
                            ///no estaba marcado...
                        {
                            paresRepetidos[j] = true; ///...entonces lo marco como repetido para desp no evaluarlo

                        }
                    }
                }

                paresDistintos[contador_de_pares] = vec[i];
                contador_de_pares ++;
            }

        }
    }

    cout << "Los numeros pares distintos ingresados son: " << endl;
    for (int l=0; l<contador_de_pares; l++)
    {
        cout << paresDistintos[l] << endl;
    }

    delete[] paresRepetidos;
    return paresDistintos;
}

int main()
{
    const int tam = 5;
    int vec[tam] = {0};
    int *resultado;

    cout << "Ingrese una lista de 5 numeros: " << endl;

    for (int i=0; i<tam; i++)
    {
        cin >> vec[i];
    }

    resultado = mostrar_y_devolver_numeros(vec, tam);
    delete []resultado;

    return 0;
}
