#include <stdio.h>
#include <math.h>
int main(void) {
	long int a=1;
	long int b=1;
	long int n;
	long int c;
	long int resto;
	printf( "\n   Introduzca la posicion a encontrar: " );
	scanf( "%d", &n );
	if (n>0){
	for(c=0; c<n;c++ ){
	   resto=c%2;
	   if (resto==0){
	a=a+b;
	}
	   else {
		   b=b+a;
	   }
	
	
	}
	if (a>b){
	printf( "\n   El numero enesimo es: %d\n",a);
	}
	else{
		printf( "\n   El numero enesimo es: %d\n",b);
	}
	
	}
	else{
		printf( "\n   el numero no existe\n");
	}
	return 0;
}
	


