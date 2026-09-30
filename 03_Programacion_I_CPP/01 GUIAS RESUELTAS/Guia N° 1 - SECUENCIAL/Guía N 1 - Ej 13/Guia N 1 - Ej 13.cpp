#include <iostream>
#include <cstdlib>

using namespace std;

//13)
//Hacer un programa para un cajero automático para ingresar un importe a retirar y convertir el mismo en la cantidad de billetes de
// $1.000, $500, $200 y $100 a entregar.
//Ejemplo A: Si el importe a retirar es $2500 se mostrará por pantalla que se deberán entregar 2 billetes de $1.000, 1 billete de
//$500,  0 billetes de $200 y 0 billetes de $100.
//Ejemplo B: Si el importe a retirar es $3400 se mostrará por pantalla que se deberán entregar 3 billetes de $1.000, 2 billetes de
//$200, 0 billetes de $500 y 0 billetes de $100.
//Ejemplo C: Si el importe a retirar es $300 se mostrará por pantalla que se deberán entregar 1 billete de $200, 1 billete de $100,
//0 billetes de $1.000 y 0 billetes de $500.
//Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos múltiplo de $100 ya que el cajero
//no cuenta con billetes de $50, $20 o $10.

int main(){

    int importeARetirar; // Entrada
    int billetesDe1000, billetesDe500, billetesDe200, billetesDe100;

    cout << "Ingrese la cantidad de billetes a retirar: ";
    cin >> importeARetirar;

    billetesDe1000 = importeARetirar / 1000;
    billetesDe500 = (importeARetirar % 1000) / 500;
    billetesDe200 = ((importeARetirar % 1000) % 500) / 200;
    billetesDe100 = (((importeARetirar % 1000) % 500) % 200) / 100;

    cout << "Se deberan entregar: "
    << billetesDe1000 << " billetes de $1000, "
    << billetesDe500 << " billetes de $500, "
    << billetesDe200 << " billetes de $200 y "
    << billetesDe100 << " billetes de $100." << endl;

system("pause");
   return 0;
}
