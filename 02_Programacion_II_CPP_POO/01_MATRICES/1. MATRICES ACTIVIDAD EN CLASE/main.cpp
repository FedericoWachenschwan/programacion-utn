#include <iostream>

using namespace std;

//Una cadena de materiales de construcción tiene 5 sucursales y vende 20 productos diferentes. Se desea procesar el movimiento de stock del día.
//Datos de entrada: El sistema recibe registros de ventas sin un orden particular:
//Código de Producto (1 a 20).
//Número de Sucursal (1 a 5).
//Cantidad vendida (un número entero).
//La carga de datos finaliza cuando se ingresa un Código de Producto igual a 0.
//Se pide informar
//A) Para cada sucursal los códigos de los productos que se vendieron y la cantidad total.
//B) La sucursal que mayor cantidad de productos haya vendido.


int main()
{
    int cod_de_producto, num_de_sucursal, cant_vendidad = 0; // ← ENTRADA

    ///A)
    int sucursal_ventas[20][5] = {};
    ///B)
    int sucursal_ventas_totales[5] = {}; ///Acumula las ventas totales de cada sucursal
    int numero_de_sucursal_que_mas_vendio; ///Guardamos el numero (indice) de la sucursal que hizo mas ventas
    bool vendio = false; ///Verificador de si hubo una sucursal con max ventas para luego compararla
    int maxima_cantidad_de_ventas;


    cout << "Ingrese el codigo de producto: ";
    cin >> cod_de_producto;

    while (cod_de_producto != 0)
    {
        cout << "Ingrese el numero de sucursal: ";
        cin >> num_de_sucursal;
        cout << "Ingrese la cantidad vendida: ";
        cin >> cant_vendidad;
        cout << endl;

        ///A)
        sucursal_ventas[cod_de_producto-1][num_de_sucursal-1] += cant_vendidad;

        ///B)
        sucursal_ventas_totales[num_de_sucursal-1] += cant_vendidad;

        cout << "Ingrese el codigo de producto: ";
        cin >> cod_de_producto;
    }

    cout << endl;

    ///A) Recorro por cada sucursal todos sus productos, si hubo ventas, lo muestro

    for (int i=0;i<5;i++)
    {
        for (int j=0;j<20;j++)
        {
            if (sucursal_ventas[j][i] > 0)
            {
                ///A)
                cout << "La sucursal " << i+1 << " realizo " << sucursal_ventas[j][i] << " de ventas del producto CODIGO #" << j + 1 << endl;
            }
        }

        ///B)

        if (vendio == false)
        {
            vendio = true;
            numero_de_sucursal_que_mas_vendio = i+1;
            maxima_cantidad_de_ventas = sucursal_ventas_totales[i];
        }
        else
        {
            if (sucursal_ventas_totales[i] > maxima_cantidad_de_ventas)
            {
                numero_de_sucursal_que_mas_vendio = i+1;
                maxima_cantidad_de_ventas = sucursal_ventas_totales[i];
            }
        }

        cout << endl;
    }

    ///B)
    cout << "La sucursal que mas ventas totales realizo es la " << numero_de_sucursal_que_mas_vendio << endl;

    return 0;
}
