#include <iostream>
#include <cstdlib>

using namespace std;

/*30 Dada una lista de 7 números enteros todos distintos entre sí determinar e
informar con un cartel aclaratorio si los números primos ingresados en la
misma están ordenados de menor a mayor. Los números primos pueden no ser
consecutivos, pero sí estar ordenados.
Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que
los números primos están ordenados: 5, 7, 13, 19.
Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya
que los números primos no están ordenados: 3, 5, 11, 7. */

int main(){

    int num, contadorDivisores = 0, contadorDePrimos = 0, maxPrimo, contadorDeMaximos = 1;

    for (int i = 1;i <= 7 ;i++ ){
        cout << "Ingrese un numero: ";
        cin >> num;
        contadorDivisores = 0;
        for (int x = 1; x <= num; x++ ){
            if (num % x == 0){
                contadorDivisores ++;
                if (contadorDivisores == 2){
                    contadorDePrimos ++;
                    if (contadorDePrimos == 1){
                        maxPrimo = num;
                    } else if (num > maxPrimo){
                        maxPrimo = num;
                        contadorDeMaximos ++;
                        }
                }
            }
        }

    }

    if (contadorDeMaximos == contadorDePrimos){
        cout << "Ordenados." << endl;
    } else { cout << "Desordenados." << endl;
        }

system("pause");
   return 0;
}
