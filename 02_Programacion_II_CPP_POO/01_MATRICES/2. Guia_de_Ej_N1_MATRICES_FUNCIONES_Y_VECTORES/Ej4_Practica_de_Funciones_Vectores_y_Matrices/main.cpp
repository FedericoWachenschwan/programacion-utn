#include <iostream>

using namespace std;

//4- Realizar una función que reciba una matriz de dimensiones 30×12 con valores numéricos.
//La función debe mostrar, para cada fila, la suma de todos los valores de sus columnas.
//Se debe especificar claramente en la salida qué fila se está mostrando y cuál es su suma.


void suma_de_filas(int matriz[3][2]);

int main()
{

    int matriz_cargada[3][2] =
    {
        {11,3},
        {6,1},
        {7,8}
    };

    suma_de_filas(matriz_cargada);

    return 0;
}

void suma_de_filas(int matriz[3][2])
{

    for(int i=0; i<3; i++)
    {
        int ac_suma = 0;

        for(int j=0; j<2; j++)
        {
            ac_suma += matriz[i][j];
        }

        cout << "La suma de todos los valores de la fila #" << i+1 << " es de: " << ac_suma << endl;
    }
}
