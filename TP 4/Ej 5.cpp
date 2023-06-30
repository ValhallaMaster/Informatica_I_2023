#include <stdio.h>
#include <math.h>
int numeros [10];
int i;
int j=1;
int aux;
int k;
int main(){
	for(i=0; i<10; i++){
		printf("Ingrese los numeros \n");
		scanf("%d", &numeros[i]);
	}
	for (j=1; j<10; j++){
		for(i=0; i<10 - j; i++){
			if(numeros[i] > numeros[i+1]){
				aux=numeros[i];
				numeros[i]=numeros[i+1];
				numeros[i+1]=aux;
			}
		}
	}
	for(i=0; i<10; i++){
		printf(" numeros[%d]= %d\n",i, numeros[i]);
	}
}
