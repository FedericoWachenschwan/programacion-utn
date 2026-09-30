#include <iostream>
#include <cstdlib>

using namespace std;

/* 13 Escribir una función llamada calcularPotencia para que, dados dos números
 enteros, calcule y devuelva la potencia del primero a la del segundo. Tener en
 cuenta las siguientes posibilidades:
 calcularPotencia(2, 3) → 8
 calcularPotencia(2, 0) → 1
 calcularPotencia(2,-3) → 0,125 */

float calcularPotencia (int base, int exponente);

int main()
{
    int base, exponente;

    cout << "Ingrese el numero base: ";
    cin >> base;
    cout << "Ingrese el numero exponente: ";
    cin >> exponente;

    cout << calcularPotencia(base, exponente) << endl;

	system("pause");
	return 0;
}

float calcularPotencia (int base, int exponente)
{
    int i = 1;
    float resultado = base;

    if (exponente == 0)
        {
        return 1;
    } else if (exponente > 0)
    {
        while (i < exponente)
        {
            resultado = resultado * base;
            i++;
        }
    } else if (exponente < 0)
    {
       exponente = -exponente; // lo vuelvo positivo
        while (i < exponente)
        {
            resultado = resultado * base;
            i++;
        }
        resultado = 1 / resultado;
    }

    return resultado;
}
