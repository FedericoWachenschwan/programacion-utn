#include <iostream>
using namespace std;

//12
//Hacer un programa para ingresar tres n£meros diferentes y determinar e informar el n£mero del medio.
//Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
//N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
//N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
//N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8


int main(){

    int numero1, numero2, numero3; /// Entrada

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;


    if (numero1 > numero2 && numero1 < numero3 || numero1 > numero3 && numero1 < numero2){

        cout << "El numero del medio es el " << numero1 <<endl;

    } else {  if (numero2 > numero1 && numero2 < numero3 || numero2 > numero3 && numero2 < numero1){

        cout << "El numero del medio es el " << numero2 <<endl;

        } else {

            cout << "El numero del medio es el " << numero3 <<endl;
        }
    }


system("pause");
return 0;
}
