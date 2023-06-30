#include <stdio.h>
#include <math.h>
#include <string.h>
char palabra [20]={0};
char vocales [10]={'a' ,'e' ,'i' ,'o' ,'u', 'A', 'E', 'I', 'O','U'};
int contador=0;
int t=0;
int k=0;
int m=0;
int main(){
	printf("Ingrese una palabra \n"); 
	scanf("%s", palabra);
	t=strlen(palabra);
	for(m=0; m<=9; m++){
	  for(k=0; k<=t; k++){
		if(palabra[k] == vocales[m]) {
			contador=contador+1;
		}
	}
		}
	printf("cantidad de vocales = %d", contador);
}
