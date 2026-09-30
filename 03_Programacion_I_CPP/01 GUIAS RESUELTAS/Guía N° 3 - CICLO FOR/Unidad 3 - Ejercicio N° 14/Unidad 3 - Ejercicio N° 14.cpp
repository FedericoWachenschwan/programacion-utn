#include <iostream>
#include <cstdlib>

using namespace std;

/* 14 Dada una lista de 7 números enteros informar cual es el primer, el segundo, el
anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7,
Anteúltimo impar: 9 y Último impar: 5. */

int main(){

    int n, primerImpar, segundoImpar, anteultimoImpar, ultimoImpar;
    int contadorImpares = 0;

    for (int i=1;i<=7 ;i++){
        cout << "Ingrese un número: ";
        cin >> n;

        if (contadorImpares == 0 && n % 2 != 0){
            ///PRIMER PAR:
            contadorImpares ++;
            primerImpar = n;
            ///ANTE ÚLTIMO IMPAR Y ÚLTIMO IMPAR:
            anteultimoImpar = ultimoImpar;
            ultimoImpar = n;

        } else {if (contadorImpares == 1 && n % 2 != 0){
                ///SEGUNDO PAR:
                contadorImpares ++;
                segundoImpar = n;
                ///ANTE ÚLTIMO IMPAR Y ÚLTIMO IMPAR:
                anteultimoImpar = ultimoImpar;
                ultimoImpar = n;

                } else { if (n % 2 != 0){
                            anteultimoImpar = ultimoImpar;
                            ultimoImpar = n;
                        }
                    }
        }
    }

    cout << "El primer impar ingresado es: " <<primerImpar <<endl;
    cout << "El segundo impar ingresado es: " <<segundoImpar <<endl;
    cout << "El anteúltimo impar ingresado es: " <<anteultimoImpar <<endl;
    cout << "El último impar ingresado es: " <<ultimoImpar <<endl <<endl;



system("pause");
   return 0;
}
