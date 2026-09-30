#include <iostream>
#include <cstdlib>

using namespace std;

/*29 Se dispone de la información de los últimos 19 partidos del futbolista Diego
Armando Laradona. Por cada partido se registró: - - -
Número de partido
Minutos jugados
Tarjetas amarillas
Tarjetas rojas
Goles
Existe un registro para cada partido. Los mismos se encuentran ordenados por
número de partido. Se pide calcular e informar:
A) La cantidad de partidos que no jugó (partidos con minutos igual a cero)
B) La cantidad de partidos que jugó por completo (minutos >= 90)
C) El promedio de tarjetas recibidas por partido.
D) El número de partido en el que haya convertido mayor cantidad de goles.
Indicar también los goles convertidos.
E) La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor
cantidad de partidos consecutivos en los que haya convertido. */

int main(){

    int numeroDePartido, minutosJugados, tarjetasAmarillas, tarjetasRojas, goles; ///ENTRADA

    ///A)
    int contadorDePartidosNoJugados = 0;

    ///B)
    int contadorPartidosCompletos = 0;

    ///C)
    int acumuladorTarjetas = 0;
    float promedioDeTarjetasRecibidas;

    ///D)
    int maximaCantidadDeGoles, partidoDeMaxGoles;

    ///E)
    int contadorRachaDePartidosGoleando = 0, rachaMax = 0;

    cout << "----------------------------------" << endl;

    for (int partido=1; partido<=19; partido++){
        cout << "Ingrese el numero de partido: ";
        cin >> numeroDePartido;
        cout << endl;
        cout << "Ingrese la cantidad de minutos que jugo Diego en ese partido: ";
        cin >> minutosJugados;
        cout << endl;
        cout << "Ingrese la cantidad de Tarjetas Amarillas que le sacaron a Diego en ese partido: ";
        cin >> tarjetasAmarillas;
        cout << endl;
        cout << "Ingrese la cantidad de Tarjetas Rojas que le sacaron a Diego en ese partido: ";
        cin >> tarjetasRojas;
        cout << endl;
        cout << "Ingrese la cantidad de goles que metio Diego en ese partido: ";
        cin >> goles;
        cout << endl;
        cout << "----------------------------------" << endl;

        ///A)
        if (minutosJugados == 0){
            contadorDePartidosNoJugados ++;
        }

        ///B)
        if (minutosJugados >= 90){
            contadorPartidosCompletos ++;
        }
        ///C)
        acumuladorTarjetas = acumuladorTarjetas + tarjetasAmarillas + tarjetasRojas;

        ///D)
        if (partido == 1){
            maximaCantidadDeGoles = goles;
            partidoDeMaxGoles = numeroDePartido;
        } else { if (goles > maximaCantidadDeGoles){
            maximaCantidadDeGoles = goles;
            partidoDeMaxGoles = numeroDePartido;
            }
        }

        ///E)
        if (goles > 0){
        contadorRachaDePartidosGoleando ++;
            if (contadorRachaDePartidosGoleando > rachaMax){
            rachaMax = contadorRachaDePartidosGoleando;
        }
        } else {
            contadorRachaDePartidosGoleando = 0;
        }
    }

    promedioDeTarjetasRecibidas = (float)acumuladorTarjetas / 19; ///C)

    cout << endl;
    cout << "=============================RESULTADOS=============================" << endl;
    cout << "La cantidad de partidos que no jugo son: " << contadorDePartidosNoJugados << endl; ///A)
    cout << "La cantidad de partidos completos que jugo son: " << contadorPartidosCompletos << endl; ///B)
    cout << "El promedio de tarjetas recibidas por partido es de: " << promedioDeTarjetasRecibidas << endl; ///C)
    cout << "El partido en el que convirtio mayor cantidad de goles es el " << partidoDeMaxGoles << " y la cantidad de goles convertidos es de " << maximaCantidadDeGoles << endl; ///D)
    cout << "La mejor racha de partidos convertidos en goles es de: " << rachaMax << endl;

system("pause");
   return 0;
}
