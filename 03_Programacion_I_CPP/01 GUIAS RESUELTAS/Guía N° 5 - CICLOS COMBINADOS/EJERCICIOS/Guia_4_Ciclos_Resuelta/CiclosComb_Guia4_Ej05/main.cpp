#include <iostream>

using namespace std;

//5 Se dispone de una lista de 10 grupos de números enteros separados entre ellos
//por ceros. Se pide determinar e informar:
//a) El número de grupo con mayor porcentaje de números impares positivos
//respecto al total de números que forman el grupo. Se informa 1 resultado al
//final.
//b) Informar cuantos grupos están formados por todos números ordenados de
//mayor a menor. Se informa 1 resultado al final.

int main()
{

    int n; ///Entrada

    int contadorImparesPositivos, contadorNumeros = 0, grupoConNumImparesYPos = 0, maxGrupoNumImparesYpos; /// a)

    /// a) ----------------------------------------------
    float pctjNumImparesYpos, maxPctjImparesyPos;

    /// b) ----------------------------------------------
    int maximo, contadorGruposOrdenados = 0;
    bool grupoOrdenado = true;

    for (int grupo=1; grupo<=10; grupo++)
    {
        contadorNumeros = 0;
        contadorImparesPositivos = 0;
        grupoOrdenado = true; ///b)

        cout << "Ingrese un numero: ";
        cin >> n;

        while (n != 0)
        {
            /// a) ----------------------------------------------
            contadorNumeros++;

            if (n % 2 != 0 && n > 0)
            {
                contadorImparesPositivos++;
            }

            /// b) ----------------------------------------------

            if (contadorNumeros == 1)
            {
                maximo = n;
            }
            else
            {
                if (n < maximo)
                {
                    maximo = n;
                }
                else
                {
                    grupoOrdenado = false;
                }
            }

            cout << "Ingrese un numero: ";
            cin >> n;

            /// b) ----------------------------------------------
            if (n == 0)
            {
                if (grupoOrdenado)
                {
                    contadorGruposOrdenados++;
                }
            }

        }

        /// a) ----------------------------------------------
        if (contadorImparesPositivos > 0)
        {
            pctjNumImparesYpos = (float)(contadorImparesPositivos * 100) / contadorNumeros;

            grupoConNumImparesYPos++;

            if (grupoConNumImparesYPos == 1)
            {
                maxGrupoNumImparesYpos = grupo;
                maxPctjImparesyPos = pctjNumImparesYpos;
            }
            else
            {
                if (pctjNumImparesYpos > maxPctjImparesyPos)
                {
                    maxGrupoNumImparesYpos = grupo;
                    maxPctjImparesyPos = pctjNumImparesYpos;
                }
            }
        }

    }

    /// a) ----------------------------------------------
    cout << "El grupo con mayor porcentaje de numeros impares y positivos es el Grupo " << maxGrupoNumImparesYpos << endl;

    /// b) ----------------------------------------------
    cout << "La cantidad de grupos ordenados es de: " << contadorGruposOrdenados << endl;

    system ("pause");
    return 0;
}
