/* Gerardo Muriel Ramos
Fundamentos
10-17-2020
Tienda de deportes */
#include <iostream> // liberarias
#include <stdlib.h>

int money; // variable dinero del usuario
char name[20]; // variable nombre del usuario

int main() {// inicia metodo
	system("color 7D");
	printf("Bienvenido al sistema de los productos Deportivos");
	printf("\nCual es tu nombre: ");
	scanf("%s", &name); // ingreso del nombre
	printf("\nGracias %s", name);
	printf("\n\nTenemos los siguientes productos:");
	printf("\nLlavero $500-699");
	printf("\nBandas de goma $700-899");
	printf("\nPlayera Oficial $900-$1500");
	printf("\nTenis p/correr $1500-$2099");
	printf("\nTenis p/basquetbol $2100-$3000");
	printf("\nLos precios varian dependiendo del modelo.");
	printf("\n\nIngresa el valor del producto deseado:");
	scanf("%i", &money); // ingreso del valor del producto
	if (money>=500 && money<=699) {// if llavero
		printf("\n\nGracias por comprar: Llavero %s", name);
	}
	else if (money>=700 && money<=899) {// if Bandas de goma
		printf("\n\nGracias por comprar: Bandas de goma %s", name);
	}
	else if (money>=900 && money<=1499) {// if Playera Oficial
		printf("\n\nGracias por comprar: Playera Oficial %s", name);
	}
	else if (money>=1500 && money<=2099) {// if Tenis p/correr
		printf("\n\nGracias por comprar: Tenis p/correr %s", name);
	}
	else if (money>=2100) {// if 
		printf("\n\nGracias por comprar: Tenis p/basquetbol %s", name);
	}
	else {// else
		printf("\nLo sentimos no te podemos ayudar %s", name);
		printf(" habla con personal de la tienda");
	}
}// termina metodo
