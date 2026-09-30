#include <iostream>
#include <cstdlib>

using namespace std;

/* 24 Se dispone de la información de los exámenes rendidos por algunos
estudiantes de la UTN FRGP. Por cada registro de examen se conoce: - - -
Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)
La finalización de la carga de datos se indica con un legajo de estudiante mayor
a 30000.  Calcular e informar: - - - -
La nota promedio entre todos los estudiantes.
a)El legajo del estudiante con menor nota.
b)La cantidad de exámenes rendidos para la materia 10.
c)El porcentaje de aprobados y no aprobados.
NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.*/

int main(){

    int legajoDelEstudiante, codigoDeMateria;
    float nota;

    int legajoMenorNota; /// A)
    bool primerNota = true; ///A)
    float menorNota; /// A)
    int contadorExamenes10 = 0; /// B)
    int aprobados = 0, desaprobados = 0, contadorNotasTotales = 0; /// C)
    float porcentajeAprobados = 0, porcentajeDesaprobados = 0; /// C)

    cout << "Ingrese el numero de Legajo del Estudiante: ";
    cin >> legajoDelEstudiante;


    while (legajoDelEstudiante < 30000){
        cout << "Ingrese el Codigo de la Materia: ";
        cin >> codigoDeMateria;
        cout << "Ingrese la nota: ";
        cin >> nota;
        cout << endl;
        /// A)
        if (primerNota){
            menorNota = nota;
            legajoMenorNota = legajoDelEstudiante;
            primerNota = false;
        } else {
            if (nota < menorNota){
                menorNota = nota;
                legajoMenorNota = legajoDelEstudiante;
            }
        }
        /// B)
        if (codigoDeMateria == 10){
            contadorExamenes10 ++;
        }
        /// C)
        if (nota >= 6){
            aprobados ++;
        } else {
            desaprobados ++;
        }
        contadorNotasTotales ++;

        cout << "Ingrese el numero de Legajo del Estudiante: ";
        cin >> legajoDelEstudiante;
    }

    ///C)
    porcentajeAprobados = (aprobados * 100.0) / contadorNotasTotales;
    porcentajeDesaprobados = (desaprobados * 100.0) / contadorNotasTotales;

    ///A)
    cout << "El legajo con menor nota es: " << legajoMenorNota << endl;

    ///B)
    cout << "La cantidad de examenes que rindieron para la materia 10, es de " << contadorExamenes10 << endl;

    ///C)
    cout << "El porcentaje de alumnos aprobados es de: " << porcentajeAprobados << "%" <<endl;
    cout << "El porcentaje de alumnos desaprobados es de " << porcentajeDesaprobados << "%" << endl;
system("pause");
   return 0;
}
