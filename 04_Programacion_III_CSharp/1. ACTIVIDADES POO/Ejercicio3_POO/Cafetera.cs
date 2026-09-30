using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio3_POO
{
    internal class Cafetera
    {
        public int CapacidadMl { get; set; }
        public int NivelMl { get; set; }

        public Cafetera()
        {
            CapacidadMl = 1000;
            NivelMl = 0;
        }

        public Cafetera(int capacidad, int nivelMl)
        {
            this.CapacidadMl = capacidad;

            if (nivelMl >= 0 && nivelMl <= capacidad)
            {
                this.NivelMl = nivelMl;
            }
            else
            {
                Console.WriteLine("El contenido que quiere cargar supera lo contenido por el envase");
            }
        }

        public void CargarAgua(int ml)
        {
            if (NivelMl + ml > CapacidadMl)
            {
                NivelMl = CapacidadMl;
                Console.WriteLine("Capacidad superada. Se cargó hasta el máximo.");
            }
            else
            {
                NivelMl += ml;
            }
        }

        public int ServirTaza()
        {
            if (NivelMl >= 200)
            {
                NivelMl -= 200;

                return 200;
            }
            else
            {
                Console.WriteLine("No es posible servir en la taza.");
                return 0;
            }
        }

        public int ServirTaza (int cantidad_pedida)
        {
            if (cantidad_pedida <= NivelMl)
            {
                NivelMl -= cantidad_pedida;

                return cantidad_pedida;
            }
            else
            {
                Console.WriteLine("No es posible servir en la taza.");
                return 0;
            }
        }

        public void MostrarEstado()
        {
            Console.WriteLine("Nivel: " + NivelMl + " / " + CapacidadMl + " ml");
        }
    }
}
