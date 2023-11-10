#include  <Servo.h> //incluyo la libreria del servo
Servo servo1; 
int PULSOMIN = 1000;     //defino los pulsos
int PULSOMAX = 2000;
int SENSOR = A0;
int VALOR1;
int PINSERVO1 = 8;
void setup() {
  servo1.attach(PINSERVO1, PULSOMIN, PULSOMAX);

}

void loop() {
  VALOR1 = analogRead(SENSOR);  //valor es igual a lo que lea el sensor 
  if (VALOR1 <= 50){       //si valor es menor a 50
   servo1.write(180);     //el servo girara a 180 grados
   delay(500);
  }
  else {
    servo1.write(0);    //si no es asi el servo gira a 0 grados
    delay(500);
     }
 }
