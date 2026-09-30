#include <iostream>
#include <cstdlib>

using namespace std;

/*24 Hacer un programa que permita ingresar el sueldo de 10 empleados y
determine: - - - -
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.*/

int main(){

    int sueldo; ///ENTRADA
    int maximo, minimo; ///MAXIMO Y MINIMO
    int acSueldo = 0; ///PROMEDIO
    float promedio; ///PROMEDIO
    int contadorSueldosMayores = 0;

    for (int i=1; i<=10; i++){
        cout << "Ingrese un sueldo: ";
        cin >> sueldo;

        ///PROMEDIO
        acSueldo = acSueldo + sueldo;

        ///CANTIDAD DE SUELDOS MAYORES A $50.000
        if (sueldo > 50000){
            contadorSueldosMayores ++;
        }
        ///MAXIMO:
        if (i == 1){
            maximo = sueldo;
            minimo = sueldo;
        } else {
            if ( sueldo > maximo){
                maximo = sueldo;

            } if (sueldo < minimo){
                minimo = sueldo;
            }
        }
    }

    promedio = acSueldo / 10.0;

    cout << "El sueldo maximo es de $" << maximo << endl;
    cout << "El sueldo minimo es de $" << minimo << endl;
    cout << "El sueldo promedio es de $" << promedio << endl;
    cout << "La cantidad de sueldos mayores a $50.000 son de " << contadorSueldosMayores << endl << endl;

system("pause");
   return 0;
}
