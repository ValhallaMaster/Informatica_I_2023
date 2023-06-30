#include <stdio.h>
#include <math.h>
int alumno [10];
int i;
int main(){
	for(i=0; i<10; i++){
		printf("Ingrese las notas \n");
		scanf("%d", &alumno[i]);
	}
	for(i=0; i<10; i++){
		if(alumno[i]>=6){
			printf(" alumno[%d]" ,i);
			printf("aprobado \n");
		}
		else {
			printf(" alumno[%d]" ,i);
			printf("desaprobado \n");
		}
		
	}
	return 0;
}

