#include <stdio.h>
#include <math.h>
int main(void) {
	int a;
	int b;
	float promedio;
	int suma=0;
	printf( "\n  Ingrese 10 numeros:\n");
	for(a=1; a<=10;a++ ){
		scanf( "%d", &b );
		suma=suma+b;
	}
	promedio=suma/10;
	printf( "\n El promedio es: %f\n",promedio);
	return 0;
}
