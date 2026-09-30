using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio3_POO
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Cafetera cafetera = new Cafetera();

            cafetera.CargarAgua(500);
            cafetera.ServirTaza();
            cafetera.MostrarEstado();
            
            cafetera.ServirTaza();
            cafetera.MostrarEstado();

            cafetera.ServirTaza(400);
            cafetera.MostrarEstado();

            Console.ReadLine();
        }
    }
}
