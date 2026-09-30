#include <iostream>
#include <cstdlib>

using namespace std;

/* 11 Hacer una función llamada contarDigitos que reciba por valor un número
 entero y determine y devuelva la cantidad de dígitos del número. Por ejemplo,
 si se recibe el número 840 debe devolver 3.
 Hacer un programa que, a partir de un número que ingresa el usuario, informe
 por pantalla la cantidad de dígitos del número ingresado.*/

int contarDigitos (int n);

int main()
{
    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << "La cantidad de digitos que tiene el numero ingresado, es de " << contarDigitos (num) << endl;


	system("pause");
	return 0;
}

int contarDigitos (int n)
{
    int contador = 0;
    while (n != 0)
    {
        n = n / 10;
        contador ++;
    }
    return contador;
}
