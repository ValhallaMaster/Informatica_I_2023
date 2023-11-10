#include <LiquidCrystal_I2C.h>
#include <LCD.h>
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7);
 int segundo = 0;
 int decima=0; 
 int minuto=0;
 int hora=0;
 int puls1=3;
 int puls2=2;
int estado=0;
 
void setup() {
  lcd.setBacklightPin(3,POSITIVE);  // puerto P3 de PCF8574 como positivo
    lcd.setBacklight(HIGH);   // habilita iluminacion posterior de LCD
    lcd.begin(16, 2);     // 16 columnas por 2 lineas para LCD 1602A
    lcd.clear();
  pinMode(puls1, INPUT);
  pinMode(puls2, INPUT);  
Serial.begin(9600);
}

void loop() {
  if (digitalRead(puls1) == HIGH){ 
      estado++;    
        Serial.println("funciona1");
      delay(100);
  } 
  if (digitalRead(puls2) == HIGH){ 
    decima=0; 
    minuto=0;
    hora=0;
    segundo=0;
    estado=0;    
    Serial.println("funciona2");
    delay(100);       
  } 
  if (estado==1){              
  decima++;
  if(decima==10){
   segundo++;
  decima=0;
}
  if(segundo==60){
   minuto++;
  segundo=0;  
 }
  if(minuto==60){
   hora++;
  minuto=0;  
 }
  delay(95);
  }
 lcd.setCursor(0,0);
lcd.print(hora);
lcd.print(":");
lcd.print(minuto);
lcd.print(":");
lcd.print(segundo);
lcd.print(":");
lcd.println(decima);
//Serial.println(estado);

}