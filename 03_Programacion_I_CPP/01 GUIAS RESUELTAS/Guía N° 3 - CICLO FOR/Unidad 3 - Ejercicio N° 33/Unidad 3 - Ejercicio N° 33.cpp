#include <iostream>
#include <cstdlib>

using namespace std;

/*Hacer un programa para ingresar una lista de 13 números enteros. Se pide
luego determinar e informar:
A) La cantidad de ternas de valores positivos consecutivos.
B) La cantidad de ternas de valores negativos consecutivos y ordenados en
forma creciente.
Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 entonces el
programa detectará una terna de positivos consecutivos (10, 5, 4) y una terna de
negativos consecutivos ordenados (-8, -3, -1)
Nota: Si el número ingresado es cero, no se lo considera ni negativo ni positivo.
Nota: La terna (-5, -8, -10) no es contabilizada ya que no se encuentra ordenada
crecientemente.*/

int main(){

    int num;

    int contadorPositivos = 0, contadorTernasPositivos = 0; ///A)

    int contadorNegativos = 0, contadorTernasNegativosCrecientes = 0, maxNegativo; ///B)

    for (int i = 1;i <= 13 ;i++ ){
        cout << "Ingrese un numero: ";
        cin >> num;

        ///A)
        if (num > 0 ){
            contadorPositivos ++;
            if (contadorPositivos == 3){
                contadorTernasPositivos ++;
                contadorPositivos = 0;
            }
        } else {
            contadorPositivos = 0;
             }

        ///B)
        if (num < 0 && contadorNegativos == 0) {
           contadorNegativos ++;
           maxNegativo = num;
           }else if (num < 0 && num > maxNegativo){
                maxNegativo = num;
                contadorNegativos ++;

                if (contadorNegativos == 3){
                contadorTernasNegativosCrecientes ++;
                contadorNegativos = 0;
                }
            } else {
                contadorNegativos = 0;
                }
    }

    cout << "La cantidad de ternas de numeros positivos es de " << contadorTernasPositivos << endl; ///A)
    cout << "La cantidad de ternas de numeros negativos crecientes es de " << contadorTernasNegativosCrecientes << endl; ///B)

system("pause");
   return 0;
}
