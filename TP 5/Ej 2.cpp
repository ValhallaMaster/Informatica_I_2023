#include <stdio.h>
#include <math.h>
#include <string.h>
float x1;float x2;
int d;
float raiz(int a, int b, int c) {
      
	 d=b*b-4*a*c;
	 
	 x1=(-b+sqrt(d))/(2*a);
	 x2=(-b-sqrt(d))/(2*a);
	 
}

int main(void) {
	int x;
	int y;
	int z;
	printf("ingrese a: ");
	scanf("%d", &x);
	printf("ingrese b: ");
	scanf("%d", &y);
	printf("ingrese c: ");
	scanf("%d", &z);
	raiz(x ,y, z);
	if(d>=0){
		
		printf(" El resultado es: %f, %f",x1, x2);
	}
	
	else{
		printf(" No existen raices reales");
	}
	return 0;
}
