#include <LiquidCrystal_I2C.h>
#include <LCD.h>
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7);
void setup() {
  // put your setup code here, to run once:
  lcd.setBacklightPin(3,POSITIVE);  // puerto P3 de PCF8574 como positivo
    lcd.setBacklight(HIGH);   // habilita iluminacion posterior de LCD
    lcd.begin(16, 2);     // 16 columnas por 2 lineas para LCD 1602A
    lcd.clear();
}

void loop() {
    lcd.setCursor(0,0);
    lcd.print("Ingenieria");
    lcd.setCursor(0,1);
    lcd.print("Electronica");
}
