#include <stdio.h>
#include <math.h>
#include <string.h>
int diastotal;
int contador(int d, int m, int a) {
	int meses[13]= {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i;
	int diasmes=0;
	if(a%4==0){
		if(a%100 !=0){
			meses[2]=29;
		}
	}
	
	for(i=0; i<m; i++){
		diasmes=diasmes+meses[i];
	}
	diastotal=diasmes+d;
	return diastotal;
}
int main(void) {
int d;
int m;
int a;
	printf("escriba dia: \n");
	scanf("%d", &d);
	printf("escriba mes: \n");
	scanf("%d", &m);
	printf("escriba año: \n");
	scanf("%d", &a);
	contador(d, m, a);
	printf("es el dia: %d \n", diastotal);
}
