/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Mini-Programa 8 */

#include <stdlib.h>// librerias
#include <iostream>

int a; // variables

int main() {// inicia metodo
	system("color 74");
	printf("Ingresa un numero: \n");
	scanf("%i", &a);
	if (a > 100) {
		printf("\nEl valor es mayor a cien, pero no es suficiente");
	}
	else{
		printf("\n...?");
	}
}// termina metodo
