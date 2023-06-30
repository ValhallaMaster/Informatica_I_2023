#include <stdio.h>
#include <math.h>
int notas [15];
int i,x;
int Frec_notas[11]= {0};
int main(){
	for(i=0; i<15; i++){
		printf("Ingrese las notas \n");
		scanf("%d", &notas[i]);
		x=notas[i];
		Frec_notas[x]= Frec_notas[x]+1;
			
	}
	printf("Notas       frecuencia \n");
	for(i=0; i<11; i++){
		printf("%d       %d\n", i, Frec_notas[i]);
	}
	return 0;
}


