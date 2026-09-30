#include <iostream>
using namespace std;

//9
//Hacer un programa para ingresar tres números y listar el máximo de ellos.

int main(){

    int num1, num2, num3; //Entrada

    cout << "Ingrese el primer numero:  ";
    cin >> num1;
    cout << "Ingrese el segundo numero:  ";
    cin >> num2;
    cout << "Ingrese el tercer numero:  ";
    cin >> num3;

    if (num1 > num2 && num1 > num3){

        cout << "El numero maximo es " << num1 <<endl;

    } else { if(num2 > num1 && num2 > num3){

        cout << "El numero maximo es " << num2 <<endl;

        } else {

          cout << "El maximo numero maximo es " << num3 <<endl;

        }
    }

system("pause");
return 0;
}
