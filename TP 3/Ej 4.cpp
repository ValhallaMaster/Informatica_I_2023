#include <stdio.h>
#include <math.h>
int main(void) {
	int x;
	float y;
	float n;
	printf( "\n   Introduzca el numero a derivar: " );
	scanf( "%d", &x );
	y=sin (2*x);
	printf( "\n   la derivada es: %f \n", y);
	return 0;
}
