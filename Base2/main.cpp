/* Nombre: Gerardo Muriel Ramos
Fundamentos
Tema: Tipos de Datos
Fecha: 10-10-2020 */
#include <iostream> // libreria
int enterocorto;
float decimal;
char letra;
char palabra[20];
float decimalargo;
int main() {// inicia metodo
	printf("\nBienvenido al programa de tipos de datos\n");
	printf("\nPor favor digita un numero entero: \n"); // para el entero
	scanf("%i", &enterocorto);
	printf("El numero que digitaste es: %i", enterocorto);
	
	printf("\nPor favor digita un numero decimal: \n"); // para el decimal
	scanf("%f", &decimal);
	printf("\n\nEl numero decimal que digitaste es: %0.2f", decimal);
	
	printf("\nPor favor digita un numero decimal largo: \n"); // para decimal largo
	scanf("%f", &decimalargo);
	printf("\n\nEl numero que digitaste es: %0.4f", decimalargo);
	
	printf("\nPor favor digita una palabra: \n"); // para palabra
	scanf("%s", &palabra);
	printf("La palabra que digitaste es: %s", palabra);
	
	printf("\nPor favor digita una letra: \n"); // para la letra
	scanf("%s", &letra);
	printf("La letra que digitaste es: %c", letra);
}// termina metodo
