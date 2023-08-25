#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int RecPo (float x,float y, float *mod, float *ang){
	*mod=sqrt(x*x+y*y);
	*ang=atan(y/x)*180/PI;
	return 0;
}
int PoRec (float mod,float ang, float *x, float *y){
     float conv1=ang*PI/180;
	*x= mod*cos (conv1);
    *y= mod*sin (conv1);
return 0;
}
int main(void){
	float X,Y;
	float MODULO,ANGULO;
	char op;
	printf (" Elija pasar de rectangular a polar, o de polar a rectangular: \n"),
		scanf( "%c", &op );
	switch(op){
	case 'p':
		printf("Ingrese coordenada en x: \n");
		scanf ("%f",&X);
		printf("Ingrese coordenada en y: \n");
		scanf ("%f",&Y);
		RecPo(X,Y,&MODULO,&ANGULO);
		printf( "\n  La coordenada polar es: %lf ,%lf\n",MODULO,ANGULO);
		break;
	case 'r':
		printf("Ingrese valor de modulo: \n");
		scanf ("%f",&MODULO);
		printf("Ingrese valor del angulo: \n");
		scanf ("%f",&ANGULO);
		PoRec(MODULO,ANGULO,&X,&Y);
		printf( "\n  La coordenada rectangular es: %f ,%f\n",X,Y);
		break;
	}

	return 0;
}


