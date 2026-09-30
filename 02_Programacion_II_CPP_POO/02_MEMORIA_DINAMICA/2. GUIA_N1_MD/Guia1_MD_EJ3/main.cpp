#include <iostream>

using namespace std;

//3
//Hacer un programa que solicite al usuario 10 números y luego muestre primero los números positivos y luego los negativos.
//El programa debe crear dos arrays dinámicos con la cantidad exacta en cada caso: uno para almacenar los números positivos
//y otro para los números negativos.

int main()
{

    int vec[5]={}, *arrayPositivos = nullptr, *arrayNegativos = nullptr, contadorPositivos = 0, contadorNegativos = 0;
    int guardadosPositivos = 0, guardadosNegativos = 0;

    cout << "Ingrese diez numeros: " << endl;
    for (int i=0; i<5; i++)
    {
        cout << "Numero " << i+1 << "/" << "5 :";
        cin >> vec[i];

        if (vec[i] > 0)
        {
            contadorPositivos++;
        }

        if (vec[i] < 0)
        {
            contadorNegativos++;
        }
    }

    arrayPositivos = new int [contadorPositivos];
    arrayNegativos = new int [contadorNegativos];

    for (int j=0; j<5; j++)
    {
        if (vec[j] > 0)
        {
            arrayPositivos[guardadosPositivos] = vec[j];
            guardadosPositivos++;
        }
        else
        {
            if (vec[j] < 0)
            {
                arrayNegativos[guardadosNegativos] = vec[j];
                guardadosNegativos++;
            }
        }
    }

    cout << "Los numeros positivos ingresados son: " << endl;
    for (int l=0; l<contadorPositivos; l++)
    {
        cout << arrayPositivos[l] << ", ";
    }
    cout << endl;

    cout << "Los numeros negativos ingresados son: " << endl;
    for (int p=0; p<contadorNegativos; p++)
    {
        cout << arrayNegativos[p] << ", ";
    }
    cout << endl;

    delete []arrayPositivos;
    delete []arrayNegativos;

    return 0;
}
