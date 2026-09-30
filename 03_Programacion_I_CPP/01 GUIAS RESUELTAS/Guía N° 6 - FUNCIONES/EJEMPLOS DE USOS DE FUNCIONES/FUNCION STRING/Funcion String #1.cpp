#include <iostream>
using namespace std;

void saludar (){

    cout << "Hola soy una funcion" <<endl;

}

void saludame (string nombre){

    cout << "Hola " <<nombre <<", como estas?" <<endl;

}


int main(){

    saludar ();
    saludame ("Fede");


system("pause");
return 0;
}
