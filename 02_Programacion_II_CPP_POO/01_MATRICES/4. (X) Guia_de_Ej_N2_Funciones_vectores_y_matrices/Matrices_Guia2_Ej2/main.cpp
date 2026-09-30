#include <iostream>

using namespace std;

//2
//Hacer una función llamada quitarRepetidos que reciba dos vectores de enteros de 10 elementos llamados vectorSinProcesar y vectorSinRepetidos. La función debe procesar el vectorSinProcesar de manera que en el vectorSinRepetidos queden todos los elementos distintos del vectorSinProcesar. La función debe devolver la cantidad de elementos asignados a vectorSinRepetidos.
//
//Ejemplo:
//vectorUno[10] = { 1, 2, 1, 2, 5, 5, 4, 4, 3, 3 }
//vectorDos[10];
//int elementos = quitarRepetidos(vectorUno, vectorDos);
//
//En elementos debe quedar el valor 5 ya que son 5 los elementos sin repetirse del vector. Además el vectorDos debe contener los valores 1, 2, 5, 4 y 3.

int quitarRepetidos(int vectorSinProcesar[10], int vectorSinRepetidos[10]);

int main()
{
    int vectorSinProcesar[10] = {1, 2, 1, 2, 5, 5, 4, 4, 3, 3}, vectorSinRepetidos[10] = {}, elementos;

    elementos = quitarRepetidos(vectorSinProcesar, vectorSinRepetidos);

    cout << "La cantidad de elementos es de: " << elementos << endl;
    cout << "Los elementos de vectorSinRepetidos son: " << endl;

    for (int i=0; i<elementos;i++)
    {
        cout << vectorSinRepetidos[i] << endl;
    }

    return 0;
}

int quitarRepetidos(int vectorSinProcesar[10], int vectorSinRepetidos[10])
{
    int elementos = 0;
    bool repetido = false;

    for (int i=0; i<10; i++)
    {
        repetido = false;

        for (int j=0; j<elementos; j++)
        {
            if (vectorSinProcesar[i] == vectorSinRepetidos[j])
            {
                repetido = true;
            }
        }

        if (repetido == false)
        {
            elementos++;
            vectorSinRepetidos[elementos-1] = vectorSinProcesar[i];
        }
    }

    return elementos;
}
