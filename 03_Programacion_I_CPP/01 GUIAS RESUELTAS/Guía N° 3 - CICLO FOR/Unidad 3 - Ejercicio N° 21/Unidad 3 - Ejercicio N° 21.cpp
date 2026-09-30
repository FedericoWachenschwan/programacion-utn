#include <iostream>
using namespace std;

/*21 Se define como divisores propios de un número entero a aquellos que son sus
divisores excluyendo al número en sí mismo.
Ejemplo A. Los divisores propios del 4 son: 1 y 2.
Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6.
Se define a un número como perfecto cuando la suma de todos sus divisores
propios coincide con el número en sí mismo.
Ejemplo A: 6 es número perfecto pues 1+2+3=6
Ejemplo B: 28 es número perfecto pues 1+2+4+7+14=28
Ejemplo C: 12 no es número perfecto pues 1+2+3+4+6=16
Hacer un programa para ingresar un número y luego informar con un cartel
aclaratorio si el mismo es un número perfecto o no es número perfecto*/

int main(){

    int n; ///ENTRADA
    int acumuladorDeDivisores = 0;

    cout << "Ingrese un número: ";
        cin >> n;

    for (int i=1;i<=n ;i++ ){ /*También se podría poner acá  i < n, lo que haría que el for recorra hasta un número
         anterior del declarado y no haga falta añadir el if de más abajo y el código quede más limpio*/

        if (i != n){
            if (n % i == 0){
                acumuladorDeDivisores = acumuladorDeDivisores + i;
            }
        }
    }

    if (acumuladorDeDivisores == n){
        cout << "El número ingresado es perfecto" << endl;
    } else {
        cout << "El número ingresado no es perfecto" << endl;
    }



system("pause");
return 0;
}
