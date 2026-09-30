#include <iostream>

using namespace std;

//5- Registro de asistencias en una empresa
// Una empresa lleva un registro de asistencia de sus 30 empleados.
// Cada vez que un empleado asiste al trabajo, se registra:
//Número de empleado (valor entre 100 y 129).
//Mes (1 a 12).
//Día (1 a 31).
//Horas trabajadas en el día.
//Los registros finalizan cuando se ingresa un número de empleado igual a 0.

//Al finalizar la carga, se debe calcular y mostrar:
//A) El total de horas trabajadas en el mes de abril entre todos los empleados.
//B) Para cada mes del año, la cantidad de días en los que al menos un empleado estuvo presente.
//C) Para cada empleado, su número de empleado y la cantidad total de meses en los que trabajó.

int main()
{
    ///ENTRADA:
    int numero_de_empleado, asistencia[12][31] = {0}, mes, dia;
    char asistio;
    float horas_trabajadas_dia = 0;

    ///A)
    float horas_trabajadas_totales_abril = 0;

    ///B)
    int cont_de_dias_presentes_del_mes[12] = {0};

    ///C)
    int empleados[30][12] = {0}, cant_tot_meses_trabajados = 0;

    cout << "Ingrese el numero de empleado: ";
    cin >> numero_de_empleado;

    while (numero_de_empleado != 0)
    {

        cout << "Indique si el empelado asistio (s/n): ";
        cin >> asistio;

        if (asistio == 's')
        {
            cout << "Ingrese el numero de mes: ";
            cin >> mes;
            cout << "Ingrese el numero de dia: ";
            cin >> dia;
            cout<< "Ingrese la cantidad de horas trabajadas en el dia: ";
            cin >> horas_trabajadas_dia; cout << endl;
            cout << "=======================================================" << endl << endl;

            ///A)
            if (mes == 4)
            {
                horas_trabajadas_totales_abril += horas_trabajadas_dia;
            }

            ///B)
            asistencia[mes-1][dia-1] = 1;

            ///C)
            if (empleados[numero_de_empleado-100][mes-1] == 0)
            {
                empleados[numero_de_empleado-100][mes-1] = 1;
            }
        }
        cout << "Ingrese el numero de empleado: ";
        cin >> numero_de_empleado;
    }

    ///A)
    cout << endl;
    cout << "=======================================================" << endl << endl;
    cout << "A)" << endl;
    cout << "La cantidad de horas totales trabajadas por todos los empleados durante el mes de abril es de " << horas_trabajadas_totales_abril << " horas." << endl;

    ///B)
    cout << endl << "B)" << endl;

    for (int i= 0; i<12; i++)
    {
        for(int j=0; j<31; j++)
        {
            ///B)
            if (asistencia[i][j]==1) ///Si ese mes se presento alguien, lo cuento
            {
                cont_de_dias_presentes_del_mes[i] += 1;
            }
        }
        ///B)
        cout << "Durante el mes " << i+1 << " hubo un total de " << cont_de_dias_presentes_del_mes[i]
        << " dias en los que se prensento al menos un empleado a trabajar." << endl;
    }

    ///C)
    for (int k=0; k<30; k++) ///Recorro todos los empleados
    {
        cant_tot_meses_trabajados = 0;

        for (int l=0; l<12; l++) ///Por cada mes, pregunto si ese empleado lo trabajó, de ser así, lo cuento
        {
            if (empleados[k][l] == 1) ///Si ese empleado trabajó un mes, sumo ese mes
            {
                cant_tot_meses_trabajados ++;
            }
        }

        cout << "El empleado " << k + 100 << " trabajo un total de " << cant_tot_meses_trabajados << " meses " << endl;

    }

    return 0;
}
