/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Mini-Programa 4 */

#include <stdlib.h>// librerias
#include <iostream>

float a, b, r; // variables

int main() {// inicia metodo
	system("color 74");
	printf("\nIngresa el valor del primer par de lados: \n");
	scanf("%f", &a);
	printf("\nIngresa el valor del segundo par de lados: \n");
	scanf("%f", &b);
	r = 2*(a + b);
	printf("\nEl resultado es: %0.4f", r);
}// termina metodo
