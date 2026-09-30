#include <iostream>
using namespace std;

//14 Hacer un programa para ingresar por teclado la fecha de nacimiento de una
//persona, ingresando día, mes y año como 3 datos individuales. Luego ingresar
//la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular
//luego la edad en años de esa persona y listar por pantalla.
//Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual
//es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en
//diciembre.
//Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual
//es 26/2/2019 la edad de esa persona es 19.
//Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual
//es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir
//los 19 años.


int main(){

    int diaNac, mesNac, anioNac, diaActual, mesActual, anioActual; /// Entrada
    int edad; /// Salida

    cout << "Ingrese el día de nacimiento: ";
    cin >> diaNac;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNac;
    cout << "Ingrese el anio de nacimiento: ";
    cin >> anioNac;

    cout << "Ingrese el dia actual: ";
    cin >> diaActual;
    cout << "Ingrese el mes actual: ";
    cin >> mesActual;
    cout << "Ingrese el anio actual: ";
    cin >> anioActual;

    if (diaActual >= diaNac && mesActual >= mesNac || mesActual > mesNac){

        edad = anioActual - anioNac;

    } else {

        edad = (anioActual - anioNac) - 1;
    }

    cout << "La edad actual es de: " <<edad <<endl;

system("pause");
return 0;
}
