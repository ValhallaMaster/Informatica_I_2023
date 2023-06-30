#include <stdio.h>
#include <math.h>
#include <string.h>
int resultado;
int factorial(int num) {
	int a=1;
	int b=1;

	for(a=1; a<=num;a++ ){
		b = a*b;
		resultado=b;
	}
}

int main(void) {
int numero;
	printf("ingrese numero: ");
	scanf("%d", &numero);
	factorial(numero);
	
	printf(" El resultado es: %d", resultado);
}
