#include <stdio.h>
#include <math.h>
#include <string.h>

float exp(float base, int exponente) {
	int i;
	int result=base;
	if(exponente==0){
		result=1;
	}
	else{
		for(i=1; i<exponente; i++){
			result=base*result;
	}
	}
	return result;
}

int main(void) {
   float b;
   int e;
printf("ingrese base y exponente: ");
scanf("%f %d", &b, &e);
printf(" El resultado es: %f\n",exp(b, e) );
return 0;
}
