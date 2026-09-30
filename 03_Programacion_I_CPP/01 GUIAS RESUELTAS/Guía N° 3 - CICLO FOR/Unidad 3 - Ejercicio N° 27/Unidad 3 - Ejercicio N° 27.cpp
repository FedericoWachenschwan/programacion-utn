#include <iostream>
#include <cstdlib>

using namespace std;

/*27 Una estación meteorológica registró una muestra climática de los últimos 15
días. Por cada día registró: - - -
Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día. Se
pide calcular e informar: - - - -
A)El número del día que se haya registrado la temperatura máxima.
B)La amplitud térmica de todo el período.
C)La cantidad de días con neblina.
D)Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
E)Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días.
De lo contrario mostrar "Quincena seca".
NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km. */

int main(){

    int numeroDeDia; ///ENRADA
    float temperatura, milimetrosDeLluvia, visibilidadEnKM; ///ENTRADA

    float temperaturaMaxima; ///A)
    int diaDeTempMax; ///A)

    float temperaturaMinima, amplitudTermica; ///B)

    int contadorDiasConNeblina = 0; ///C)

    int contadorDiasDeLluvia = 0, diasDeNoLluvia; ///D)
    bool quincenaLluviosa = false;

    cout << "--------------------------------------------------------" << endl;
    for (int dia=1; dia<=15; dia++){
        cout << "Ingrese el numero de dia: ";
        cin >> numeroDeDia;
        cout << endl;
        cout << "Ingrese la temperatura que hubo ese dia: ";
        cin >> temperatura;
        cout << endl;
        cout << "Ingrese los milimetros de lluvia de dicho dia: ";
        cin >> milimetrosDeLluvia;
        cout << endl;
        cout << "Ingrese la visibilidad en km que hubo ese dia: ";
        cin >> visibilidadEnKM;
        cout << endl;
        cout << "--------------------------------------------------------" << endl;
        ///A) Número de día que se haya registrado la temperatura máxima:
        if (dia == 1){
            temperaturaMaxima = temperatura;
            diaDeTempMax = dia;
            temperaturaMinima = temperatura;
        } else {if (temperatura > temperaturaMaxima){
            temperaturaMaxima = temperatura;
            diaDeTempMax = dia;
            }   ///B)
                if (temperatura < temperaturaMinima){
                    temperaturaMinima = temperatura;
                }
        }
        ///C)
        if (visibilidadEnKM < 2){
            contadorDiasConNeblina ++;
        }
        ///D)
        if (milimetrosDeLluvia > 0){
            contadorDiasDeLluvia ++;
        }
    }

    ///B)
    amplitudTermica = temperaturaMaxima - temperaturaMinima;

    /// D)
    diasDeNoLluvia = 15 - contadorDiasDeLluvia;

    if (contadorDiasDeLluvia > diasDeNoLluvia){
        quincenaLluviosa = true;
    }

    cout << "El dia que se registro la temperatura maxima fue el dia " << diaDeTempMax << endl; ///A)
    cout << "La amplitud termica de todo el periodo es de " << amplitudTermica << "°" << endl; ///B)
    cout << "La cantidad de dias con neblina es de: " << contadorDiasConNeblina << endl; ///C)

    ///D)
    if (quincenaLluviosa){ ///<- Es lo mismo que poner if (quincenaLluviosa == true)
        cout << "Quincena lluviosa." << endl;
    }
    ///E)
    if (contadorDiasDeLluvia >= 5){
        cout << "Quincena humeda." << endl;
    } else {
        cout << "Quincena seca." << endl;
    }

system("pause");
   return 0;
}
