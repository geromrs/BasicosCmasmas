/* Gerardo Muriel Ramos
Fundamentos de Programacion
12-9-2020
Arreglo de 10 */

#include <iostream>// librerias
#include <stdlib.h>
#include <math.h>

float valores[10];// variables
int i;

int main() {
	i = 0;
	valores[0] = 1;
	valores[1] = 2;
	valores[2] = 3;
	valores[3] = 4;
	valores[4] = 5;
	valores[5] = 6;
	valores[6] = 7;
	valores[7] = 8;
	valores[8] = 9;
	valores[9] = 10;
	for (i = 0; i < 10; i++) {
		printf("\nEn la posicion %d el valor es %f \n", i, valores[i]);
	}
}
