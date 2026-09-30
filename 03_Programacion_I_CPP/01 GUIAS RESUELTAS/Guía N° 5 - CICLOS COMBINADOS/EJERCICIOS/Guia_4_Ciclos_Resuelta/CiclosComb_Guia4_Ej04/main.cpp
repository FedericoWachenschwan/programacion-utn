#include <iostream>
#include <cstdlib>

using namespace std;

//4 Dada una lista de números compuesta por 10 grupos y cada grupo separado del
//siguiente por un cero, se pide determinar e informar:
//a) Para cada uno de los grupos el máximo de los números pares y el máximo de
//los números impares. Se informan 2 resultados por cada grupo.
//b) Para cada uno de los grupos el porcentaje de números negativos y números
//positivos. Se informan 2 resultados por cada grupo.
//c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1
//resultado al final.

int main()
{

    int n, grupo; ///Entrada

    int maxPax, maxImpar, contadorPares = 0, contadorImpares = 0; ///Salida -> a)

    int contadorNumeros = 0, contadorNegativos = 0, contadorPositivos = 0; ///Salida -> b)
    float pctjPositivos, pctjNegativos; ///Salida -> b)

    int contadorPositivosTotales = 0; ///Salida -> c)

    for (grupo=1; grupo<=10; grupo++)
    {
        contadorNumeros = 0;

        contadorImpares = 0;
        contadorPares = 0;

        contadorNegativos = 0;
        contadorPositivos = 0;

        cout << "Ingrese un numero de la lista: ";
        cin >> n;

        while (n != 0)
        {
            contadorNumeros++;

            /// a) ----------------------------------------------
            if (n % 2 == 0)
            {
                contadorPares++;

                if (contadorPares == 1)
                {
                    maxPax = n;
                }
                else
                {
                    if (n > maxPax)
                    {
                        maxPax = n;
                    }
                }
            }
            else
            {
                contadorImpares++;

                if (contadorImpares == 1)
                {
                    maxImpar = n;
                }
                else
                {
                    if (n > maxImpar)
                    {
                        maxImpar = n;
                    }
                }
            }

            /// b) ----------------------------------------------

            if (n > 0)
            {
                contadorPositivos++;

                /// c) ----------------------------------------------

                contadorPositivosTotales++;
            }
            else
            {
                contadorNegativos++;
            }

            cout << "Ingrese un numero de la lista: ";
            cin >> n;

        }

        /// a) ----------------------------------------------
        cout << "El maximo numero par del Grupo " << grupo << " es el numero: " << maxPax << endl;
        cout << "El maximo numero impar del Grupo " << grupo << " es el numero: " << maxImpar << endl;

        /// b) ----------------------------------------------
        pctjPositivos = (float)(contadorPositivos * 100) / contadorNumeros;
        pctjNegativos = (float) (contadorNegativos *100) / contadorNumeros;

        cout << "El porcentaje de numeros positivos ingresados del Grupo " << grupo << " es de " << pctjPositivos << "%" << endl;
        cout << "El porcentaje de numeros negativos ingresados del Grupo " << grupo << " es de " << pctjNegativos << "%" << endl;
    }

    /// c) ----------------------------------------------
    cout << "La cantidad de numeros positivos totales es de: " << contadorPositivosTotales << endl;

    system("pause");
    return 0;
}
