#include <stdio.h>
#include <math.h>
#include <string.h>
float unir(char a[],char b[],char ab[], int *t) {	
 int k;
 int j;
 int t1=strlen(a);
 int t2=strlen(b);
 for(k=0; k<=t1; k++){
	 ab[k]=a[k];
 }
 for(j=0; j<=t2; j++){
	 ab[j+t1]=b[j];
}
 *t=strlen(ab);
}
int main(void){
	char palabra1[1500];
	char palabra2[1500];
	char palabra_unida[1500];
	int i;
	int t;
	printf("Ingrese una palabra \n"); 
	scanf("%s", palabra1);
	printf("Ingrese otra palabra \n"); 
	scanf("%s", palabra2);
	unir(palabra1,palabra2,palabra_unida,&t);
 	printf("La palabra unida es: ");
	for(i=0; i<=t; i++){
		printf("%c", palabra_unida[i]);
}
}

