#include <iostream>
#include <cstdlib>

using namespace std;

/*ENUNCIADO DE LA ACTIVIDAD:
----------------------------------------------------------------------------------------------------------------------------------------------------------
Una empresa registró las ventas que realizó durante el mes anterior. Para cada venta se tienen los siguientes datos:

Número de artículo (1 a 10)
Día (1 a 31)
Cantidad de artículos vendidos
Precio de costo.
Precio de venta.
Este lote finaliza con un registro con número de artículo igual a cero. Los registros están agrupados por número de artículo.

Se pide determinar e informar:

a) El número del artículo qué más ganancia haya recaudado.
b) La cantidad total de artículos vendidos en cada quincena sin tener en cuenta los artículos de los que no se hayan registrado ventas.
c) Teniendo en cuenta la cantidad total de ventas, informar el porcentaje de ventas para la primera semana del mes.
d) La cantidad de ventas del artículo 5 el día 16 del mes. De no detectar ventas, indicarlo con un cartel aclaratorio.
e) El número de artículos con el menor promedio facturado de todo el mes.
f) Teniendo en cuenta que el mes comienza un lunes, calcular la ganancia total obtenida durante el primer fin de semana del mes. */

int main()
{

    int numeroDeArticulo, dia, cantDeArticulosVendidos, articuloActual; ///ENTRADA
    float precioDeCosto, precioDeVenta; ///ENTRADA

    int articuloGananciaMax; ///A)
    float acumGanancia = 0, gananciaMax = 0; ///A)

    int totalVentasQuincena1 = 0, totalVentasQuincena2 = 0; ///B)

    int acTotalVentas = 0, acVentasPrimeraSemana = 0; ///C)
    float pctjVentasPrimeraSemana; ///C)

    int acArticuloVendido5 = 0; ///D)

    int ventas = 0, articuloMenorPromedio, acumTotalArticuloVendido; ///E)
    float menorPromedio, promedioGananciaArticulo = 0; ///E)

    cout << "Ingrese el numero de articulo: ";
    cin >> numeroDeArticulo;

    while (numeroDeArticulo != 0)
    {
        articuloActual = numeroDeArticulo;
        acumGanancia = 0; ///A)
        acumTotalArticuloVendido = 0; ///E)

        while (numeroDeArticulo == articuloActual && numeroDeArticulo != 0)
        {
            cout << "Ingrese el numero de dia que se realizaron las ventas de los articulos: ";
            cin >> dia;
            cout << "Ingrese la cantidad de articulos vendidos: ";
            cin >> cantDeArticulosVendidos;
            cout << "Ingrese el precio de costo del articulo: ";
            cin >> precioDeCosto;
            cout << "Ingrese el precio de venta del articulo: ";
            cin >> precioDeVenta;
            cout << endl << endl;

            ///A)
            acumGanancia += (precioDeVenta - precioDeCosto) * cantDeArticulosVendidos;


            ///B)
            if (dia >= 1 && dia <= 15)
            {
                totalVentasQuincena1 = totalVentasQuincena1 + cantDeArticulosVendidos;
            }
            else if (dia >= 16 && dia <= 31)
            {
                totalVentasQuincena2 = totalVentasQuincena2 + cantDeArticulosVendidos;
            }

            ///C)
            acTotalVentas += cantDeArticulosVendidos;

            if (dia >= 1 && dia <= 7)
            {
                acVentasPrimeraSemana += cantDeArticulosVendidos;
            }

            ///D)
            if (dia == 16)
            {
                if (articuloActual == 5)
                {
                    acArticuloVendido5 += cantDeArticulosVendidos;
                }
            }

            ///E)
            acumTotalArticuloVendido += cantDeArticulosVendidos;
        }

        ///A)
        if (acumGanancia > gananciaMax)
        {
            gananciaMax = acumGanancia;
            articuloGananciaMax = articuloActual;
        }

        ///E)
        promedioGananciaArticulo = acumGanancia / acumTotalArticuloVendido;
        if (ventas == 0)
        {
            ventas ++;
            menorPromedio = promedioGananciaArticulo;
            articuloMenorPromedio = articuloActual;
        }
        else if (promedioGananciaArticulo < menorPromedio)
        {
            menorPromedio = promedioGananciaArticulo;
            articuloMenorPromedio = articuloActual;
        }

        cout << "Ingrese el numero de articulo: ";
        cin >> numeroDeArticulo;

    }

    ///C
    if (acTotalVentas != 0)
    {
        pctjVentasPrimeraSemana = (acVentasPrimeraSemana * 100) / acTotalVentas;
    }
    else
    {
        pctjVentasPrimeraSemana = 0;
    }

    ///D)
    if (acArticuloVendido5 == 0)
    {
        cout << "No se registraron ventas del articulo 5 el dia 16 del mes" << endl;
    }
    else
    {
        cout << "Se registraron " << acArticuloVendido5 << " ventas del articulo 5 el dia 16 del mes" << endl;
    }

    cout << endl << endl;
    cout << "El numero del articulo que mas ganancia recaudo, es el " << articuloGananciaMax << endl; ///A)
    cout << "En la primera quincena hubo un total de " << totalVentasQuincena1 << " ventas, y en la segunda un total de " << totalVentasQuincena2 << " ventas" << endl; ///B)
    cout << "El porcentaje de ventas para la primera semana del mes es de un " << pctjVentasPrimeraSemana << "%" << endl;
    cout << "El menor numero de articulos de menor promedio vendidos es de " << articuloMenorPromedio << endl; ///E)
    cout << endl;

    system("pause");
    return 0;
}
