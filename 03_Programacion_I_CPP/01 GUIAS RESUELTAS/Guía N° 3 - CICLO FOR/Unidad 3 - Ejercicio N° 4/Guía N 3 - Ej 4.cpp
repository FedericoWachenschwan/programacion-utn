#include <iostream>
using namespace std;

//4
//Hacer un programa para que el usuario ingrese un número positivo y luego se muestren por pantalla los números entre el 1 y el número
// ingresado por el usuario.
//Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.


int main(){

    int num;

    cout << "Ingrese un número positivo: ";
    cin >> num;

    for (int i=1; i <= num; i++){

    cout << i <<endl;

    }

system("pause");
return 0;
}
