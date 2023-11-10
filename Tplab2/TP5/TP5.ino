#define PI 3.14159265
#include <LiquidCrystal_I2C.h>
#include <LCD.h>
float X,Y;
float MODULO,ANGULO;
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7);
int PoRec (float mod,float ang, float *x, float *y){
     float conv1=ang*PI/180;
	*x= mod*cos (conv1);
    *y= mod*sin (conv1);
}
void setup() {
   lcd.setBacklightPin(3,POSITIVE);  // puerto P3 de PCF8574 como positivo
    lcd.setBacklight(HIGH);   // habilita iluminacion posterior de LCD
    lcd.begin(16, 2);     // 16 columnas por 2 lineas para LCD 1602A
    lcd.clear();
    Serial.begin(9600);
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Ingrese Modulo");
  while (Serial.available() == 0) {

  }  
	MODULO=Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0,0);
	lcd.print("Ingrese Angulo");
    while (Serial.available() == 0) {  //funciona como espera a que se ingrese el valor

  }  
  delay(3500);  
  ANGULO=Serial.parseFloat();   
  PoRec(MODULO,ANGULO,&X,&Y);
  lcd.clear();
  lcd.setCursor(0,0);
	lcd.print("X=");
  lcd.setCursor(3,0);
  lcd.print(X);
  lcd.setCursor(0,1);
  lcd.print("Y=");
  lcd.setCursor(3,1);
  lcd.print(Y);
  delay(100000);
}
