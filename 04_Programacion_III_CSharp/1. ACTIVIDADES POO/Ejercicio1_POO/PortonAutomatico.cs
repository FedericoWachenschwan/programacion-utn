using System;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio1_POO
{
    internal class PortonAutomatico
    {

        ////A) ==================================================================
        ////PROPIEDADES: 
        private int _apertura;
        public int Apertura
        {
            get
            {
                return _apertura;
            }

            set
            {
                if (value >= 0 && value <= 100)
                {
                    _apertura = value;
                }
                else
                {
                    Console.WriteLine("El valor de apertura debe estar entre 0 y 100.");
                }
            }
        }

        public bool EstaCerrado
        {
            get
            {
                if (_apertura == 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }

        public bool EstaAbiertoCompleto
        {
            get
            {
                if (_apertura == 100)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }

        public PortonAutomatico()
        {
            _apertura = 0;
        }

        public PortonAutomatico(int aperturaInicial)
        {
            
            if (aperturaInicial < 0)
            {
                _apertura = 0;
            }
            else
            {
                if (aperturaInicial > 100)
                {
                    _apertura = 100;
                }
                else
                {
                    _apertura = aperturaInicial;
                }
            }
         
        }

        ////MÉTODOS:
        public void Abrir()
        {
            if (_apertura != 100)
            {
                _apertura = 100;
            }
            else
            {
                Console.WriteLine("Ya está abierto al 100%");
            }
        }

        public void Cerrar()
        {
            if (_apertura != 0)
            {
                _apertura = 0;
            }
            else
            {
                Console.WriteLine("Ya está completamente cerrado");
            }
        }

        public void MostrarEstado()
        {
            if (_apertura == 0)
            {
                Console.WriteLine("Cerrado");
            }
            else
            {
                if (_apertura == 100)
                {
                    Console.WriteLine("Abierto total (100%)");
                }
                else
                {
                    Console.WriteLine("Abierto parcial (" + _apertura + "%)");
                }
            }
        }

        ////B)
        public void Abrir(int porcentaje)
        {
            if (porcentaje >= 1 && porcentaje <= 99)
            {
                _apertura = porcentaje;
            }
            else
            {
                Console.WriteLine("Porcentaje inválido. Debe ser 1-99");
            }
        }

        public void AbrirPeatonal()
        {
            _apertura = 20;
        }

        public void Stop()
        {
            Console.WriteLine("Movimiento detenido");
        }

        public bool Toggle()
        {
            if (_apertura == 0)
            {
                _apertura = 100;
                return true;
            }
            else
            {
                _apertura = 0;
                return false;
            }
        }
    }
}
