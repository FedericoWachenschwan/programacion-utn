#include <iostream>

using namespace std;

//1
//Escribir un programa que solicite al usuario el tamaño de un array de enteros, lo cree dinámicamente utilizando new.
//El usuario debe poder cargar el array y mostrarlo, y luego liberar la memoria con delete

void cargarArray(int *arrayDeEnteros, int tam);
void mostrarArray(int *arrayDeEnteros, int tam);

int main()
{
    int n, *arrayDeEnteros;

    cout << "Ingrese el tamaño del array de enteros: ";
    cin >> n;

    arrayDeEnteros = new int [n];

    cargarArray(arrayDeEnteros, n);
    mostrarArray(arrayDeEnteros, n);

    delete []arrayDeEnteros;

    return 0;
}

void cargarArray(int *arrayDeEnteros, int tam)
{
    for (int i=0; i<tam; i++)
    {
        cout << "Ingrese el valor " << i+1 << "/" << tam << ": ";
        cin >> arrayDeEnteros[i];
    }
}

void mostrarArray(int *arrayDeEnteros, int tam)
{
    for (int i=0; i<tam; i++)
    {
        cout << "Valor " << i+1 << " del array: " << arrayDeEnteros[i]  << endl;
    }
}
