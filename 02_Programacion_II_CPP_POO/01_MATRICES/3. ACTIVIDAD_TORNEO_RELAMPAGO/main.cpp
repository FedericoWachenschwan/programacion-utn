#include <iostream>

using namespace std;

void cargar_puntos(int jugadores[4][4]);
void mostrar_tabla (int jugadores[4][4]);
void reiniciar_campeonato(int jugadores[4][4]);

int main()
{
    int opcion, jugadores[4][4] = {0};

    do
    {   system ("cls");
        cout << "===================" << endl;
        cout << " Menu del Torneo" << endl;
        cout << "===================" << endl;
        cout << "1 - Cargar Puntos" << endl; /// Pide el número de dos jugadores que se enfrentaron y sus respectivos puntos
        cout << "2 - Mostrar Tabla " << endl; ///Muestra la tabla de enfrentamientos
        cout << "3 - Reiniciar Campeonato" << endl; ///Borra los resultados y deja todo en cero
        cout << "0 - Salir" << endl << endl; ///Cierra el programa

        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cargar_puntos(jugadores);
            break;
        case 2:
            mostrar_tabla(jugadores);
            break;
        case 3:
            reiniciar_campeonato(jugadores);
            break;
        case 0:
            cout << "Saliendo del programa..." << endl;
            return 0;
            break;

        default:
            system ("cls");
            cout << "Opcion incorrecta" << endl;
            system("pause");
            system ("cls");
            break;
        }

    } while (true);



    return 0;
}

void cargar_puntos(int jugadores[4][4])
{
    system ("cls");
    int jugador1, jugador2, puntaje1, puntaje2;

    do
    {
        cout << "Ingrese el numero del primer jugador que se enfrenta: " << endl;
        cin >> jugador1;
        cout << "Ingrese su puntaje: " << endl;
        cin >> puntaje1;
        cout << "Ingrese el numero del segundo jugador que se enfrenta: " << endl;
        cin >> jugador2;
        cout << "Ingrese su puntaje: " << endl;
        cin >> puntaje2;

        if (jugador1 == jugador2)
        {
            cout << "Error - El oponente debe ser un jugador diferente." << endl;
        }

    }while (jugador1 == jugador2);

    jugadores[jugador1-1][jugador2-1] = puntaje1;
    jugadores[jugador2-1][jugador1-1] = puntaje2;
    system("pause");
}

void mostrar_tabla (int jugadores[4][4])
{
    system ("cls");
    for (int i=0; i<4; i++)
    {
        cout << "Jugador " << i+1 <<": ";
        for(int j=0; j<4;j++)
        {
            if (i==j)
            {
                cout << "- ";
            }
            else
            {
                cout << jugadores[i][j] << " ";
            }
        }
        cout << endl;
    }
    system("pause");
}

void reiniciar_campeonato(int jugadores[4][4])
{
    system ("cls");
    for (int i=0; i<4; i++)
    {
        for(int j=0; j<4;j++)
        {
            jugadores[i][j] = 0;
        }
        cout << endl;
    }


    cout << "Se han reiniciado todos los puntajes." << endl;
    system("pause");
}

