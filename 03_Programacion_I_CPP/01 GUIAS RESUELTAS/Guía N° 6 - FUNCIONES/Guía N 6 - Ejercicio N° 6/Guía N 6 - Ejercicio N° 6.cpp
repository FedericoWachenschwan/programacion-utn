#include <iostream>
#include <cstdlib>

using namespace std;

/* 6 Hacer una función que reciba un número entero por valor llamado día y un
 string llamado nombre por referencia y le asigne el nombre correspondiente
 según el número de día. Siendo 0 → Domingo y 6 → Sábado.*/

void asignarNombreDia (int x, string& y);

int main(){

    int num;
    string nombreDelDia;

    cout << "Ingrese el numero de dia: ";
    cin >> num;

    asignarNombreDia (num, nombreDelDia);

    cout << "El dia correspondiente es: " << nombreDelDia << endl;

	system("pause");
	return 0;
}

void asignarNombreDia (int dia, string& nombre){
    if (dia == 0){
        nombre = "Domingo";
    } else if (dia == 1){
        nombre = "Lunes";
    } else if (dia == 2){
        nombre = "Martes";
    } else if (dia == 3){
        nombre = "Miercoles";
    } else if (dia == 4){
        nombre = "Jueves";
    } else if (dia == 5){
        nombre = "Viernes";
    } else if (dia == 6){
        nombre = "Sabado";
    } else {
        nombre = "Dia invalido";
    }
}
