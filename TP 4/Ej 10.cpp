#include <stdio.h>
#include <math.h>
#include <string.h>
char palabra [1500];
int i;
int k;
int t;

int main(){
		printf("Ingrese una palabra \n"); 
		scanf("%s", palabra);
		t=strlen(palabra);
	for(k=t; k>=0; k--){
		printf("%c", palabra[k]);
	}
}
