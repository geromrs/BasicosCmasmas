/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Mini-Programa 5 */

#include <stdlib.h>// librerias
#include <iostream>

float a, r; // variables

int main() {// inicia metodo
	system("color 74");
	printf("\nIngresa el valor del lado: \n");
	scanf("%f", &a);
	r = 4*a;
	printf("\nEl resultado es: %0.4f", r);
}// termina metodo
