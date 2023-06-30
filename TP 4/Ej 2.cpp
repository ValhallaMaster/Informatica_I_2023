#include <stdio.h>
#include <math.h>

int main(){
	int t;
	float suma_impares=0;
	float suma_pares=0;
	int muestra[10];
	float promedio_impares;
	float promedio_pares;
	
	for(t=0;t<10;t++){
		printf("ingrese el valor para muestra[%d]\n",t);
		scanf("%d",&muestra[t]);
	}	
	for(t=0;t<10;t++){
		if (t%2 == 0){
		suma_pares=suma_pares+muestra[t];
	}
	  else{
		suma_impares=suma_impares+muestra[t];
		}
	}
		promedio_impares=suma_impares/5;
		promedio_pares=suma_pares/5;
		printf ("la suma par es %f\n",suma_pares);
		printf ("la suma impar es %f\n",suma_impares);
		printf ("el promedio par es %f\n",promedio_pares);
		printf ("el promedio impar es %f\n",promedio_impares);
		return 0;
	}

	
	
