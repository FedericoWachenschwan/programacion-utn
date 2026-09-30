#include <iostream>
#include "include/Reunion.h"

using namespace std;

int main()
{
    ///1)
    Reunion reuniones[6] =
    {
        Reunion (1, 10, 2023, "19:00", "Buenos Aires", "Programacion en C++", 90),
        Reunion (1, 11, 2023, "19:00", "Internet", "Strings vs Vectores de Char", 100),
        Reunion (20, 11, 2024, "23:00", "Discord", "Goto Gamejam", 0),
        Reunion (1, 3, 2024, "18:00", "Buenos Aires", "Bases de Datos con SQL", 60),
        Reunion (1, 4, 2024, "18:00", "Discord", "C#", 50),
        Reunion (5, 4, 2024, "21:00", "Steam", "Torneo de Age of Empires", 80),
    };

    ///2)
    reuniones[0].agregarPersona(Persona("Lara", "Brian"));
    reuniones[0].agregarPersona(Persona("Simon", "Angel"));
    reuniones[1].agregarPersona(Persona("Simon", "Angel"));
    reuniones[1].agregarPersona(Persona("Daniel", "Kloster"));
    reuniones[2].agregarPersona(Persona("Lara", "Brian"));
    reuniones[3].agregarPersona(Persona("Velez", "Laura"));
    reuniones[3].agregarPersona(Persona("Simon", "Angel"));
    reuniones[4].agregarPersona(Persona("Simon", "Angel"));
    reuniones[5].agregarPersona(Persona("Lara", "Brian"));
    reuniones[5].agregarPersona(Persona("Simon", "Angel"));
    reuniones[5].agregarPersona(Persona("Faure", "Abel"));
    reuniones[5].agregarPersona(Persona("Garcia", "Martin"));

    int duracion_maxima = reuniones[0].getDuracion();
    Reunion reunion_mas_larga = reuniones[0];

    ///3)
    int anioActual = 0;
    int proximoAnio = 0;

    ///4)
    int cantidad_de_reuniones_mas20hs = 0;

    for(int i=0; i<6; i++)
    {
        ///2)
        if (reuniones[i].getDuracion() > duracion_maxima)
        {
            duracion_maxima = reuniones[i].getDuracion();
            reunion_mas_larga = reuniones[i];
        }

        ///3)
        if (reuniones[i].getAnio() == 2023)
        {
            if(anioActual == 0) /// PARA MOSTRAR 1 SOLA VEZ CARTEL DE ANIO ACTUAL:
            {
                cout << "3)" << endl;
                cout << "ANIO ACTUAL: " << reuniones[i].getAnio();
                cout << endl;
                anioActual ++;
                cout << "TEMAS: " << endl;
            }
            cout << reuniones[i].getTema() << endl;
        }
        else
        {
            if(proximoAnio == 0) /// PARA MOSTRAR 1 SOLA VEZ CARTEL DE ANIO ACTUAL:
            {
                cout << endl;
                cout << "3)" << endl;
                cout << "PROXIMO ANIO: "<< reuniones[i].getAnio();
                cout << endl;
                proximoAnio ++;
                cout << "TEMAS: " << endl;
            }
            cout << reuniones[i].getTema() << endl;
        }

        ///4)
        if(reuniones[i].getHorario() > "20:00")
        {
            cantidad_de_reuniones_mas20hs++;
        }
    }


    ///2)
    cout << endl << "2)" << endl;
    cout << "Los participantes de la reunion mas larga en duracion son: " << endl;

    for(int j=0; j<reunion_mas_larga.obtenerCantidadDeParticipantes(); j++)
    {
        cout << reunion_mas_larga.obtenerPersona(j).getApellido() << " "
        << reunion_mas_larga.obtenerPersona(j).getNombre() << endl;
    }

    ///4)
    cout << endl;
    cout << "4)" << endl;
    cout << "La cantidad de reuniones que se realizaran despues de las 20:00 hs son: " << cantidad_de_reuniones_mas20hs << endl;

    return 0;
}
