#include <iostream>
#include <cstdlib>
using namespace std;

//22 Una f brica de caramelos dispone de un presupuesto inicial para inaugurar su
//sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los
//siguientes costos: - - -
//Costo de alquiler de $10000
//Costo por caramelo producido de $2.50
//Costo por mantenimiento cada 100 caramelos de $5000
//Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
//mes, informar: - -
//"El presupuesto es suficiente para cubrir los costos de $XXXX"
//"El presupuesto no es suficiente, necesita un cr‚dito de $XXXX"

int main() {
    float presupuesto;
    int cant_car_prod;

    cout << "Ingrese su presupuesto: ";
    cin >> presupuesto;

    cout << "Ingrese qu‚ cantidad de caramelos desea producir: ";
    cin >> cant_car_prod;

    // C lculo de costos
    float costoAlquiler = 10000;
    float costoProduccion = cant_car_prod * 2.5;
    float costoMantenimiento = (cant_car_prod / 100) * 5000;
    float costoTotal = costoAlquiler + costoProduccion + costoMantenimiento;

    // Comparaci¢n con el presupuesto
    if (presupuesto >= costoTotal) {
        cout << "El presupuesto es suficiente para cubrir los costos de $" << costoTotal << endl;
    } else {
        float creditoNecesario = costoTotal - presupuesto;
        cout << "El presupuesto no es suficiente, necesita un cr‚dito de $" << creditoNecesario << endl;
    }

    system("pause");
    return 0;
}
