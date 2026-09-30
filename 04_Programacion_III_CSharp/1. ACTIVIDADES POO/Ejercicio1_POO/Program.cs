using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio1_POO
{
    internal class Program
    {
        static void Main(string[] args)
        {
            PortonAutomatico portonAutomatico1 = new PortonAutomatico();

            // PRUEBA 1: iniciar cerrado, Abrir() -> 100 -> "Abierto total (100%)"
            portonAutomatico1.MostrarEstado();
            portonAutomatico1.Abrir();
            portonAutomatico1.MostrarEstado();

            // PRUEBA 2: AbrirPeatonal() desde 100 -> pasar a 20 -> "Abierto parcial (20%)"
            portonAutomatico1.AbrirPeatonal();
            portonAutomatico1.MostrarEstado();

            // PRUEBA 3: Cerrar() -> 0
            portonAutomatico1.Cerrar();
            portonAutomatico1.MostrarEstado();

            // PRUEBA 4: Abrir(105) -> "Porcentaje inválido. Debe ser 1-99"
            portonAutomatico1.Abrir(105);
            portonAutomatico1.MostrarEstado();

            // PRUEBA 5: Abrir(10) en ciclo, consultar estado, al llegar a 50% Stop() y cortar
            PortonAutomatico portonAutomatico2 = new PortonAutomatico();
            while (portonAutomatico2.Apertura < 100)
            {
                portonAutomatico2.Apertura = portonAutomatico2.Apertura + 10;
                portonAutomatico2.MostrarEstado();

                if (portonAutomatico2.Apertura == 50)
                {
                    portonAutomatico2.Stop();
                    break;
                }
            }

            Console.WriteLine("Fin del programa. Presione una tecla para salir.");
            Console.ReadLine();
        }
    }
}