#include <stdio.h>
#include <math.h>
#include <string.h>

int intercambio(int *a, int *b) 
{	int cambio;
    cambio=*b;
	*b=*a;
	*a=cambio;
    
	return 0;
}

int main(void) {
	int x1;
	int x2;
	printf("ingrese x1: ");
	scanf("%d", &x1);
	printf("ingrese x2: ");
	scanf("%d", &x2);
	intercambio(&x1, &x2);
	printf("x1=%d    x2=%d", x1,x2);
	return 0;
}
