#include <stdio.h>
#include <math.h>
#define  PIA 3.14159*4
int main(void) {
	float x;
	int a=0;
	float y;
	float PIB=PIA/50;
	float derivada_y;
	
	while(x<=PIA ) {
		x=x+PIB;
		a=a+1;
		y=sin(x);
		derivada_y=cos(x);
		printf( "%d  %f  %f  %f\n",a,y,derivada_y,x);
		
	}
	return 0;
}

