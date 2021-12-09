/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Cubo de Dos En Dos */

#include <stdlib.h>// librerias
#include <iostream>

int i;

int main() {// inicia metodo
	system("color 74");
	int i = 0;
	for (i = 1; i <= 11; i = i+2){
		printf("%i \n", i*i*i);
	}
}// termina metodo
