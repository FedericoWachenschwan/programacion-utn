Proceso fabrica_caramelos
	Definir presupuesto, costoTotal, creditoNecesario Como Real;
	Definir cant_car_prod Como Entero;
	Escribir 'Ingrese su presupuesto: ';
	Leer presupuesto;
	Escribir 'Ingrese qué cantidad de caramelos desea producir: ';
	Leer cant_car_prod;
	Si cant_car_prod>=100 Entonces
		costoTotal <- 10000+(2.5*cant_car_prod)+((cant_car_prod/100)*5000);
	SiNo
		costoTotal <- 10000+(2.5*cant_car_prod);
	FinSi
	Si costoTotal<=presupuesto Entonces
		Escribir 'El presupuesto es suficiente para cubrir los costos de $', costoTotal;
	SiNo
		creditoNecesario <- costoTotal-presupuesto;
		Escribir 'El presupuesto no es suficiente, necesita un crédito de $', creditoNecesario;
	FinSi
FinProceso
