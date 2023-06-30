#include<iostream>
#include <math.h>
#define tam 20
int a[tam];
int i;
int l;
int j;
int primo;
int k;
int n=1; 
int main(){
	for(k=1; k<=tam; k++){
		
	 do{
		n++;
		primo=0;
		for(j=2; j<=n-1; j++){
			if(n%j==0){
				primo=1;
				break;
			}
		}
	}
	 while(primo==1);
	 a[k-1]=n;
	}
	
	printf("numeros primos \n");
	for(l=0; l<tam; l++){
		printf(" numeros primos %d= %d\n",l+1, a[l]);
	}
	return 0;
}
