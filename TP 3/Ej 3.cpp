#include <stdio.h>
#include <math.h>
#define  PIA 3.14159*4
int main(void) {
	float x;
	int a=0;
	float y;
	float PIB=PIA/50;
	
	while(x<=PIA ) {
		x=x+PIB;
		a=a+1;
		y=sin(x)+0.7*cos(2*x)+0.5*sin(3*x);
	
		printf( "%d  %f  %f\n",a,y,x);
		
	}
	return 0;
}


