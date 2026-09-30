#include <iostream>
#include <cstdlib>

using namespace std;

/* 14 Hacer una función llamada esNumeroArmstrong que reciba un número entero
 y devuelva true si el número enviado es un Número Armstrong y false si no lo
 es.
 NOTA: Un número N es un número Armstrong si la suma de sus cifras elevadas
 a la cantidad de cifras del número da como resultado N.
 Por ejemplo:
 371 tiene 3 cifras.
 Luego:
 3(3) + 7(3) + 1(3)→ 371
 27 + 343 + 1 → 371*/

bool esNumeroArmstrong (int n);

int main()
{



	system("pause");
	return 0;
}

bool esNumeroArmstrong (int n)
{
    int contador = 0;

    while (n != 0)
    {
        n = n / 10;
        contador ++;
    }

    while ()
}
