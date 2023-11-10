#include <LiquidCrystal_I2C.h>
#include <LCD.h>
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7);
int a;
int b;
int c;
int inutil;
float x1;
float x2;
float disc;
void setup() {
  Serial.begin(9600);
  lcd.setBacklightPin(3,POSITIVE);  // puerto P3 de PCF8574 como positivo
  lcd.setBacklight(HIGH);   // habilita iluminacion posterior de LCD
  lcd.begin(16, 2);     // 16 columnas por 2 lineas para LCD 1602A
  lcd.clear();
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Valor de a: ");
while (Serial.available() == 0) {

  }  
	a=Serial.parseFloat();
  Serial.println(a);
  lcd.clear();
  lcd.setCursor(0,0);
	lcd.print("Valor de b: ");
  while (Serial.available() == 0) {  //funciona como espera a que se ingrese el valor

  }  
  delay(3500);
  b=Serial.parseFloat();       // funciona para leer los valores numericos del puerto serie
  Serial.println(b);
  lcd.clear();
  lcd.setCursor(0,0);
	lcd.print("Valor de C: ");
   while (Serial.available() == 0) {

  }  
  delay(3500);
  c=Serial.parseFloat(); 
  Serial.println(c);
  lcd.clear();
  
	disc=b*b-4*a*c;
	
	if (disc>=0){
		x1=(-b+sqrt(disc))/(2*a);
		x2=(-b-sqrt(disc))/(2*a);
    lcd.setCursor(0,0);    
		lcd.print ("x1 = ");
    lcd.print (x1);
		lcd.setCursor(0,1);    
		lcd.print ("x2 = ");
    lcd.print (x2); 
    delay(100000);
	}
	else {
    lcd.setCursor(0,0);
		lcd.print("No hay raices");
    Serial.println(a);  
Serial.println(b);
Serial.println(c);
    delay(100000);
	}

}
