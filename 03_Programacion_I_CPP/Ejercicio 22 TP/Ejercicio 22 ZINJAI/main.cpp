#include <iostream>
#include <cstdlib>

using namespace std;

//22 Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su
//sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los
//siguientes costos: - - -
//Costo de alquiler de $10000
//Costo por caramelo producido de $2.50
//Costo por mantenimiento cada 100 caramelos de $5000
//Dados el presupuesto inicial y la cantidad de caramelos a producir el primer
//mes, informar: - -
//"El presupuesto es suficiente para cubrir los costos de $XXXX"
//"El presupuesto no es suficiente, necesita un crédito de $XXXX"

int main(){
	
	float presupuesto; ///Entrada
	int cant_car_prod; ///Entrada
	
	float costoTotal, creditoNecesario; ///Salida
	
	cout << "Ingrese su presupuesto: ";
	cin >> presupuesto;
	cout << endl;
	cout << "Ingrese qué cantidad de caramelos desea producir: ";
	cin >> cant_car_prod;
	cout << endl << endl;
	
	if (cant_car_prod >= 100){
		costoTotal = 10000 + (2.50 * cant_car_prod) + ((cant_car_prod / 100) * 5000);
		
		if (costoTotal <= presupuesto){
			cout << "El presupuesto es suficiente para cubrir los costos de $" <<costoTotal <<endl;
			
		} else{
			creditoNecesario = costoTotal - presupuesto;
			
			cout << "El presupuesto no es suficiente, necesita un crédito de $" <<creditoNecesario <<endl;
		}
		
	} else {
		costoTotal =  10000 + (2.50 * cant_car_prod);
		if (costoTotal <= presupuesto){
			cout << "El presupuesto es suficiente para cubrir los costos de $" <<costoTotal <<endl;
			
		} else{
			creditoNecesario = costoTotal - presupuesto;
			
			cout << "El presupuesto no es suficiente, necesita un crédito de $" <<creditoNecesario <<endl;
		}
	}
	
	
	system("pause");
	return 0;
}
	
