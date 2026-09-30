#include <iostream>
#include <cstdlib>

using namespace std;

/*15 Hacer un programa para ingresar una lista de 8 n├║meros y luego informar si
todos est├ín ordenados en forma creciente. En caso de haber dos n├║meros
ΓÇ£empatadosΓÇ¥ considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitir├í un cartel: ΓÇ£Conjunto OrdenadoΓÇ¥
Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitir├í un cartel: ΓÇ£Conjunto OrdenadoΓÇ¥
Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitir├í un cartel: ΓÇ£Conjunto No
OrdenadoΓÇ¥
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.*/

int main(){

    int n, maximo;
    int creciente = 1;

    for (int i=1;i<=8;i++){
        cout << "Ingrese un numero: ";
        cin >> n;
        cout << i << "<- I" <<endl;
        if (i == 1){
            maximo = n;
            cout << maximo << "<- Maximo" <<endl;

        } else if (n >= maximo){
                creciente ++;
                maximo = n;
                cout << creciente <<" <- CRECIENTE" <<endl;
                cout << maximo << "<- Maximo" <<endl;

                }

    }

    if (creciente == 8){
        cout << "Conjunto ordenado" <<endl;
    } else cout << "Conjunto no ordenado" <<endl;


system("pause");
   return 0;
}
