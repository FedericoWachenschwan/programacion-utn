#include <iostream>
using namespace std;

//2 Hacer una función llamada CalcularMaximo que determine el máximo entre
//dos números. La función debe recibir dos números enteros por valor y devolver
//el valor más grande. Si los números son iguales debe devolver cualquiera de
//los dos. La función no debe mostrar nada por pantalla.
//Hacer un programa para ingresar dos números y, utilizando CalcularMaximo,
//emita luego el número mayor de ambos.

int calcularMaximo (int n1, int n2);

int main(){

    int n1, n2;

    cout <<"Ingrese el primer numero: ";
    cin >> n1;
    cout <<"Ingrese el segundo numero: ";
    cin >> n2;

    int maximo = calcularMaximo(n1, n2);

    cout << "El valor maximo es: " <<maximo <<endl;


system("pause");
return 0;
}

int calcularMaximo (int n1, int n2){

    if (n1 > n2){
       return n1;

    } else {
        return n2;
    }
}


