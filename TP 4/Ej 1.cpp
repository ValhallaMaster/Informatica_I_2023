#include <stdio.h>
#include <math.h>
/// Cargar los elementos del arreglo desde teclado

int main(){
	float valor[5];
	float suma=0, suma_error2=0;
	float promedio;
	float ecm;
	int t;
	//Ingreso de datos a un arreglo
	for (t=0;t<5;t++){
		printf("Ingrese el valor %d\n",t);
		scanf("%f",&valor[t]);
		suma=suma+valor[t];
	}
	promedio=suma/5;
	for (t=0;t<5;t++){
		suma_error2=suma_error2+ pow((promedio-valor[t]),2);
		
		
	}
	ecm=sqrt(suma_error2/5);
	printf("el valor promedio es %.2f\n", promedio);
	printf("el error cuadratico es %.2f\n", ecm);
	return(0);
}

