/* Nombre: Gerardo Muriel Ramos
Fundamentos
Fecha: 10-14-2020
Programa: prisma rectangular */
#include <iostream> // libreria

float a, b, h, result;

int main() { // inicia metodo
	printf("\nBienvenido al programa para obtener la base de un prisma rectangular\n");
	printf("\nPor medio de la formula: 2(a+b)h + 2(ab)\n");
	printf("\nPor favor ingresa el valor de a: \n"); // para la variable a
	scanf("%f", &a);
	
	printf("\nPor favor ingresa el valor de b: \n"); // para la variable b
	scanf("%f", &b);
	
	printf("\nPor favor ingresa el valor de la altura(h): \n"); // para la variable de la altura (h)
	scanf("%f", &h);
	
	result = 2*((a+b)*h)+ 2*(a*b);
	printf("\n\nEl area del prisma rectangular es: %0.4f", result);
}// termina metodo
