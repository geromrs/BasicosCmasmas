/* Gerardo Muriel Ramos
Fundamentos
10-17-2020
operaciones */

#include <iostream> // libreria
#include <stdlib.h> // colores y fondo

float a, b, suma, resta, multipli, division; // variables

int main() {// inicia metodo
	system("color 03"); // color
	
	printf("\n----Bienvendo al Sistema de Operaciones----\n");
	printf("\nPor favor dame un tercer valor: \n");
	scanf("%f", &a);
	printf("\nPor favor dame segundo valor: \n");
	scanf("%f", &b);
	
	suma = a+b;
	resta = a-b;
	multipli = a*b;
	division = a/b;
	
	printf("\n\nLa suma da: %0.4f", suma);
	printf("\n\nLa resta da: %0.4f", resta);
	printf("\n\nLa multiplicacion da: %0.4f", multipli);
	printf("\n\nLa division da: %0.4f", division);
	printf("\n----Gracias por utilizar el Sistema----\n");
}// termina metodo
