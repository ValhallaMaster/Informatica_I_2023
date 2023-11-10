#include <LiquidCrystal_I2C.h>
#include <LCD.h>
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7);
int contador=0;
int puls1=2;
int puls2=3;
float SENSOR;    
float TEMPERATURA; 
void setup() {
  // put your setup code here, to run once:
  lcd.setBacklightPin(3,POSITIVE);  // puerto P3 de PCF8574 como positivo
    lcd.setBacklight(HIGH);   // habilita iluminacion posterior de LCD
    lcd.begin(16, 2);     // 16 columnas por 2 lineas para LCD 1602A
    lcd.clear();
    
}

void loop() {
 SENSOR = analogRead(A0);
 TEMPERATURA = (SENSOR * 5 * 100 / 1024);
 lcd.setCursor(3,0);
    lcd.print("TEMPERATURA");
    lcd.setCursor(6,1);
    lcd.print(TEMPERATURA);

}
