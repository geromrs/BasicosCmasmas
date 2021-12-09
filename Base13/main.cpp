/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
SuSy (atencion a cliente) */

#include <iostream>// librerias
#include <stdlib.h>

int user, pass;// variables para validacion de usuario
int intento = 0; //inicialización
int menup, menus; // p/menu principal
char sug[50]; // p/ sugerencias
int re;// p/usar de nuevo formulario

int main() {// inicia metodo
	system("color 74");
	do {
		printf("\nIngresa tu Usuario: \n");
		scanf("%i", &user);
		printf("\nIngresa tu Llave: \n");
		scanf("%i", &pass);
		
		intento++;// contador que permite un incremento unitario declarado en las variables	
			
		if (user == 1234 && pass == 4321) {// inicia if
			do {// inicia ciclo de opciones
				printf("\nBienvenido a SuSy-stema");
				printf("\n\nSelecciona una opcion: "); 
				printf("\n1.- Internet");
				printf("\n2.-Telefono");
				printf("\n3.-Dar de baja");
				printf("\n4.-Sugerencias");
				printf("\n5.-Salir del sistema\n");
				scanf("%i", &menup);
				switch (menup) {// inicia switch menup
					case 1:
						printf("\n\nSelecciona una opcion: "); 
						printf("\n1.- Servicio Normal");
						printf("\n2.- Fibra Optica\n");
						scanf("%i", &menus);
						switch (menus) {//inicia p/ menus
							case 1:
								printf("\n2.- Precio");
								printf("\n3.- Instalacion");
								printf("\n4.- Costo"); 
							break;
							case 2:
								printf("\n2.- Precio");
								printf("\n3.- Instalacion");
								printf("\n4.- Costo");
							break;
							default: 
								printf("\n\nNo seleccionaste una opcion valida.");
						}// fin p/ menus
					break;
					case 2:
						printf("\n\nSelecciona una opcion: "); 
						printf("\n1.- Telefono fijo");
						printf("\n2.- Celular\n");
						scanf("%i", &menus);
						switch (menus) {//inicia p/ menus
							case 1:
								printf("\n2.- Precio");
								printf("\n3.- Instalacion");
								printf("\n4.- Costo"); 
							break;
							case 2:
								printf("\n2.- Plan");
								printf("\n3.- Duracion");
								printf("\n4.- Costo");
							break;
							default: 
								printf("\n\nNo seleccionaste una opcion valida.");
						}// fin p/ menus
					break;
					case 3:
						printf("\n\nSelecciona una opcion: "); 
						printf("\n1.- Fallas");
						printf("\n2.- No esta comodo con el servicio");
						printf("\n3.- Mal trato");
						printf("\n4.- No recibe atencion");
						printf("\n5.- Prefiero no decirlo\n");
						scanf("%i");
						printf("\n\nEn breve lo atendemos ;)");
					break;
					case 4:
						printf("\nPor favor ingresa tu sugerencia usando menos de 50 caracteres: \n");
						scanf("%s", &sug);
						printf("\n\nGracias por su sugerencia. ;)");
					break;
					case 5:
						printf("\n...");
					break;
					default:
						printf("\n\nNo seleccionaste una opcion valida");
				}//termina switch menup
				printf("\n\nDesea usar nuevamente el SuSy-stema?\n");
				printf("\n1.-Si");
				printf("\n2.-No \n");
				scanf("%i", &re);
			}// termina ciclo de opciones
			while (re == 1);
				printf("\nAdios... ;)");
			break;
		}// termina if
		else 
			printf("\nUsuario o Llave Invalid@...");	
		}
	while (intento < 3);
		printf("\n\n*************************\n");
}// termina metodo
// usuario: 1234, pass: 4321
