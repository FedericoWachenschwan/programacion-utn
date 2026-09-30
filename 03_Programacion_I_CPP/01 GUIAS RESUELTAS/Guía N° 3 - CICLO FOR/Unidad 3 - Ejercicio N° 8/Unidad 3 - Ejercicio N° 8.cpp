#include <iostream>
#include <cstdlib>

using namespace std;

/*8 Hacer un programa para ingresar una lista de 10 n£meros, luego informar el
porcentaje de positivos, negativos, y  ceros. */

int main(){

    int n, contadorPositivos = 0, contadorNegativos = 0, contadorCeros = 0;
    int pcjCeros, pcjNegativos, pcjPositivos;

    for (int i=1;i<=10;i++){

    cout << "Ingrese un n£mero: ";
    cin >> n;
    cout << endl;

    if (n > 0){
        contadorPositivos ++;
    } else if (n == 0){
        contadorCeros ++;

    } else {
        contadorNegativos ++;
    }

    }

    pcjCeros = (contadorCeros * 100) / 10;
    pcjNegativos = (contadorNegativos * 100) / 10;
    pcjPositivos = (contadorPositivos * 100) / 10;

    cout << "El porcentaje de ceros es de : " <<pcjCeros <<"%" <<endl;
    cout << "El porcentaje de negativos es de : " <<pcjNegativos <<"%" <<endl;
    cout << "El porcentaje de positivos es de : " <<pcjPositivos <<"%" <<endl;


system("pause");
   return 0;
}
