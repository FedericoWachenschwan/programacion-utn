#include <iostream>
#include <cstdlib>

using namespace std;

/*28 La cuenta corriente de la famosa cantante Lady Lara ha registrado 14
movimientos durante la semana pasada. Por cada movimiento se registró: - - - -
Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe
Existe un registro por movimiento. Se desea calcular e informar: - - - -
A)El saldo final de la cuenta.
B)El porcentaje de movimientos de extracción y el porcentaje de depósito.
C)El depósito de mayor importe indicando también día y número de
movimiento.
D)La cantidad de movimientos del día 10. */

int main(){

    ///ENTRADA:
    int numeroDeMovimiento, dia;
    char tipo;
    float importe;

    float saldoFinal = 0; ///A)

    int cantidadDeMovimientosDeExtraccion = 0, cantidadDeMovimientosDeDeposito = 0; ///B)
    float porcentajeExtraccion, porcentajeDeposito;

    int contadorImporte = 0, diaMayorImporte = 0, movMayorImporte = 0; ///C)
    float mayorImporte = 0; ///C)

    int contadorMovimientosDia10 = 0; ///D)

    cout << "==============MOVIMIENTOS==================" << endl;
    cout << "-------------------------------------------" << endl;

    for (int movimiento = 1; movimiento <=14 ; movimiento++){
        cout << "Ingrese el numero de movimiento: ";
        cin >> numeroDeMovimiento;
        cout << endl;
        cout << "Ingrese el numero de dia: ";
        cin >> dia;
        cout << endl;
        cout << "Ingrese el tipo de movimiento 'D' para depositar o 'E' para extraer: ";
        cin >> tipo;
        cout << "-------------------------------------------" << endl;

        ///D)
        if (dia == 10){
            contadorMovimientosDia10 ++;
        }

        switch (tipo)
        {
        case 'E':
            cout << "Ingrese que cantidad de dinero desea extraer: ";
            cin >> importe;
            ///A)
            saldoFinal = saldoFinal - importe;
            ///B)
            cantidadDeMovimientosDeExtraccion ++;
            break;

        case 'D':
            cout << "Ingrese que cantidad de dinero desea depositar: ";
            cin >> importe;
            ///A)
            saldoFinal = saldoFinal + importe;
            ///B)
            cantidadDeMovimientosDeDeposito ++;

            ///C)
            contadorImporte ++;
            if (contadorImporte == 1){
                mayorImporte = importe;
                diaMayorImporte = dia;
                movMayorImporte = movimiento;
            } else if (importe > mayorImporte){
                mayorImporte = importe;
                diaMayorImporte = dia;
                movMayorImporte = movimiento;
            }

            break;

        }

        cout << endl << "-------------------------------------------" << endl;
    }

    ///B)
    porcentajeExtraccion = (cantidadDeMovimientosDeExtraccion * 100) / 14;
    porcentajeDeposito = (cantidadDeMovimientosDeDeposito * 100) / 14;

    cout << "El saldo final de la cuenta es: $" << saldoFinal << endl; ///A)
    cout << "El porcentaje de movimientos de extraccion es de " << porcentajeExtraccion << "% y el porcentaje de movimientos de deposito es de" << porcentajeDeposito << "%" << endl;
    cout << "El deposito de mayor importe es de $" << mayorImporte << " y se realizo el dia " << diaMayorImporte << " y su numero de movimiento es el " << movMayorImporte << endl; ///C)
    cout << "La cantidad de movimientos que tuvo el dia 10 es de " << contadorMovimientosDia10 << endl;
system("pause");
   return 0;
}
