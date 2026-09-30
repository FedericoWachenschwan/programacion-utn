#include <iostream>
#include <cstdlib>

using namespace std;

/*25 Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y
determine: -
El legajo del empleado con mayor sueldo */

int main(){

    int legajo, sueldo; ///ENTRADA
    int sueldoMaximo, legajoSueldoMaximo; ///SALIDA

    for (int i=1; i<=10; i++){
        cout << "Ingrese el numero de legajo del empleado: ";
        cin >> legajo;
        cout << endl;
        cout << "Ingrese el sueldo del empleado: ";
        cin >> sueldo;
        cout << endl;

        if (i == 1){
            sueldoMaximo = sueldo;
            legajoSueldoMaximo = legajo;
        }else if (sueldo > sueldoMaximo){
                sueldoMaximo = sueldo;
                legajoSueldoMaximo = legajo;
        }
    }

    cout << "El legajo del empleado con mayor sueldo es: " << legajoSueldoMaximo << endl;

system("pause");
   return 0;
}
