using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio2_POO
{
    internal class Program
    {
        static void Main(string[] args)
        {
            CuentaBancaria cuentaBancaria = new CuentaBancaria();

            Console.WriteLine("Deposito de $10.000");
            cuentaBancaria.Depositar(10000);
            cuentaBancaria.MostrarEstado();

            Console.WriteLine("Intento extraer $12.000");
            cuentaBancaria.Extraer(12000);
            cuentaBancaria.MostrarEstado();

            Console.WriteLine("Extraer $5.000");
            cuentaBancaria.Extraer(5000);
            cuentaBancaria.MostrarEstado();

            Console.ReadLine();
        }
    }
}
