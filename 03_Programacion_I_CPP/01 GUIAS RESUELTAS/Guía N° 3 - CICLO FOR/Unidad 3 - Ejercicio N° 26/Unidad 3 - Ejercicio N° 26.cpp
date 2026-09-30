#include <iostream>
#include <cstdlib>

using namespace std;

/*26 Hacer un programa que muestre los números primos entre el 1 y el 10000. El
usuario no debe ingresar nada en este programa. */

int main(){
    int contadorDeDivisores = 0;

    for (int i=1; i<=10000; i++){
        contadorDeDivisores = 0;
        for (int x =1; x<=i; x++){
            if (i % x == 0){
                contadorDeDivisores ++;
            }
        }
        if (contadorDeDivisores == 2){
            cout << i << endl;
        }
    }


system("pause");
   return 0;
}
