#include <iostream>

using namespace std;

//5
//Hacer una función que reciba un vector de enteros y su tamaño y
//luego muestre el vector ordenado de forma ascendente, tener en cuenta que el vector enviado como argumento
// no debe ser modificado.

void ordenarVector (int vec[], int tam)
{

    int *copia = new int [tam];

    for (int l=0; l<tam; l++)
    {
        copia[l] = vec[l];
    }

    int aux;

    for (int i = 0; i < tam-1; i++) //controla la cantidad de pasadas (cada vez ordena un elemento al final)
    {
        for (int j = 0; j < tam-1-i; j++) //recorre hasta la parte no ordenada del vector
        {
            if (copia[j] > copia[j+1]) //compara dos vecinos y verifica si están desordenados
            {
                aux = copia[j]; //guarda temporalmente el valor actual
                copia[j] = copia[j+1]; //mueve el menor hacia la izquierda
                copia[j+1] = aux; //completa el intercambio
            }
        }
    }

    for (int k=0; k<tam; k++)
    {
        cout << copia[k] << endl;
    }

    delete []copia;
}

int main()
{
    const int tam = 5;
    int vec[tam] = {2,5,1,3,6};

    ordenarVector(vec, tam);

    return 0;
}
