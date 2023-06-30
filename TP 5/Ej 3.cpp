#include <stdio.h>
#include <math.h>
#include <string.h>

float Requiv(float R1, float R2, float R3) {
	float requiv;
	float requiv1;
	float op1=0;
	float op2=0;
	float op3=0;
	
	op1=1/R1;
	op2=pow(R2, -1);
	op3=pow(R3, -1);
	
	requiv1=(op1+op2+op3); 
	requiv=pow(requiv1, -1);
		return requiv;
}

int main(void) {
	int x;
	int y;
	int z;
	printf("ingrese el valor de R1: ");
	scanf("%d", &x);
	printf("ingrese el valor de R2: ");
	scanf("%d", &y);
	printf("ingrese el valor de R3: ");
	scanf("%d", &z);
	printf(" El resultado es: %f\n",Requiv(x, y, z));
	return 0;
}
