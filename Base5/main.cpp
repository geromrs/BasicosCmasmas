/* Gerardo Muriel Ramos
Fundamentos
10-17-2020
Aprobado o No (Promedio) */

#include <iostream> // libreria

float calif; //variables

int main() {// inicia metodo
	printf("\nBienvenido al Programa Paso o No Paso\n");
	printf("\nPor favor digita tu calificacion (en numeros del 1 al 10): \n");
	scanf("%f", &calif);
	
	if (calif >= 6) { // inicia if
		printf("\nPasas la materia\n");
	}// termina if
	else {// else
		printf("\nNo pasas la materia\n");
	}// termina else
}// termina metodo
