#include <iostream>
#include "Usuario.h"
#include <string>
using namespace std;

//7
//Crear una clase llamada Usuario que represente a un usuario en un sistema.
//La clase debe tener los siguientes atributos:
//Nombre (string)
//Clave (string)
//Rol (string): Puede ser "admin" o "user".
//
//Implementar los siguientes métodos:
//Usuario(string nombre, string clave, string rol): Constructor que inicializa los atributos.
//getter y setter de cada atributo
//
//Desarrollar un programa que realice lo siguiente:
//1) Cargar en el sistema una lista de 5 usuarios utilizando un array de objetos Usuario
// (esto debe estar hardcodeado en el programa).
//2) Solicitar al usuario que ingrese su nombre y contraseña al iniciar el programa.
//3) Verificar si las credenciales ingresadas coinciden con alguno de los usuarios cargados
//en el sistema utilizando una función que reciba el array de usuarios, la cantidad de usuarios,
//el nombre y la contraseña. Esta función debe devolver el índice donde se encuentra el usuario
//en el array, o -1 si el usuario no existe.
//4) Si se encuentra un usuario con las credenciales correctas, permitir el acceso al sistema mostrando
// el rol al que pertenece con un saludo amigable. Utiliza una función que reciba un objeto Usuario y
//  muestre el saludo con el rol específico.
//5) Si el usuario ingresa credenciales incorrectas, permitir un máximo de 3 intentos. Si se agotan los
//intentos, el programa debe finalizar indicando que se han agotado los intentos.


///3)
int usuario_valido(Usuario us[],int cantidad, string nombreIngresado, string claveIngresada)
{

    for (int i=0; i<cantidad; i++)
    {
        if (us[i].getNombre() == nombreIngresado && us[i].getClave() == claveIngresada)
        {
            return i;
        }
    }

    return -1;
}

///4)
void usuario_aceptado(Usuario us)
{
    cout << "Bienvenido " << us.getNombre() << " " << us.getRol() << endl;
}

int main()
{
    ///1)
    Usuario us[3]{
    Usuario("Fulano1", "Clave1", "Admin"),
    Usuario("Fulano2", "Clave2", "User"),
    Usuario("Fulano3", "Clave3", "User"),
    };


    ///5)
    int contador_accesos = 0;
    bool ingreso_valido = false;

    while (contador_accesos < 3 && ingreso_valido == false)
    {
        ///2)
        string nombreIngresado, claveIngresada;

        cout << "Ingrese su nombre: ";
        cin >> nombreIngresado;
        cout << "Ingrese su contraseña: ";
        cin >> claveIngresada;
        cout << endl;

        ///3)
        int indice = usuario_valido(us, 3, nombreIngresado, claveIngresada);
        cout << indice << endl << endl;

        ///4)
        if (indice != -1)
        {
            usuario_aceptado(us[indice]);

            ///5)
            ingreso_valido = true;
        }
        else
        {
            contador_accesos++;
            cout << "Acceso incorrecto. Nombre o Clave incorrectas " << endl;
            cout << "Intentos fallidos " << contador_accesos << "/3"<< endl;
        }
        if (contador_accesos == 3)
        {
            cout << endl << "Se han agotado los intentos." << endl;
        }
    }

    return 0;
}
