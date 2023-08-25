#include <stdio.h>
#include <math.h>
#include <string.h>
int multip_de_matrices(float a[][3], float b[][3], float c[][3]) {
	int k;
	int j;
		c[0][0]=a[0][0]*b[0][0]+a[0][1]*b[1][0]+a[0][2]*b[2][0];
		c[0][1]=a[0][0]*b[0][1]+a[0][1]*b[1][1]+a[0][2]*b[2][1];
		c[0][2]=a[0][0]*b[0][2]+a[0][1]*b[1][2]+a[0][2]*b[2][2];
		c[1][0]=a[1][0]*b[0][0]+a[1][1]*b[1][0]+a[1][2]*b[2][0];
		c[1][1]=a[1][0]*b[0][1]+a[1][1]*b[1][1]+a[1][2]*b[2][1];
		c[1][2]=a[1][0]*b[0][2]+a[1][1]*b[1][2]+a[1][2]*b[2][2];
		c[2][0]=a[2][0]*b[0][0]+a[2][1]*b[1][0]+a[2][2]*b[2][0];
		c[2][1]=a[2][0]*b[0][1]+a[2][1]*b[1][1]+a[2][2]*b[2][1];
		c[2][2]=a[2][0]*b[0][2]+a[2][1]*b[1][2]+a[2][2]*b[2][2];
		
		}
	

	int main(void) {
		float array1[3][3];
		float array2[3][3];
		float array_result[3][3];
		int k,j, i, t,m,n;
		for(k=0;k<3;k++){
			for(j=0; j<3; j++){
				printf("ingrese el elemento del primer arreglo %d %d \n", k+1, j+1);
				scanf("%f", &array1[k][j]);
	
			}
		}
		for(i=0;i<3;i++){
			for(t=0; t<3; t++){
				printf("ingrese el elemento del segundo arreglo %d %d \n", i+1, t+1);
				scanf("%f", &array2[i][t]);
			}
		}
		multip_de_matrices(array1,array2,array_result);
		printf("\n El resultado es: \n ");
		for(m=0;m<3;m++){
			printf("\n");
			for(n=0; n<3; n++){
				printf("%f  ",array_result[m][n]);
	
	}
		}
	}
