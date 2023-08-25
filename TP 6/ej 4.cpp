#include <stdio.h>
#include <math.h>
#include <string.h>

float determinante(float array[] [3]) {	
	float det;
	det=array[0][0]*array[1][1]*array[2][2]
		+array[0][1]*array[1][2]*array[2][0]
	    +array[1][0]*array[2][1]*array[0][2]
	    -array[0][2]*array[1][1]*array[2][0]
		-array[0][1]*array[1][0]*array[2][2]
		-array[1][2]*array[2][1]*array[0][0];	
     return det;
}

int main(void) {
 float array[3][3];
 float determin;
 int k,j;
 for(k=0;k<3;k++){
	 for(j=0; j<3; j++){
		 printf("ingrese el elemento %d %d \n", k+1, j+1);
		 scanf("%f", &array[k][j]);
	 }
    }
 determin=determinante(array);
 printf("El valor del determinante es: %f \n", determin);
 return 0;
}
