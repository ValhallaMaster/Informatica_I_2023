#include <stdio.h>
#include <math.h>
#include <string.h>
#define PI 3.1416
float resultado;
float circulo(int radio, int opcion) {
	
	switch(opcion){
	case 'C':
     resultado=2*PI*radio;
	 return resultado;
	case 'A':
		resultado= PI*radio*radio;
			return resultado;
	case 'V':
		resultado= (4*PI*radio*radio*radio)/3;
		return resultado;
		
	}
}

int main(void) {
	float radio;
	char opcion;
	char pipo;
	printf("ingrese radio: ");
	scanf("%f", &radio);
	printf("Elija Circunferencia, Area o Volumen: ");
	scanf("%c", &pipo);
	scanf("%c", &opcion);
	circulo(radio ,opcion);
	
	printf(" El resultado es: %f", resultado);
	return 0;
}
