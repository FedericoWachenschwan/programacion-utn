    #include <iostream>
    #include <cstdlib>

    using namespace std;

    /* 22 Hacer un programa que permita ingresar una lista de números positivos,
    negativos o cero hasta que se ingrese el 5º número par.
    Calcular e informar: -
    La cantidad de ternas de números negativos ingresados de manera
    consecutiva.
    Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2 */

    int main(){

        int n, contadorDePares = 0, contadorNumerosNegativos = 0, contadorDeTernas = 0;

        while (contadorDePares != 5){
            cout << "Ingrese un numero: ";
            cin >> n;

            if (n % 2 == 0){
                contadorDePares ++;
            }

            if (n < 0){
                contadorNumerosNegativos ++;
                if (contadorNumerosNegativos == 3){
                    contadorDeTernas ++;
                    contadorNumerosNegativos = 0;
                }

            } else {
                contadorNumerosNegativos = 0;
            }
        }

        cout << "La cantidad de ternas de numeros negativos ingresados de manera consecutiva es de : " << contadorDeTernas << endl;

    system("pause");
       return 0;
    }
