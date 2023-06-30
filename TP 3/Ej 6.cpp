#include <stdio.h>
#include <math.h>
int main(void) {
	int x1;
	int x2;
	float y;
	float n;
	printf( "\n   Introduzca el limite menor: " );
	scanf( "%d", &x1 );
	printf( "\n   Introduzca el limite mayor: " );
	scanf( "%d", &x2 );
	y=0.5*(x2-(1/sin (2*x2)))-0.5*(x1-(1/sin (2*x1)));
	printf( "\n   la integral definida es: %f \n", y);
	return 0;
}
