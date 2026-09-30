#include <iostream>
using namespace std;

//7
//Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí,
// caso contrario no emitir nada.
//Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.

int main(){

    int num1, num2, num3; ///Entrada

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    if (num1 != num2 && num2 != num3){

        cout << "Los tres numeros son distintos entre si" << endl;

    } else{

        cout << "Los tres numeros no son distintos entre si" << endl;
    }

system("pause");
return 0;
}
