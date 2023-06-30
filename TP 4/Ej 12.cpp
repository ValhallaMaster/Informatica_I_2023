#include <stdio.h>
#include <math.h>
#include <string.h>
char palabra [20];
char encriptado [20];
int k;
int t;
int main () {
	printf("Ingrese una palabra \n"); 
	scanf("%s", palabra);
	t=strlen(palabra);
		for(k=0; k<=t; k++){
		encriptado[k]=palabra[k]+5;
			}
		
		for(k=0; k<=t; k++){
			printf("%c", encriptado[k]);
}
}
