Algoritmo GuiaN2_Ej5
	Escribir "Ingrese el importe original: "
	Leer importeOriginal
	Si importeOriginal < 100 Entonces
		importeConDescuento = importeOriginal * 0.95
	SiNo
		Si importeOriginal >= 100 && importeOriginal <= 500 Entonces
			importeConDescuento = importeOriginal * 0.90
		SiNo
			Si importeOriginal > 500 Entonces
				importeConDescuento = importeOriginal * 0.85
			FinSi
		FinSi
	FinSi
	Escribir "El importe con descuento es de: " importeConDescuento
FinAlgoritmo
