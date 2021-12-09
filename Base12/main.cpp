/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Easy Pass */

#include <iostream>// librerias
#include <stdlib.h>

int user, pass;// variables
int intento = 0; //inicialización

int main() {// inicia metodo
	system("color 7D");
	do {
		printf("\nIngresa tu Usuario: \n");
		scanf("%i", &user);
		printf("\nIngresa tu Llave: \n");
		scanf("%i", &pass);
		
		intento++;// contador que permite un incremento unitario declarado en las variables	
			
		if (user == 1234 && pass == 2020) {// inicia if
			printf("\nHola Humano ;)");
			break;
		}// termina if
		else 
			printf("\nUsuario o Llave Invalid@...");	
		}
	while (intento < 3);
		printf("\n\n*************************\n");
}// termina metodo
// usuario: 1234, pass: 2020
