#include <iostream>
#include <cstdlib>

using namespace std;

///prototipos
float ingresarYvalidar(); ///pide un número y lo acepta si es menor O IGUAL a 15000
bool validarNumero (float aValidar, float valorMaximo); /// el programa debe aceptar sólo hasta valorMáximo (15000)
float convertirAcm (float ); /// RECIBE UN VALOR EN METROS Y LO CONVIERTE A SU EQUIVALENTE EN CM
float convertirAkm (float ); /// RECIBE UN VALOR EN METROS Y LO CONVIERTE A SU EQUIVALENTE EN KM
float convertirApulgadas (float ); /// RECIBE UN VALOR EN METROS Y LO CONVIERTE A SU EQUIVALENTE EN PULGADAS
float convertirApies (float); /// RECIBE UN VALOR EN METROS Y LO CONVIERTE A SU EQUIVALENTE EN PIES

///float medida: novamos a usar. Todas la reglas o buenas prácticas desaconsejan el uso de variables globales

int main(){
    int opc;
    float medida, resultado;

    while (true){
        system("cls");
        cout << "          Menu principal          " << endl;
        cout << "1 - Ingresar medida en metros" << endl;
        cout << "2 - Convertir a centimetros" << endl;
        cout << "3 - Convertir a kilometros" << endl;
        cout << "4 - Convertir a pulgadas" << endl;
        cout << "5 - Convertir a pies" << endl;
        cout <<"----------------------------------" << endl;
        cout << "0 - Salir del programa" << endl;

        cout << "Ingrese una opcion: " << endl;
        cin >> opc;
        system("cls");

        switch (opc){
        case 1: medida = ingresarYvalidar(); ///VER COMO EVITO QUE SE EJECUTEN LAS OTRAS OPCIONES ANTES
            break;
        case 2: resultado = convertirAcm(medida);
            cout << "El valor ingresado convertido a CM es: " << resultado << endl;;
            system("pause");
            break;
        case 3: resultado = convertirAkm(medida);
            cout << "El valor ingresado convertido a KM es: " << resultado << endl;;
            system("pause");
            break;
        case 4: resultado = convertirApulgadas(medida);
            cout << "El valor ingresado convertido a pulgadas es: " << resultado << endl;;
            system("pause");
            break;
        case 5: resultado = convertirApies(medida);
            cout << "El valor ingresado convertido a pies es: " << resultado << endl;;
            system("pause");
            break;
        case 0: cout << "Gracias por usar nuestro programa" << endl;
            return 0;
        default: cout << "El valor ingresado no es correcto. Volver a ingresar" << endl;
            system("pause");
            break;
        }
    }

    system("pause");
    return 0;
}
///desarrollo de funciones
float ingresarYvalidar(){ // ✅ Esta función pide al usuario un número y repite hasta que sea válido (≤ 15000)
    float num;
    cout << "INGRESAR NUMERO (MAXIMO 15000) ";
    cin >> num;
    bool validacion = validarNumero(num, 15000); // Validamos si es correcto usando otra función

    // Mientras NO sea válido, seguimos pidiendo números
    while (validacion != true){
        cout << "EL NUMERO INGRESADO EXCEDE EL VALOR MAXIMO"  << endl;
        cout << "INGRESAR NUMERO (MAXIMO 15000) ";
        cin >> num;

        // Volvemos a validar el nuevo número
        validacion = validarNumero(num, 15000);
    }
      // Si llegamos hasta acá, el número es válido
    cout << "EL NUMERO INGRESADO ES " << num << endl;
    system ("pause");
    return num; // Devuelve el número válido
}

bool validarNumero (float aValidar, float valorMaximo){ // ✅ Esta función simplemente verifica si el número es menor o igual al máximo permitido
    if (aValidar <= valorMaximo){
        return true;
    }   // Devuelve true si cumple la condición, si no devuelve false
    return false;
}

float convertirAcm (float num){
    /// para convertir una medida en metros a otra en centímetros
    float valorFinal = num * 100;
    return valorFinal;
}
float convertirAkm (float num){
    float valorFinal = num / 1000;
    return valorFinal;
}

float convertirApulgadas (float num){
    float valorFinal = num * 39.37;
    return valorFinal;
}
float convertirApies (float num){
    float valorFinal = num * 3.28084;
    return valorFinal;
}
