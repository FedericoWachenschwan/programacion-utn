#include <iostream>
#include <cstdlib>

using namespace std;

//16) Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
//obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las
//siguientes condiciones:  - “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.  - “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.  - “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
//exámenes.  - “Recursa la materia”, si no aprobó ningún examen parcial.

int main()
{

    float nota1, nota2, nota3, nota4;
    int contadorNotaMayorCuatro = 0;

    cout << "Ingrese las 4 notas obtenidas por el alumno: " << endl;
    cin >> nota1 >> nota2 >> nota3 >> nota4;
    cout << endl;

    if (nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7 )
    {

        cout << "Promociona." <<endl;

    }
    else
    {
        if (nota1 >= 4)
        {

            contadorNotaMayorCuatro ++;

        }
        if (nota2 >= 4)
        {

            contadorNotaMayorCuatro ++;

        }
        if (nota3 >= 4)
        {

            contadorNotaMayorCuatro ++;

        }
        if (nota4 >= 4)
        {

            contadorNotaMayorCuatro ++;

        }

        if (contadorNotaMayorCuatro >= 3)
        {

            cout << "Rinde examen final" <<endl;
        }
        else
        {

            cout << "Recursa la materia" <<endl;
        }
    }

    system("pause");
    return 0;
}
