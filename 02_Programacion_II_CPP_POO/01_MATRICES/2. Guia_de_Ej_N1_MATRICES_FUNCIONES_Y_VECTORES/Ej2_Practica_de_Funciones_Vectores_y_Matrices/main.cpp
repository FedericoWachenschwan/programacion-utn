#include <iostream>
#include <climits>

using namespace std;

//2- Realizar una función llamada pedirNumeroEntre que reciba dos parámetros enteros: inicio y fin.
//La función debe solicitar un número entero al usuario y asegurarse de que se encuentre dentro del rango [inicio, fin].
//El parámetro fin debe ser opcional: si no se especifica, el rango debe considerarse desde inicio hasta el valor máximo que pueda tomar una variable entera (INT_MAX).
//En caso de ingreso inválido, la función debe volver a solicitar el número.

void pedirNumeroEntre(int inicio, int fin = INT_MAX);

int main()
{

    pedirNumeroEntre(10, 50);
    pedirNumeroEntre(10);

    return 0;
}

void pedirNumeroEntre(int inicio, int fin)
{
    int n;

    cout << "Ingrese un numero entero: ";
    cin >> n;

    while (n < inicio || n > fin )
    {
        cout << "Ingrese un numero entero: ";
        cin >> n;
    }
}
