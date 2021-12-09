/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Del 1 al 500 */
#include <iostream>// librerias
#include <stdlib.h>

int i = 0;// variable

int main() {// inicia main
	system("color 74");
	for (int i = 1; i <= 500; i = i++) {// inicia for
		printf("%i\n", i++);
	}// termina for
}// termina main
