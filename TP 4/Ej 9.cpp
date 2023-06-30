#include <stdio.h>
#include <math.h>
#define grado 0.174532
float s[36];
float a[36];
float p[12];
int i;
float prom;
int l;
int z;
float y;
float x;
int main(){
	x=0;
	for(i=0; i<36; i++){
		x = x+grado;
		y = sin (x);
	 s[i]=y;
	 a[i]=x;
	}
	for(z=0; z<36; z+3){
		prom= a[z]+a[z+1]+a[z+2] /3;
		p
	}
	for(l=0; l<36; l++){
		printf(" valor de x= %f ", a[l]);	
		printf(" valor de y= %f\n", s[l]);
	}
}
