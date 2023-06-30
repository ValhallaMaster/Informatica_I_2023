#include <stdio.h>
#include <math.h>
int main(void) {
	int min;
	int max;
	int n;
	int a;
	int num;//declaraci?n de variables
	
	printf( "\n   Introduzca la cantidad de numeros: " );
	scanf( "%d", &n );
	for(a=0; a<n;a++ ){
		scanf( "%d", &num );
		if(0>n){
			printf( "\n   no se puede");
		}
		if(a==0){
			min=num;
			max=num;
		}
		else{
			if (num>max){
				max=num;
			}
			if (num<min){
				min=num;
				
			}
		}
		
			
}
	printf( "\n   el min es: %d\n",min);
	printf( "\n   el max es: %d\n",max);
}

