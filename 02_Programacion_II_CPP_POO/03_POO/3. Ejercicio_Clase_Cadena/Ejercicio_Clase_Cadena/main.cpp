#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Cadena.h"

using namespace std;

int main()
{
    Cadena c;
    c.Mostrar();

    ///a)
    Cadena c2("todo");
    c2.agregarCaracter('s');
    c2.Mostrar();

    ///b)
    c2.aMayusculas();
    c2.Mostrar();

    ///c)
    Cadena c3("CADENA TRES");
    c3.aMinusculas();
    c3.Mostrar();

    ///d)
    Cadena c4("TODO");
    int pos = c4.encontrarCaracter('D');
    cout << "Posicion del caracter: " << pos << endl;

    ///e)
    Cadena c5;
    char caracter = c5.encontrarCaracterConPosicion(2);
    cout << "Caracter encontrado = " << caracter << endl;

    ///f)
    Cadena c6("asd");
    c6.primeraMayuscula();
    c6.Mostrar();

    return 0;
}
