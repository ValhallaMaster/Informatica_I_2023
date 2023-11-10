#include <Wire.h> // libreria de comunicacion por I2C
#include <LCD.h> // libreria para funciones de LCD
#include <LiquidCrystal_I2C.h> // libreria para LCD por I2C
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7); // DIR, E, RW, RS, D4, D5, D6, D7
int TIEMPO;
int TRIG = 10;
int ECO = 9;
int LED = 13;
int DURACION0;
int DURACION1;
int DURACION2;
int DISTANCIA0;
int DISTANCIA1;
int DISTANCIA2;
void setup() {
  // put your setup code here, to run once:

      lcd.setBacklightPin(3,POSITIVE);  // puerto P3 de PCF8574 como positivo
    lcd.setBacklight(HIGH);   // habilita iluminacion posterior de LCD
    lcd.begin(16, 2);     // 16 columnas por 2 lineas para LCD 1602A
    lcd.clear();  
pinMode(TRIG, OUTPUT);
pinMode(ECO, INPUT);
pinMode(LED, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACION0 = pulseIn(ECO, HIGH); 
  DISTANCIA0 = DURACION0 / 58.2;
  lcd.setCursor(0, 0);
 lcd.print("DISTANCIA ");
  lcd.print(DISTANCIA0);
  

  }
