#include <stdio.h>
#include <math.h>
int main(void) {
	int a;
	int b;
	int contador=0;
	printf( "\n  Ingrese 10 numeros:\n");
	for(a=1; a<=10;a++ ){
		scanf( "%d", &b );
		if (b%3==0){
			contador=contador+1;
		}
		
	}
	printf( "\n La cantidad de numeris divisibles por 3 son: %d\n",contador);
	return 0;
}
