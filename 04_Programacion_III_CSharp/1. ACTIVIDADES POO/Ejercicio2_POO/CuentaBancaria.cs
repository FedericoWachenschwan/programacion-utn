using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio2_POO
{
    internal class CuentaBancaria
    {
        public CuentaBancaria()
        {

        }

        public CuentaBancaria(string numeroCuenta, string titular, decimal saldoInicial)
        {
            NumeroCuenta = numeroCuenta;
            Titular = titular;
            
            if (saldoInicial >= 0)
            {
                Saldo = saldoInicial;
            }
            else
            {
                Console.WriteLine("Cuenta sin Saldo");
            }
        }

        ////PROPIEDADES:
        public string NumeroCuenta { get; set; }
        public string Titular { get; set; }
        public decimal Saldo { get; set; }

        ////MÉTODOS:
        public void Depositar (decimal monto)
        {
            if (monto > 0)
            {
                Saldo += monto;
            }
            else
            {
                Console.WriteLine("Monto inválido.");
            }
        }

        public bool Extraer (decimal monto)
        {
            if (monto <= Saldo)
            {
                Saldo -= monto;
                return true;
            }
            else
            {
                Console.WriteLine("Saldo insuficiente.");
                return false;
            }
        }

        public void MostrarEstado()
        {
            Console.WriteLine("El numero es: " + NumeroCuenta);
            Console.WriteLine("El titular es: " + Titular);
            Console.WriteLine("El saldo es: " + Saldo);
        }

    }
}
