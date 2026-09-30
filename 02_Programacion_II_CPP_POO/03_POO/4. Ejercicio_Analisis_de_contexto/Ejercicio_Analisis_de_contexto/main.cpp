#include <iostream>
#include "Socio.h"
#include "Libro.h"
#include "Prestamo.h"

using namespace std;

int main()
{
    // 1. Crear un socio
    Socio s(39, "Pepito", "Gomez", 12345, "asd@asd", 1, 1, 1111, 1);

    // 2. Crear un libro
    Libro l(1, 2, 2, 2, 2222, "AAAAAAA", "OSWUALDO");

    // 3. Crear un préstamo pasando el ISBN del libro y el DNI del socio
    Prestamo p(l.getISBN(), s.getDNI(), 3, 3, 3333, 4, 4, 4444);

    // 4. Mostrar todos los datos del préstamo
    cout << "ISBN del libro prestado: " << p.getIsbnLibro() << endl;
    cout << "DNI del socio: " << p.getDniSocio() << endl;
    cout << "Fecha de prestamo: " << p.getDia_prestamo() << "/"
         << p.getMes_prestamo() << "/" << p.getAnio_prestamo() << endl;
    cout << "Fecha de devolucion: " << p.getDia_devolucion() << "/"
         << p.getMes_devolucion() << "/" << p.getAnio_devolucion() << endl;

    // 5. Probar los setters de devolución
    p.setDia_devolucion(10);
    p.setMes_devolucion(11);
    p.setAnio_devolucion(4445);

    cout << "\nDespues de modificar la fecha de devolucion:" << endl;
    cout << "Nueva fecha de devolucion: " << p.getDia_devolucion() << "/"
         << p.getMes_devolucion() << "/" << p.getAnio_devolucion() << endl;

    return 0;
}
