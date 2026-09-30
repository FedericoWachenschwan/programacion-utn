#include <iostream>
#include <cfloat>

using namespace std;

//3- Extender la funcionalidad de pedirNumeroEntre para que también pueda aceptar números decimales (tipo float),
//manteniendo la validación de rango.
//El comportamiento respecto al parámetro opcional fin debe mantenerse igual.

void pedirNumeroEntre(float inicio, float fin = FLT_MAX);

int main()
{

    pedirNumeroEntre(10, 50);
    pedirNumeroEntre(10);

    return 0;
}

void pedirNumeroEntre(float inicio, float fin)
{
    float n;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n < inicio || n > fin )
    {
        cout << "Ingrese un numero: ";
        cin >> n;
    }
}
