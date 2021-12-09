/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Arreglo de 10 Almacenando */

#include <iostream>// librerias
#include <stdlib.h>
#include <math.h>

float valores[10];// variables
int i;

int main() {
	i = 0;
	for (i = 0; i <= 9; i++) {// inicia for
		printf("Escribe el valor %d", i);
		printf("\n");
		scanf("%f", &valores[i]);
	}// termina for
	for (i = 0; i < 10; i++) {// inicia segundo for
		printf("\nEn la posicion %d el valor es %f \n", i, (((valores[i])*10)/10));
	}// termina segundo for
}
