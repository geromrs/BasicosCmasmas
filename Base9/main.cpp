/* Gerardo Muriel Ramos
Fundamentos de Programacion
11-4-2020
Practica Animales */
#include <iostream>// librerias
#include <stdlib.h>
char select;
int main() {// inicia main
	system("color 7D");
	printf("Bienvenido al sitema de AnimalPath");
	printf("\n**********************************");
	printf("\nEste programa fue creado en apoyo a los alumnos de Educacion Primaria.");
	printf("\nSelecciona una opcion de los siguientes tipos de animales para conocer sus principales caracteristicas:");
	printf("\nA.- Reptiles");
	printf("\nB.- Mamiferos");
	printf("\nC.- Acuaticos");
	printf("\nD.- Insectos\n");
	scanf("%c", &select);
	switch (select) {// inicia switch
		case 'a': // case Reptiles
			printf("\n\nLos reptiles son una clase de animales vertebrados amniotas provistos de escamas epidermicas de queratina.");
			printf("\nFueron muy abundantes en el periodo Mesozoico, epoca en la que surgieron los dinosaurios, pterosaurios, ictiosaurios,");
			printf("\nplesiosaurios y mosasaurios.");
		break;
		case 'b': // case Mamiferos
			printf("\n\nLos mamiferos son una clase de vertebrados amniotas homeotermos (de sangre caliente) que poseen glandulas mamarias");
			printf("\nproductores de leche con las que alimentan a alas crias, la mayoria son viviparos");
			printf("\ntodos decienden de un antepasado comun que se remonta probablemente a finales del Triasico, hace mas de 200 millones de");
			printf("\nanios.");
		break;
		case 'c': // case Acuaticos
			printf("\n\nLos animales acuaticos son aquellos animales que viven todo el tiempo o gran parte de su vida dentro del agua,");
			printf("\nsea dulce o salada. Pueden respirar el oxigeno disuelto en el agua (a traves de las branquias o de la piel) o lo");
			printf("\npueden respirar del aire a travez de los pulmones.");
		break;
		case 'd': // case Insectos
			printf("\n\nLos insectos son una clase de animales invertebrados del filo de los artropodos, caracterizados por presentar un par de");
			printf("\nantenas, tres pares de patas y dos pares de alas. Comprenden el grupo de los animales mas diversos de la Tierra con");
			printf("\naproximadamente un millon de especies descritas, mas que todos los demas grupos de animales juntos.");
		break;
		default: //default principal
			printf("\n\nNo seleccionaste una opcion valida.");
	}// termina switch
}//termina main
