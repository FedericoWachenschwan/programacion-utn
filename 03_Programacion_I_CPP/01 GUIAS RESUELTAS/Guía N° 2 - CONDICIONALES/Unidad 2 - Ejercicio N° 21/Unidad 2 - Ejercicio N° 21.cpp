#include <iostream>
#include <cstdlib>

using namespace std;

/*21 Una marroquiner¡a dispone de 45 carteras blancas, 50 carteras negras, 40
marrones y 49 grises. Se pide hacer un programa donde se ingresen tres
ventas. Cada venta est  compuesta por: -
 -Cantidad de carteras
 -Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marr¢n, 4 - Gris)

Calcular e informar: - - -

 A)Cantidad total de carteras vendidas en total.
 B)Cu ntas carteras quedaron de cada tipo.
 C)Los colores de carteras que no se vendieron.

 NOTA: Ninguna venta superar  las 10 carteras. */


int main(){

    int totalCarterasBlancas = 45, totalCarterasNegras = 50, totalCarterasMarrones = 40, totalCarterasGrises = 49;
    int tipoDeCartera;

    ///A)
    int acTotalDeCarterasVendidas = 0;

    ///B)
    int acCarterasBlancasVendidas = 0, acCarterasNegrasVendidas = 0, acCarterasMarronesVendidas = 0, acCarterasGrisesVendidas = 0;
    int carterasBlancas, carterasNegras, carterasMarrones, carterasGrises;

    cout << "-------------------------------VENTA 1-------------------------------" <<endl;

    cout << "Ingrese tipo de cartera vendido (1 - Blanco, 2 - Negro, 3- Marr¢n, 4 - Gris)" <<endl <<endl;
    cin >> tipoDeCartera;

    switch (tipoDeCartera)
    {
    case 1: cout << "Ingrese la cantidad de carteras blancas vendidas: ";
            cin >> carterasBlancas;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasBlancas;
            ////B)
            acCarterasBlancasVendidas = acCarterasBlancasVendidas + carterasBlancas;
        break;

    case 2: cout << "Ingrese la cantidad de carteras Negras vendidas: ";
            cin >> carterasNegras;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasNegras;
            ////B)
            acCarterasNegrasVendidas = acCarterasNegrasVendidas + carterasNegras;
        break;

    case 3: cout << "Ingrese la cantidad de carteras marrones vendidas: ";
            cin >> carterasMarrones;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasMarrones;
            ////B)
            acCarterasMarronesVendidas = acCarterasMarronesVendidas + carterasMarrones;
        break;

    case 4: cout << "Ingrese la cantidad de carteras grises vendidas: ";
            cin >> carterasGrises;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasGrises;
            ////B)
            acCarterasGrisesVendidas = acCarterasGrisesVendidas + carterasGrises;
        break;

    }

        cout << "-------------------------------VENTA 2-------------------------------" <<endl;

    cout << "Ingrese tipo de cartera vendido (1 - Blanco, 2 - Negro, 3- Marr¢n, 4 - Gris)" <<endl <<endl;
    cin >> tipoDeCartera;

    switch (tipoDeCartera)
    {
    case 1: cout << "Ingrese la cantidad de carteras blancas vendidas: ";
            cin >> carterasBlancas;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasBlancas;
            ////B)
            acCarterasBlancasVendidas = acCarterasBlancasVendidas + carterasBlancas;
        break;

    case 2: cout << "Ingrese la cantidad de carteras Negras vendidas: ";
            cin >> carterasNegras;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasNegras;
            ////B)
            acCarterasNegrasVendidas = acCarterasNegrasVendidas + carterasNegras;
        break;

    case 3: cout << "Ingrese la cantidad de carteras marrones vendidas: ";
            cin >> carterasMarrones;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasMarrones;
            ////B)
            acCarterasMarronesVendidas = acCarterasMarronesVendidas + carterasMarrones;
        break;

    case 4: cout << "Ingrese la cantidad de carteras grises vendidas: ";
            cin >> carterasGrises;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasGrises;
            ////B)
            acCarterasGrisesVendidas = acCarterasGrisesVendidas + carterasGrises;
        break;

    }

        cout << "-------------------------------VENTA 3-------------------------------" <<endl;

    cout << "Ingrese tipo de cartera vendido (1 - Blanco, 2 - Negro, 3- Marr¢n, 4 - Gris)" <<endl <<endl;
    cin >> tipoDeCartera;

    switch (tipoDeCartera)
    {
    case 1: cout << "Ingrese la cantidad de carteras blancas vendidas: ";
            cin >> carterasBlancas;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasBlancas;
            ////B)
            acCarterasBlancasVendidas = acCarterasBlancasVendidas + carterasBlancas;
        break;

    case 2: cout << "Ingrese la cantidad de carteras Negras vendidas: ";
            cin >> carterasNegras;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasNegras;
            ////B)
            acCarterasNegrasVendidas = acCarterasNegrasVendidas + carterasNegras;
        break;

    case 3: cout << "Ingrese la cantidad de carteras marrones vendidas: ";
            cin >> carterasMarrones;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasMarrones;
            ////B)
            acCarterasMarronesVendidas = acCarterasMarronesVendidas + carterasMarrones;
        break;

    case 4: cout << "Ingrese la cantidad de carteras grises vendidas: ";
            cin >> carterasGrises;
            ////A)
            acTotalDeCarterasVendidas = acTotalDeCarterasVendidas + carterasGrises;
            ////B)
            acCarterasGrisesVendidas = acCarterasGrisesVendidas + carterasGrises;
        break;

    }

    ////DATOS DE SALIDA:
    ////A)
    cout << "La cantidad total de carteras vendidas es de: " << acTotalDeCarterasVendidas <<endl;
    ////B)
    cout << "La cantidad de carteras blancas que quedaron sin vender es de: " << totalCarterasBlancas - acCarterasBlancasVendidas <<endl;
    cout << "La cantidad de carteras negras que quedaron sin vender es de: " << totalCarterasNegras - acCarterasNegrasVendidas <<endl;
    cout << "La cantidad de carteras Marrones que quedaron sin vender es de: " << totalCarterasMarrones - acCarterasMarronesVendidas <<endl;
    cout << "La cantidad de carteras grises que quedaron sin vender es de: " << totalCarterasGrises - acCarterasGrisesVendidas <<endl;
    ////C)
    if (acCarterasBlancasVendidas == 0){
        cout << "No se vendi¢ ninguna cartera blanca" <<endl;
    }
    if (acCarterasNegrasVendidas == 0){
    cout << "No se vendi¢ ninguna cartera negra" <<endl;
    }

    if (acCarterasMarronesVendidas == 0){
    cout << "No se vendi¢ ninguna cartera marr¢n" <<endl;
    }

    if (acCarterasGrisesVendidas == 0){
    cout << "No se vendi¢ ninguna cartera gris" <<endl;
    }

system("pause");
   return 0;
}
