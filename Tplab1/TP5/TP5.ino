#include <LiquidCrystal_I2C.h>
#include <LCD.h>
LiquidCrystal_I2C lcd (0x27, 2, 1, 0, 4, 5, 6, 7);
int contador=0;
int puls1=2;
int puls2=3;
void setup() {
  // put your setup code here, to run once:
  lcd.setBacklightPin(3,POSITIVE);  // puerto P3 de PCF8574 como positivo
    lcd.setBacklight(HIGH);   // habilita iluminacion posterior de LCD
    lcd.begin(16, 2);     // 16 columnas por 2 lineas para LCD 1602A
    lcd.clear();
    
}
void loop() {
   if (contador == -1){  
   contador=99;
   }
   
     if (contador == 100){
   contador=0;
   }
if (digitalRead(puls1) == HIGH){  
   contador++;
  delay(300);
}

  if (digitalRead(puls2) == HIGH){  
   contador--;   
    delay(300);
}
    lcd.setCursor(4,0);
    lcd.print("Contador");
    lcd.setCursor(7,1);
    lcd.print("   ");
    lcd.setCursor(7,1);
    lcd.print(contador);  

  


}
