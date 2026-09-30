#include <iostream>
#include "Fecha.h"

using namespace std;

int main()
{
    Fecha fecha1;
    Fecha fecha2(31,1,2026);
    Fecha fecha3(40,4,1996);

    cout << fecha1.toString() << endl;
    cout << fecha2.toString() << endl;
    cout << fecha3.toString() << endl;

    return 0;
}
