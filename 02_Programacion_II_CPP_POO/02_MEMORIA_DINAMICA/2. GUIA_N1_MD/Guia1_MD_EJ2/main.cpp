#include <iostream>

using namespace std;

//2
//Crear un programa que contenga un menú con las siguientes opciones:
//1- Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos que va a cargar,
// posteriormente se solicitara cuales son dichos números para almacenarlos en un vector utilizando asignación dinámica de memoria.
//2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por pantalla.
//3- Salir: Sale del programa (no olvidar liberar la memoria)
//Pista: Recordar que se puede inicializar un puntero con el valor nullptr

void cargarVector(int *&vec, int &tam)
{
    system ("cls");

    if(vec != nullptr)
    {
        delete []vec;
    }

    cout << "Ingrese la cantidad de elementos que desea cargar: ";
    cin >> tam;

    vec = new int [tam];

    for (int i=0; i<tam; i++)
    {
        cout << "Ingrese el valor " << i+1 << "/" << tam << ": ";
        cin >> vec[i];
    }
}

void mostrarVector (int *vec, int tam)
{
    system ("cls");
    if(vec == nullptr) ///PREGUNTAMOS: "El puntero no apunta a ninguna dirección válida de memoria?”
    {
        cout << "El vector aun no ha sido cargado." << endl;
        system ("pause");
    }
    else
    {
        for (int i=0; i<tam; i++)
        {
            cout << "El valor " << i+1 << "/" << tam << " del vector es: " << vec[i] << endl;
        }
    }
    system ("pause");
}

int main()
{
    int *elementos = nullptr, tam = 0, opcion;

    while (true)
    {
        system ("cls");
        cout << "===========MENU============" << endl;
        cout << "1 - Cargar Vector." << endl;
        cout << "2 - Mostrar Vector." << endl;
        cout << "3 - Salir." << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cargarVector(elementos, tam);
        cout << endl;
            break;
        case 2:
            mostrarVector(elementos, tam);
            break;
        case 3:
            delete []elementos;
            return 0;
            break;
        default:
            cout << endl;
            cout << "Opcion Incorrecta.";
            system ("pause");
            system ("cls");
            break;
        }
    }

    return 0;
}
