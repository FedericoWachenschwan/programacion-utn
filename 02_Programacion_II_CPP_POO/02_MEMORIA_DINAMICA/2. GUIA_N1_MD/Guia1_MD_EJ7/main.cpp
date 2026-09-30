#include <iostream>

using namespace std;

//7
//Escribir un programa que simule la gestión de un club de lectura.
//El programa debe solicitar al usuario la cantidad de libros que desea cargar y posteriormente pedir los nombres de dichos libros.
//Una vez cargados los libros se debe mostrar un menú  con las siguientes opciones:
//1- Listado: Debe listar los libros en el orden en que fueron cargados.
//2- Tiempo de lectura: Se solicita el nombre del libro. Si no existe debe mostrar un mensaje aclaratorio.
//Si el libro existe, ingresar la cantidad de minutos que le llevó su lectura.
//3- Ranking: Mostrar los libros ordenados por tiempo de lectura de Mayor a Menor.
//4- Salir: el programa debe salir del programa.

///1)
void listar_libros(string *nombre_de_libros, int cantidadDeLibros)
{
    system ("cls");
    for (int i =0; i<cantidadDeLibros ;i++)
    {
        cout << nombre_de_libros[i] << endl;
    }
    system ("pause");
    system ("cls");
}

///2)
void tiempo_de_lectura(string *nombre_de_libros, int cantidadDeLibros, int *minutos_de_lectura)
{
    system ("cls");

    string libro_solicitado;
    bool existe = false;

    cout << "Ingrese el nombre del libro: ";
    cin.ignore();
    getline(cin, libro_solicitado);

    for (int i=0; i<cantidadDeLibros; i++)
    {
        if (libro_solicitado == nombre_de_libros[i])
        {
            existe = true;
            cout << "Ingrese la cantidad de minutos que le llevo su lectura: ";
            cin >> minutos_de_lectura[i];
        }
    }

    if (existe == false)
    {
        cout << "El libro solicitado no existe" << endl;
        cout << endl;
    }

    system ("pause");
    system ("cls");
}

///3)
void ranking(string *nombre_de_libros, int cantidadDeLibros, int *minutos_de_lectura)
{
    system ("cls");

    string *libros_rankeados = new string [cantidadDeLibros];
    int *minutos_rankeados = new int [cantidadDeLibros];
    int aux;
    string auxNombres;

    for (int x=0; x<cantidadDeLibros; x++)///cargo todos los minutos de lectura y nombres de los libros
        ///en un puntero auxiliar
    {
        minutos_rankeados[x] = minutos_de_lectura[x];
        libros_rankeados[x] = nombre_de_libros[x];
    }

    for (int i=0; i<cantidadDeLibros; i++)///selecciono un libro para recorrerlo y compararlo con el resto
    {
        for (int j=i+1; j<cantidadDeLibros; j++)///lo comparo con el resto de libros
        {
            if (minutos_rankeados[i] >= minutos_rankeados[j]) ///si tuvo mas minutos en la pos i, lo guardo su nombre
                ///en el puntero de libros rankeados
            {

            }
            else///si no tuvo mas minutos de lectura que el libro anterior,
            {
                aux = minutos_rankeados[i];
                minutos_rankeados[i] = minutos_rankeados[j];
                minutos_rankeados[j] = aux;

                auxNombres = libros_rankeados[i];
                libros_rankeados[i] = libros_rankeados[j];
                libros_rankeados[j] = auxNombres;

                i--;
                j = -1;
            }
        }
    }

    cout << "Ranking de libros mas leidos: " << endl;
    for (int k=0; k<cantidadDeLibros; k++)
    {
        cout << "#" << k+1 << " - " << libros_rankeados[k] << endl;
    }

    delete[] libros_rankeados;
    delete[] minutos_rankeados;

    system ("pause");
    system ("cls");
}

int main()
{
    int cantidadDeLibros;
    string *nombre_de_libros;

    cout << "Ingrese la cantidad de libros: ";
    cin >> cantidadDeLibros;
    cin.ignore();

    nombre_de_libros = new string [cantidadDeLibros];

    int *minutos_de_lectura = new int [cantidadDeLibros] {0};

    int opcion;

    for (int i=0; i<cantidadDeLibros; i++)
    {
        cout << "Ingrese el nombre del libro " << i+1 << "/" << cantidadDeLibros << ": ";
        getline(cin, nombre_de_libros[i]);
    }

    system ("cls");

    while (true)
    {
        cout << "================MENU================" << endl;
        cout << "1 - Listado" << endl;
        cout << "2 - Tiempo de lectura" << endl;
        cout << "3 - Ranking" << endl;
        cout << "4 - Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            listar_libros(nombre_de_libros, cantidadDeLibros);
            break;
        case 2:
            tiempo_de_lectura(nombre_de_libros, cantidadDeLibros, minutos_de_lectura);
            break;
        case 3:
            ranking(nombre_de_libros, cantidadDeLibros, minutos_de_lectura);
            break;
        case 4:
            delete[] nombre_de_libros;
            delete[] minutos_de_lectura;
            return 0;
            break;
        default:
            cout << "Opcion incorrecta" << endl;
            system("cls");
            break;
        }

    }

    return 0;
}
