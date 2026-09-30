#include <iostream>

using namespace std;

//1- Realizar una función llamada pedirNumeroPositivo.
//La función debe solicitar al usuario un número, asegurarse de que dicho número sea estrictamente positivo (mayor que cero) y devolverlo.
//En caso de que el usuario ingrese un valor inválido, la función debe volver a solicitarlo hasta que sea correcto.

///ENTRADA int n;

int pedirNumeroPositivo();

int main()
{

    int numeroPositivo;

    numeroPositivo = pedirNumeroPositivo();

    cout << numeroPositivo << endl;

    return 0;
}

int pedirNumeroPositivo()
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    while (n<=0)
    {
        cout << "Ingrese un numero: ";
        cin >> n;
    }

    return n;

}
