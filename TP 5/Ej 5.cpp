#include <stdio.h>
#include <math.h>
#include <string.h>
float total;
float descuento(float a, float b) {
float porc;
	 porc=(a*b)/100;
	 total = a-porc;
	 return total;
}

int main(void) {
	float desc;
	float precio;
	printf("ingrese precio: ");
	scanf("%f", &precio);
	printf("ingrese descuento: ");
	scanf("%f", &desc);
	descuento(precio ,desc);
		
	printf(" El precio final es: %f", total);
	return 0;
}
