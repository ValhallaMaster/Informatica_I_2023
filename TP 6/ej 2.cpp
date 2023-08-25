#include <stdio.h>
#include <math.h>
#include <string.h>

int raiz(int a, int b, int c, float *x1, float *x2,int *d) 
{
	*d=b*b-4*a*c;
	
	*x1=(-b+sqrt(*d))/(2*a);
	*x2=(-b-sqrt(*d))/(2*a);
	return 0;
}

int main(void) {
	int x;
	int y;
	int z;
	int d;
	float x1, x2;
	printf("ingrese a: ");
	scanf("%d", &x);
	printf("ingrese b: ");
	scanf("%d", &y);
	printf("ingrese c: ");
	scanf("%d", &z);
	raiz(x ,y, z, &x1, &x2,&d);
	if(d>=0){
		
		printf(" El resultado es: %f, %f",x1, x2);
	}
	
	else{
		printf(" No existen raices reales");
	}
	return 0;
}
