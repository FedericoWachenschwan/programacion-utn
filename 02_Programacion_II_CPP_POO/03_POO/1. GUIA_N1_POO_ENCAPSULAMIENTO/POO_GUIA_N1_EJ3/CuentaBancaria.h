#pragma once

class CuentaBancaria
{
private:
    int numero_de_cuenta;
    float saldo_actual;

public:
    CuentaBancaria(int numero, float saldo);
    void depositar(float monto);
    void retirar (float monto);
    float obtenerSaldo();
};
