#include <iostream>
#include <cstdlib>

using namespace std;

//4 Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el
// valor máximo absoluto del vector. Por ejemplo 20,-43 y 5, el máximo absoluto
// es-43.

void cargarVector (int vec[10]);
int maximoAbsolutoVector (int vec[10]);

int main(){

    int vec [10]{}, maximoAbsoluto;

    cout << "Ingrese los 10 numeros: ";

    cargarVector(vec);

    maximoAbsoluto = maximoAbsolutoVector (vec);

    cout << "El valor maximo absoluto es: " << maximoAbsoluto << endl;

	system("pause");
	return 0;
}

void cargarVector (int vec[10])
{
    for (int i = 0;i<=9;i++)
    {
        cin >> vec[i];
    }
}

int maximoAbsolutoVector (int vec[10])
{

    int maximoAbsoluto = vec[0];///GUARDO EL VALOR MAX ABSOLUTO EN LA PRIMERA POSICION DEL VECTOR


    for (int j=1; j<=9;j++)
    {

        int valorActual = vec[j]; ///CREO UNA VARIABLE AUXILIAR PARA LUEGO COMPARAR LOS VALORES DEL VECTOR PASANDOLOS A POSITIVOS Y NO CAMBIARLOS

        int valorMaxAbs  = maximoAbsoluto; ///CREO UNA VARIABLE AUXILIAR PARA LUEGO PODER PREGUNTAR SI EL VALOR QUE QUEDÓ MÁXIMO ABSOLUTO ES NEGATIVO, PARA PODER LUEGO PASARLO A POSITIVO Y COMPARARLO

        if (valorMaxAbs < 0) /// PREGUNTO SI EL VALOR QUE QUEDÓ MÁXIMO ABSOLUTO ES NEGATIVO, PARA PODER PASARLO A POSITIVO Y COMPARARLO
        {
            valorMaxAbs = valorMaxAbs * -1;
        }

        if (valorActual < 0) ///PREGUNTO SI EL VALOR ACTUAL DEL VECTOR ES NEGATIVO, PARA PASARLO A POSITIVO Y PODER LUEGO COMPARARLO CON EL VALOR MAXIMO ABSOLUTO
        {
            valorActual = valorActual * -1;
        }

        if (valorActual > valorMaxAbs) ///PREGUNTO SI EL VALOR ACTUAL YA PASADO A POSITIVO ES MAYOR AL VALOR MAXIMO ABSOLUTO
        {
            valorMaxAbs = valorActual;
            maximoAbsoluto = vec[j];
        }

    }

    return maximoAbsoluto;
}
