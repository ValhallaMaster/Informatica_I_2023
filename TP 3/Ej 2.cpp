#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main(void) {
	int r;
	char o;
	int f;
	char t;
	char j;
	
	printf( "\n   Introduzca la operacion a, b o c: " );
	scanf( "%c", &o );
	scanf( "%c", &j );
	printf( "\n   Introduzca el radio: " );
	scanf( "%d", &r );
	
	
	switch(o){
case 'a':
		f=2*PI*r;
		printf( "\n   la circunferencia es: %d\n",f);
		break;
case 'b':
	f=PI*r*r;
	printf( "\n   El area es: %d\n",f);
	break;
case 'c':
	f= pow(r,3)*PI*4/3;
	printf( "\n   El volumen es: %d\n",f);
	break;
		
}
	return 0;
}

