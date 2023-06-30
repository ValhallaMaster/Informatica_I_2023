#include <stdio.h>
#include <math.h>
int min;
int a;
int numero_min(int num) {
	
	if(a==0){
		min=num;
	}
	else if (num<min){
		min=num;
	}
}

int main(){
	int num;
	for(a=0; a<3;a++ ){
		printf("ingrese el numero: \n");
		scanf( "%d", &num );
		numero_min(num);
	}
	printf("el numero minimo es: %d", min);
}
