#include <iostream>

using namespace std;

int main()
{
    int dia, id_de_categoria_de_gasto; ///ENTRADA
    float importe_del_gasto; ///ENTRADA

    ///A)
    float ac_categorias_gastos[10]={};
    string nombre_de_categoria[10] = {"Servicios", "Alimentacion", "Limpieza", "Transporte",
    "Educación", "Salud", "Ocio", "Impuestos", "Vestimenta", "Inversiones"};
    float mayor_gasto_de_una_categoria;
    int numero_de_categoria_mayor_gasto;

    ///C)
    int contador_categorias_sin_movimientos_registrados = 0;

    ///D)
    int contador_gastos_por_dia[31] = {};


    cout << "Ingrese el numero de dia: ";
    cin >> dia;

    while (dia !=0)
    {
        cout << "Ingrese el ID de Categoria de gasto (numero entero entre 1 y 10): ";
        cin >> id_de_categoria_de_gasto;
        cout << "Ingrese el importe del gasto: ";
        cin >> importe_del_gasto;
        cout << "===========================================" << endl;;

        ///A)
        ac_categorias_gastos[id_de_categoria_de_gasto-1] += importe_del_gasto;


        ///D)
        contador_gastos_por_dia[dia-1]++;

        cout << "Ingrese el numero de dia: ";
        cin >> dia;
    }

    cout << endl;

    for (int i=0; i<10; i++)
    {
        ///A)

        if (i == 0)
        {
            mayor_gasto_de_una_categoria = ac_categorias_gastos[i];
            numero_de_categoria_mayor_gasto = i+1;
        }
        else
        {
            if (ac_categorias_gastos[i] > mayor_gasto_de_una_categoria)
            {
                mayor_gasto_de_una_categoria = ac_categorias_gastos[i];
                numero_de_categoria_mayor_gasto = i+1;
            }
        }

        ///B)
        cout << "La categoria #" << i+1 << " (" << nombre_de_categoria[i]
        << ") acumulo un total de $" << ac_categorias_gastos[i] << " en concepto de gastos del mes." << endl;

        ///C)
        if (ac_categorias_gastos[i] == 0)
        {
            contador_categorias_sin_movimientos_registrados ++;
        }
    }

    ///A)
    cout << endl;
    cout << "La categoria a la que mayor dinero se le destino fue la #" << numero_de_categoria_mayor_gasto
    << " y su nombre de categoria es: " << nombre_de_categoria [numero_de_categoria_mayor_gasto-1] << endl;

    ///C)
    cout << endl;
    cout << "La cantidad de categorias de gasto que no registraron movimientos son " << contador_categorias_sin_movimientos_registrados << endl;


    ///D)
    cout << endl;
    for (int j=0; j<31; j++)
    {
        if (contador_gastos_por_dia[j]>0)
        {
            cout << "El dia " << j+1 << " se realizaron " << contador_gastos_por_dia[j] << " gastos" << endl;
        }
    }

    return 0;
}
