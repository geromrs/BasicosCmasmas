/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Mini-Programa 7 */

#include <stdlib.h>// librerias
#include <iostream>

int a; // variables

int main() {// inicia metodo
	system("color 74");
	printf("Ingresa un numero: \n");
	scanf("%i", &a);
	if (a >= 40) {
		printf("\nA comprarle papi :)");
	}
	else{
		printf("\nNo puedes comprar nada");
	}
}// termina metodo
