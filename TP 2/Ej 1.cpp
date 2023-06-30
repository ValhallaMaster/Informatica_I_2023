#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,x1,x2,disc;  
	
	printf("\n Introduzca el valor de a: ");
	scanf( "%f", &a );
	
	printf("\n Introduzca el valor de b: ");
	scanf( "%f", &b );
	
	printf("\n Introduzca el valor de c: ");
	scanf( "%f", &c );
	
	disc=b*b-4*a*c;
	
	if (disc>=0){
		x1=(-b+sqrt(disc))/(2*a);
		x2=(-b-sqrt(disc))/(2*a);
		printf ("x1= %f \n", x1);
		printf ("x2= %f \n", x2);
	}
	else {
		printf ("No existen raices reales \n");
	}
	
	
}
