#include <iostream>

using namespace std;

//7 Se dispone de una lista de 10 grupos de números enteros separados entre ellos
//por ceros. Se pide determinar e informar:
//a) Informar el promedio de cada grupo. Se informa 1 resultado por cada grupo.
//b) Determinar e informar el valor mínimo de todos los grupos, indicando en qué
//grupo se encontró y su posición relativa en el mismo. Se informan 3 resultados
//al final.
//c) El mayor de los promedios y a que grupo pertenecía. Se informan 2
//resultados al final.

int main()
{

    int n; ///Entrada

    int minimo, grupoMinimo;
    bool ingresoDeNumero = false;

    for (int grupo=1; grupo<=10; grupo++)
    {
        cout << "Ingrese un numero: ";
        cin >> n;

        while (n != 0)
        {
            ingresoDeNumero = true;

            if (ingresoDeNumero == true)
            {
                minimo = n;
                grupoMinimo = grupo;
            }
            else
            {
                if (n < minimo)
                {
                    minimo = n;
                    grupoMinimo = grupo;
                }
            }

            cout << "Ingrese un numero: ";
            cin >> n;
        }
    }

    system ("pause");
    return 0;
}
