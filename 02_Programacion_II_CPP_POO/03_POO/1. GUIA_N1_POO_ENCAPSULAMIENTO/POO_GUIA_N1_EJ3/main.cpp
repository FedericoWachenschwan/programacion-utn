#include <iostream>
#include "CuentaBancaria.h"
using namespace std;

//3
//Crear una clase llamada CuentaBancaria que represente una cuenta bancaria. La clase debe tener los siguientes atributos:
//Número de cuenta (entero)
//Saldo actual (float)
//Implementar los siguientes métodos:
//Un constructor que me permita establecer el número de cuenta y el saldo.
//Un método depositar(float monto) que incremente el saldo.
//Un método retirar(float monto) que disminuya el saldo si hay fondos suficientes, caso contrario no hace nada.
//Un método obtenerSaldo() que devuelva el saldo actual.

int main()
{
    CuentaBancaria cuenta(1234, 11.05);

    cout << "Saldo inicial: " <<cuenta.obtenerSaldo() << endl;
    cuenta.depositar(100);
    cout << "Saldo tras depositar: " << cuenta.obtenerSaldo() << endl;
    cuenta.retirar(50);
    cout << "Saldo tras retirar: " << cuenta.obtenerSaldo() << endl;

    return 0;
}
