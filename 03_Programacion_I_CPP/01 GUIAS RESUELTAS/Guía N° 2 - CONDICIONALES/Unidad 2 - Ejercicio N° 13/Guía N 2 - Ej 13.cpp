#include <iostream>
using namespace std;

//13
//Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor.
//Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
//Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
//Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
//Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.

int main(){



    int numero1, numero2, numero3; /// Entrada
    int mayor, segundoMayor, menor; /// Salida

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    if (numero1 > numero2 && numero1 > numero3){

        mayor = numero1;

        if (numero2 > numero3){

            segundoMayor = numero2;
            menor = numero3;

        } else {

            segundoMayor = numero3;
            menor = numero2;
        }

    }
    else {

        if (numero2 > numero1 && numero2 > numero3){

            mayor = numero2;

            if(numero1 > numero3){

                segundoMayor = numero1;
                menor = numero3;

            } else {

                segundoMayor= numero3;
                menor = numero1;
            }
        }
        else {

            if (numero3 > numero2 && numero3 > numero1){

                mayor = numero3;

                if ( numero1 > numero2){

                    segundoMayor = numero1;
                    menor = numero2;
                }
                else {

                    segundoMayor = numero2;
                    menor = numero1;
                }
            }

        }

    }


    cout << menor <<", " <<segundoMayor <<", " << mayor <<endl;

system("pause");
return 0;
}
