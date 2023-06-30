#include <stdio.h>
#include <math.h>
#include <string.h>
float resultado;
int distancia(int x1, int x2, int y1, int y2, int z1, int z2) {
	int puntox;
	int puntoy;
	int puntoz;
	int xcuad;
	int ycuad;
	int zcuad;
	float dist;
	puntox = x2-x1;
	puntoy = y2-y1;
	puntoz = z2-z1;
	xcuad=pow(puntox, 2);
	ycuad=pow(puntoy, 2);
	zcuad=pow(puntoz, 2);
	resultado=sqrt(xcuad+ycuad+xcuad);
}

int main(void) {
	int x1;
	int y1;
	int z1;
	int x2;
	int y2;
	int z2;
	printf("ingrese coordenada en x1 : ");
	scanf("%d", &x1);
	printf("ingrese coordenada en y1: ");
	scanf("%d", &y1);
	printf("ingrese coordenada en z1: ");
	scanf("%d", &z1);
	printf("ingrese coordenada en x2 : ");
	scanf("%d", &x2);
	printf("ingrese coordenada en y2: ");
	scanf("%d", &y2);
	printf("ingrese coordenada en z1: ");
	scanf("%d", &z1);
	distancia(x1, x2, y1, y2, z1, z2);
	printf("La distancia es es: %f", resultado);
}
