/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
MenorACien*/
#include <iostream>// librerias 
#include <stdlib.h>

int numero;//variables

int main() {// inicia main
	system("color 7D");
	do{// inicia ciclo de repeticion
		printf("Digita un numero\n");
		scanf("%i", &numero);
	}
	while (numero <= 99);
		printf("\nEl valor es igual o mayor a cien");
}//termina main
