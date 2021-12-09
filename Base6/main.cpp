/* Gerardo Muriel Ramos
Fundamentos
10-17-2020
Panaderia */

#include <iostream> // librerias
#include <stdlib.h>

float money;// variable

int main() {// inicia metodo
	system("color 03");
	printf("\nBienvenido al programa de la panaderia\n");
	printf("\nIngresa tu presupuesto y si quieres ver el menu digita 0\n");
	scanf("%f", &money);
	if (money >= 100 ) {// inicia if
		printf("\nCon $100 te alcanza para: ");
		printf("\n1 pastel de conejo\n");
		printf("\n2 gelatinas de flores\n");
		printf("\n4 panes de muerto rellenos\n");
		printf("\n6 conchas rellenas y 1 beso de angel\n");
		printf("\n10 besos de angel\n");
		printf("\n20 churros\n");
		printf("\n66 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// termina if
	else if (money >= 90) {// else if primero
		printf("\nCon $90 te alcanza para: ");
		printf("\n1 gelatina de flores, 1 pan de muerto relleno, 1 concha rellena y un beso de angel\n");
		printf("\n2 panes de muerto rellenos, 2 conchas rellenas, 1 beso de angel\n");
		printf("\n15 conchas rellenas y un beso de angel\n");
		printf("\n9 besos de angel\n");
		printf("\n18 churros\n");
		printf("\n60 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if primero
	else if (money >= 80) {// else if segundo
		printf("\nCon $80 te alcanza para: ");
		printf("\n1 gelatina de flores, 1 pan de muerto relleno, 1 churro\n");
		printf("\n3 panes de muerto rellenos, 1 churro\n");
		printf("\n4 conchas rellenas, 1 beso de angel\n");
		printf("\n8 besos de angel\n");
		printf("\n16 churros\n");
		printf("\n52 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if segundo
	else if (money >= 70) {// else if tercero
		printf("\nCon $70 te alcanza para: ");
		printf("\n1 gelatina de flores, 1 pan de muerto relleno y 1 churro\n");
		printf("\n1 gelatina de flores,2 besos de angel\n");
		printf("\n2 panes de muerto rellenos, 1 concha rellena y 1 churro\n");
		printf("\n2 panes de muerto rellenos, 2 besos de angel\n");
		printf("\n4 conchas rellenas y 1 beso de angel\n");
		printf("\n7 besos de angel\n");
		printf("\n14 churros\n");
		printf("\n46 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if tercero
	else if (money >= 60) {// else if cuarto
		printf("\nCon $60 te alcanza para: ");
		printf("\n1 gelatina de flores y 1 beso de angel\n");
		printf("\n1 pan de muerto relleno, 2 conchas rellenas y 1 churro\n");
		printf("\n2 panes de muerto rellenos y 1 beso de angel\n");
		printf("\n4 conchas rellenas\n");
		printf("\n6 besos de angel\n");
		printf("\n12 churros\n");
		printf("\n40 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if cuarto
	else if (money >= 50) {// else if quinto
		printf("\nCon $50 te alcanza para: ");
		printf("\n1 gelatina de flores\n");
		printf("\n2 panes de muerto rellenos\n");
		printf("\n2 conchas rellenas y 2 besos de angel\n");
		printf("\n5 besos de angel\n");
		printf("\n10 churros\n");
		printf("\n32 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if quinto
	else if (money >= 40 ) {// else if sexto
		printf("\nCon $40 te alcanza para: ");
		printf("\n2conchas rellenas y 1 beso de angel\n");
		printf("\n4 besos de angel\n");
		printf("\n8 churros\n");
		printf("\n26 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if sexto
	else if (money >= 30 ) {// else if septimo
		printf("\nCon $30 te alcanza para: ");
		printf("\n2 conchas rellenas\n");
		printf("\n3 besos de angel\n");
		printf("\n6 churros\n");
		printf("\n20 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if septimo
	else if (money >= 20 ) {// else if octavo
		printf("\nCon $20 te alcanza para: ");
		printf("\n1 concha rellena y 1 churro\n");
		printf("\n2 besos de angel\n");
		printf("\n4 churros\n");
		printf("\n12 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if octavo
	else if (money >= 10 ) {// else if noveno
		printf("\nCon $10 te alcanza para: ");
		printf("\n1 beso de angel\n");
		printf("\n2 churros\n");
		printf("\n6 bolillos\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if noveno
	else if (money < 1.50 ) {// else if decimo
		printf("\nCon menos de $2 te alcanza para: ");
		printf("\nnada\n");
		printf("\n\nGracias por su visita\n\n");
	}// fin de else if decimo
	else {// else
		printf("\nNo hay sugerencias, pero te damos la lista de precios: \n");
		printf("\nBolillo: $1.5\n");
		printf("\nChurros: $5\n");
		printf("\nBeso de Angel: $10\n");
		printf("\nConcha rellena: $15\n");
		printf("\nPan de muerto relleno: $25\n");
		printf("\nGelatina de flores: $50\n");
		printf("\nPastel de conejo: $100\n");
		printf("\n\nGracias por su visita\n\n");
	}// termina else
	return main();
}//termina metodo
