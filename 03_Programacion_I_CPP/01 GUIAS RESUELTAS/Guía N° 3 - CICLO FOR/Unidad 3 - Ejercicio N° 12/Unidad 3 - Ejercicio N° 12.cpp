#include <iostream>
#include <cstdlib>

using namespace std;

/*12 Hacer un programa para ingresar una lista de 10 n£meros e informar el m ximo
de los negativos y el m¡nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M ximo Negativo -3. M¡nimo Positivo 2. */

int main(){

    int n, maximoNegativo, minimoPositivo;
    int posNegativo = 0, posPositivo = 0;

    for (int i=1;i<=10;i++){
        cout << "Ingrese un n£mero: ";
        cin >> n;

        if (posNegativo == 0 && n < 0){
            maximoNegativo = n;
            posNegativo ++;
        } else { if (n < 0 && maximoNegativo > n){
                    maximoNegativo = n;

                }
            }


        if (posPositivo == 0 && n > 0){
            minimoPositivo = n;
            posPositivo ++;

        } else { if (n > 0 && n < minimoPositivo){
                    minimoPositivo = n;
                }
            }
    }

    cout << "El m ximo negativo es: " << maximoNegativo <<endl;
    cout << "El m¡nimo positivo es: " << minimoPositivo <<endl;


system("pause");
   return 0;
}
