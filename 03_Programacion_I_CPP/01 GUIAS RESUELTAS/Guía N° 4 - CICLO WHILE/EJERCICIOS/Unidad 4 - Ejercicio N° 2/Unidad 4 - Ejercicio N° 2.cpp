#include <iostream>
#include <cstdlib>

using namespace std;

/* 2 Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando
de a 3 elementos. Es decir: 1, 4, 7, 10, 13, 16, 19. Importante: El programa no
tiene ningún ingreso de datos. */

int main(){

    int n = 1;

    while ( n < 20 ){
    cout << n << endl;
    n += 3;
    }

system("pause");
   return 0;
}
