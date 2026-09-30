#include <iostream>
#include <cstdlib>

using namespace std;

/* 5 Hacer una función llamada Redondear que reciba como parámetro un número
 float y devuelva un número entero con el redondeo del mismo.
 Por ejemplo:
 Si recibe 7.78, debe devolver 8.
 Si recibe 7.48, debe devolver 7.
 Si recibe 7.5, debe devolver 8.
 Hacer un programa para ingresar un número y, utilizando Redondear, emita
 luego un cartel indicando el número redondeado. */

int redondear (float n);

int main(){
    float n;

    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Numero redondeado: " << redondear (n) << endl;


	system("pause");
	return 0;
}

int redondear (float n){
    int parteEntera = n;
    float decimal = n - parteEntera;

    if (decimal >= 0.5){
        return parteEntera + 1;
    }
    return parteEntera;
}
