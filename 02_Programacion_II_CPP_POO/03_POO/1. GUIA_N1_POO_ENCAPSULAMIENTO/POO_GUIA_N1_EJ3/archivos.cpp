#include <iostream>
#include "CuentaBancaria.h"
using namespace std;

CuentaBancaria::CuentaBancaria(int numero, float saldo)
{
    numero_de_cuenta = numero;
    saldo_actual= saldo;
}

void CuentaBancaria::depositar(float monto)
{
    saldo_actual += monto;
}

void CuentaBancaria::retirar(float monto)
{
    if (monto <= saldo_actual)
    {
        saldo_actual -= monto;
    }
}
float CuentaBancaria::obtenerSaldo()
{
    return saldo_actual;
}
