#include <iostream>
using namespace std;

//15)
//La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado.
// Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.
//NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.


int main(){

    int tempMaxima, tempMinima; //Entrada
    int amplitudTermica;

    cout << "Ingrese la temperatura maxima: ";
    cin >> tempMaxima;
    cout << "Ingrese la temperatura minimaa: ";
    cin >> tempMinima;

    amplitudTermica = tempMaxima - tempMinima;

    cout << "La amplitud termica es de: " << amplitudTermica << "°" << endl;


system("pause");
return 0;
}
