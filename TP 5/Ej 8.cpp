#include <stdio.h>
#include <math.h>
#include <string.h>
float resultado;
int distancia(int x1, int x2, int y1, int y2) {
int puntox;
int puntoy;
int xcuad;
int ycuad;
float dist;
		puntox = x2-x1;
		puntoy = y2-y1;
		xcuad=pow(puntox, 2);
		ycuad=pow(puntoy, 2);
		resultado=sqrt(xcuad+ycuad);
}

int main(void) {
	int x1;
	int y1;
	int x2;
	int y2;
	printf("ingrese coordenada en x1 : ");
	scanf("%d", &x1);
	printf("ingrese coordenada en y1: ");
	scanf("%d", &y1);
	printf("ingrese coordenada en x2 : ");
	scanf("%d", &x2);
	printf("ingrese coordenada en y2: ");
	scanf("%d", &y2);
	distancia(x1, x2, y1, y2);
	printf("La distancia es es: %f", resultado);
}
