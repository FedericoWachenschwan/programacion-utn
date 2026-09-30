#include <iostream>
#include <cstdlib>

using namespace std;

/*18 Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la
siguiente escala:
$10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$12 por kW por el consumo excedente de 101 a 200 kW.
$15 por kW por el consumo excedente de 201 kW en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado
cliente, el programa calcule e informe el total a pagar.
Ejemplo 1: Un consumo de 55 kW, se calcular : $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calcular : $10 x 100 + $12 x 25 = $1300.
Ejemplo 3: Un consumo de 250 kW, se calcular : $10 x 100 + $12 x 100 + $15 x
50 = $2950. */

int main(){

    int kilovatioConsumido; /// Entrada
    float total_a_pagar; /// Salida

    cout << "Ingrese la cantidad de Kilovatios que el cliente ha consumido: ";
    cin >> kilovatioConsumido;

    if (kilovatioConsumido <= 100){
        total_a_pagar = kilovatioConsumido * 10;

    } else if (kilovatioConsumido > 100 && kilovatioConsumido <= 200){
          total_a_pagar = ((kilovatioConsumido - 100) * 12) + 1000;

    } else {
        total_a_pagar = (100 * 10) + (100 * 12) + ((kilovatioConsumido - 200) * 15);

    }

    cout << "El total a pagar es de: $" << total_a_pagar << endl;

system("pause");
   return 0;
}
