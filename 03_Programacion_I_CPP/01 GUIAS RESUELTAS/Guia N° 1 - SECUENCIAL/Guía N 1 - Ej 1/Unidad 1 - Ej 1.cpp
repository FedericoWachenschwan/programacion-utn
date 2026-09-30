#include <iostream>
using namespace std;

int main(){

//   1) Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que
//    se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

    int cantidadDeHoras, pagaPorHora;
    float sueldoTotal;

    cout << "Ingrese la cantidad de horas trabajadas:" << endl;
    cin >> cantidadDeHoras;
    cout << "Ingrese el valor que se le paga por hora trabajada:" << endl;
    cin >> pagaPorHora;
    sueldoTotal = cantidadDeHoras * pagaPorHora;
    cout << "El sueldo total es de $" << sueldoTotal << endl;

    system("pause");
    return 0;
}
