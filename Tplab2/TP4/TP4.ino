#define PI 3.14159265
#include <LiquidCrystal_I2C.h>
#include <LCD.h>
float X,Y;
float MODULO,ANGULO;
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7);
int RecPo (float x,float y, float *mod, float *ang){
	*mod=sqrt(x*x+y*y);
	*ang=atan(y/x)*180/PI;
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
  lcd.print("Ingrese X");
  while (Serial.available() == 0) {

  }  
	X=Serial.parseFloat();
  lcd.clear();
  lcd.setCursor(0,0);
	lcd.print("Ingrese Y");
    while (Serial.available() == 0) {  //funciona como espera a que se ingrese el valor

  }  
  delay(3500);  
  Y=Serial.parseFloat(); 
  RecPo(X,Y,&MODULO,&ANGULO);
  lcd.setCursor(0,0);
	lcd.print( "Modulo =");
  lcd.setCursor(8,0);
  lcd.print(MODULO);
  lcd.setCursor(0,1);
  lcd.print( "Angulo =");
  lcd.setCursor(8,1);
  lcd.print(ANGULO);
  delay(100000);
}
