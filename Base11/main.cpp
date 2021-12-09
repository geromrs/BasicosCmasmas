/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Formulas */

#include <iostream>// librerias
#include <stdlib.h>

int menu, sn; // variables
float n1, n2, n3, r;

int main() {// inicia metodo
		system("color 7D");// colores
	do {// inicia ciclo
		printf("Bienvenido al Sistema de Formulas");
		printf("\nPor favor selecciona una opcion: ");
		printf("\n\n1.- Calcular resistencia");
		printf("\n\n2.- Calcular fuerza");
		printf("\n\n3.- Calcular velocidad");
		printf("\n\n4.- Calcular peso");
		printf("\n\n5.- Calcular aceleracion\n");
		scanf("%i", &menu);
		switch (menu) {// inicia switch
			case 1:// resistencia
				printf("\nIngresa el valor del voltaje: \n");
				scanf("%f", &n1);
				printf("\nIngresa el valor de la corriente: \n");
				scanf("%f", &n2);
				r = n1/n2;
				printf("\nEl valor de la resistencia es: %0.4f", r);
			break;
			case 2:// fuerza
				printf("\nIngrese el valor de la masa: \n");
				scanf("%f", &n1);
				printf("\nIngrese el valor de la aceleracion: \n");
				scanf("%f", &n2);
				r = n1*n2;
				printf("\nEl valor de la fuerza es: %0.4f", r);
			break;
			case 3:// velocidad
				printf("\nIngrese el valor de la distancia: \n");
				scanf("%f", &n1);
				printf("\nIngrese el valor de la tiempo: \n");
				scanf("%f", &n2);
				r = n1/n2;
				printf("\nEl valor de la velocidad es: %0.4f", r);
			break;
			case 4:// peso
				printf("\nIngrese el valor de la masa: \n");
				scanf("%f", &n1);
				r = n1*9.81;
				printf("\nEl valor del peso es: %0.4f", r);
			break;
			case 5:// aceleracion
				printf("\nIngrese el valor de la velocidad final: \n");
				scanf("%f", &n1);
				printf("\nIngrese el valor de la velocidad inicial: \n");
				scanf("%f", &n2);
				printf("\nIngrese el valor del tiempo: \n");
				scanf("%f", &n3);
				r = (n1-n2)/n3;
				printf("\nEl valor de la aceleracion es: %0.4f", r);
			break;
			default: 
			printf("\nNo pusiste ninguna de las opciones que te di. bye");
			}// termina switch 
		printf("\n\nGracias por usar el sistema.");
		printf("\n\nQuieres usar de nuevo el formulario?");
		printf("\n1.- Usar de nuevo");
		printf("\n(Digita cualquier otro numero para salir)\n");
		scanf("%i", &sn);
	}// termina ciclo
	while (sn == 1);
		printf("\nCiao\n");
}// termina metodo
