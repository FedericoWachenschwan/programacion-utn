#include <iostream>

using namespace std;

//1
//Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego de cargar todas las notas:
//
//- Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo, se ingresa 10 para mostrar el décimo examen.
//
//- Listar cuántos estudiantes obtuvieron una nota mayor al promedio.


void cargar_notas(int notas[5]);
void nota_registrada(int notas[5], int n);

int main()
{
    int notas[5], numero_de_nota;

    cout << "Ingrese las notas: ";
    cargar_notas(notas);

    cout << endl << "Ingrese que numero de nota desea ver: ";
    cin >> numero_de_nota;

    nota_registrada(notas, numero_de_nota);

    return 0;
}

void cargar_notas(int notas[5])
{
    for (int i=0; i<5; i++)
    {
        cin >> notas[i];
    }
}

void nota_registrada(int notas[5], int n)
{
    cout << "La nota registrada es un " << notas[n-1] << endl;
}
