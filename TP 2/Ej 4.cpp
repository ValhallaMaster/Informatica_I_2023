#include <stdio.h>
#include <math.h>
int main(void) {
	int a=1;
		int b=1;
		int n;   //declaraci?n de variables
	
	printf( "\n   Introduzca el numero a factorear: " );
	scanf( "%d", &n );
	
	for(a=1; a<=n;a++ ){
		b= a*b;
		
	}
	printf( "\n   El factorial es: %d\n",b);
	return 0;
}
