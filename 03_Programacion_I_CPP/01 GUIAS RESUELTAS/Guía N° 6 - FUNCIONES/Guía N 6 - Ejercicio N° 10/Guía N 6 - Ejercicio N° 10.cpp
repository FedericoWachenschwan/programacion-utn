#include <iostream>
#include <cstdlib>

using namespace std;

/* 10 Hacer una función que reciba un código de naipe (del 1 al 40) y determine el
 número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines
 del mazo). La función debe recibir por referencia el número de naipe y el
 nombre del palo (para ser completados por la función) y por valor el código de
 naipe.
 Tener en cuenta que:
 Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del
 21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.*/

void determinarNaipe(int& numero, string& palo, int codigo);

int main(){
    int nroNaipe;
    string palo;
    int codigoDeNaipe;

    cout << "Ingrese el codigo de carta: #";
    cin >> codigoDeNaipe;

    determinarNaipe(nroNaipe, palo, codigoDeNaipe);
    if(nroNaipe == -1){
        cout << "El codigo ingresado no corresponde a ninguna carta valida." << endl;
    } else {
        cout << "La carta #" << codigoDeNaipe << " es el " << nroNaipe << " de " << palo << endl;
    }

	system("pause");
	return 0;
}

void determinarNaipe(int& numero, string& palo, int codigo){

    if (codigo < 1 || codigo > 40){
        numero = -1;
        return;
    }

    if(codigo >= 1 && codigo <= 10){
        palo = "Espada";
    } else if(codigo >= 11 && codigo <= 20){
        palo = "Basto";
    } else if(codigo >= 21 && codigo <= 30){
        palo = "Copa";
    } else if(codigo >= 31 && codigo <= 40){
        palo = "Oro";
    }

    int posicion = codigo % 10;

    if(posicion == 0){
        posicion = 10;
    }

    if(posicion <= 7){
        numero = posicion;
    } else if(posicion == 8){
        numero = 10;
    } else if(posicion == 9){
        numero = 11;
    } else if(posicion == 10){
        numero = 12;
    }
}
