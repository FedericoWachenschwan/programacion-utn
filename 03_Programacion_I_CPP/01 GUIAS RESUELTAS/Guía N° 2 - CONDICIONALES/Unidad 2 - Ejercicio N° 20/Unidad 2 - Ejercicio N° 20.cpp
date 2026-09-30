#include <iostream>
#include <cstdlib>

using namespace std;

//20 Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego,
//calcular e informar: - - - -
// A) La cantidad de personas mayores a 30 a¤os que midan m s de 1.8
//metros.
// B) El promedio de altura de las personas mayores a 30 a¤os.
// C) La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
// D) La cantidad de personas cuya edad sea de 20, 30 o 40 a¤os.

int main(){

    int edad; ///Entrada
    float altura; ///Entrada

    ////---------------------------------------------------------------------
    int contador_Altura_y_Edad = 0; //// A)

    int contadorAlturaMas30 = 0; //// B)
    float promedioAlturaMas30 = 0; //// B)
    int acumuladorMas30 = 0; //// B)

    int contadorAltura = 0; //// C)

    int contador20 = 0, contador30 = 0, contador40 = 0; //// D)
    ////---------------------------------------------------------------------


    cout << "Usuario 1, ingrese su edad: ";
    cin >> edad;
    cout << "Usuario 1, ingrese su altura: ";
    cin >> altura;
    cout << endl;

    if (edad > 30 && altura > 1.8){
        contador_Altura_y_Edad ++;
    }

    //// C)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (altura >= 1.7 && altura <= 1.8){
        contadorAltura ++;
    }

    //// D)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad == 20){
        contador20 ++;

    } else if (edad == 30) {
        contador30 ++;

    } else if (edad == 40){
        contador40 ++;

    }


    //// B)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad > 30){
        acumuladorMas30 = acumuladorMas30 + altura;
        contadorAlturaMas30 ++;
    }

    ////------------------------------------------------------

        cout << "Usuario 2, ingrese su edad: ";
    cin >> edad;
    cout << "Usuario 2, ingrese su altura: ";
    cin >> altura;
    cout << endl;

    if (edad > 30 && altura > 1.8){
        contador_Altura_y_Edad ++;

    }

    //// C)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (altura >= 1.7 && altura <= 1.8){
        contadorAltura ++;
    }

    //// D)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad == 20){
        contador20 ++;

    } else if (edad == 30) {
        contador30 ++;

    } else if (edad == 40){
        contador40 ++;

    }


    //// B)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad > 30){
        acumuladorMas30 = acumuladorMas30 + altura;
        contadorAlturaMas30 ++;
    }


    ////------------------------------------------------------
        cout << "Usuario 3, ingrese su edad: ";
    cin >> edad;
    cout << "Usuario 3, ingrese su altura: ";
    cin >> altura;
    cout << endl;

    if (edad > 30 && altura > 1.8){
        contador_Altura_y_Edad ++;
    }

    //// C)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (altura >= 1.7 && altura <= 1.8){
        contadorAltura ++;
    }

    //// D)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad == 20){
        contador20 ++;

    } else if (edad == 30) {
        contador30 ++;

    } else if (edad == 40){
        contador40 ++;

    }


    //// B)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad > 30){
        acumuladorMas30 = acumuladorMas30 + altura;
        contadorAlturaMas30 ++;
    }


    ////------------------------------------------------------
        cout << "Usuario 4, ingrese su edad: ";
    cin >> edad;
    cout << "Usuario 4, ingrese su altura: ";
    cin >> altura;
    cout << endl;

    if (edad > 30 && altura > 1.8){
        contador_Altura_y_Edad ++;
    }

    //// C)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (altura >= 1.7 && altura <= 1.8){
        contadorAltura ++;
    }

    //// D)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad == 20){
        contador20 ++;

    } else if (edad == 30) {
        contador30 ++;

    } else if (edad == 40){
        contador40 ++;

    }


    //// B)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad > 30){
        acumuladorMas30 = acumuladorMas30 + altura;
        contadorAlturaMas30 ++;
    } else {
        promedioAlturaMas30 = 0;

    }


    ////------------------------------------------------------
        cout << "Usuario 5, ingrese su edad: ";
    cin >> edad;
    cout << "Usuario 5, ingrese su altura: ";
    cin >> altura;
    cout << endl;

    if (edad > 30 && altura > 1.8){
        contador_Altura_y_Edad ++;
    }

    //// C)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (altura >= 1.7 && altura <= 1.8){
        contadorAltura ++;
    }

    //// D)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad == 20){
        contador20 ++;

    } else if (edad == 30) {
        contador30 ++;

    } else if (edad == 40){
        contador40 ++;

    }


    //// B)oooooooooooooooooooooooooooooooooooooooooooooooooo

    if (edad > 30){
        acumuladorMas30 = acumuladorMas30 + altura;
        contadorAlturaMas30 ++;
    } if (contadorAlturaMas30 > 0) {
    promedioAlturaMas30 = acumuladorMas30 / contadorAlturaMas30;

    } else {
    promedioAlturaMas30 = 0;
    }


    ////------------------------------------------------------

    cout << "La cantidad de personas mayores de 30 a¤os y que miden m s de 1.8 es de: " << contador_Altura_y_Edad <<endl; //// A)
    cout << "El promedio de personas mayores a 30 a¤os es de: " << promedioAlturaMas30 << endl;
    //// B)
    cout << "La cantidad de personas con altura entre 1.7 y 1.8 es de: " << contadorAltura << endl;
    //// C)
    cout << "La cantidad de personas de 20 a¤os es de " << contador20 << " personas, la cantidad de personas de 30 a¤os es de " << contador30 <<" personas y la cantidad de personas de 40 a¤os es de: " << contador40 << " personas" << endl; //// D)

system("pause");
   return 0;
}
