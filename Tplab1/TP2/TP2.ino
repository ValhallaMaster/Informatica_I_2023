int a=4;
int b=5;
int c=6;
int d=7;
int e=8;
int f=9;
int g=10;
int T1=11;
int T2=12;
int puls1=2;
int puls2=3;
int contador=0;
int SENSOR;    
float TEMPERATURA; 

void CERO() {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH);
   digitalWrite(d, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, HIGH);
   digitalWrite(g, LOW);
  
          
}
void UNO() {
   digitalWrite(a, LOW);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH); 
   digitalWrite(d, LOW);
   digitalWrite(e, LOW);
   digitalWrite(f, LOW);
   digitalWrite(g, LOW); 
}
void DOS() {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, LOW); 
   digitalWrite(d, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, LOW);
   digitalWrite(g, HIGH); 
}
void TRES() {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH); 
   digitalWrite(d, HIGH);
   digitalWrite(e, LOW);
   digitalWrite(f, LOW);
   digitalWrite(g, HIGH); 
}
void CUATRO() {
   digitalWrite(a, LOW);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH); 
   digitalWrite(d, LOW);
   digitalWrite(e, LOW);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH); 
}
void CINCO() {
   digitalWrite(a, HIGH);
   digitalWrite(b, LOW);
   digitalWrite(c, HIGH); 
   digitalWrite(d, HIGH);
   digitalWrite(e, LOW);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH); 
}
void SEIS() {
   digitalWrite(a, HIGH);
   digitalWrite(b, LOW);
   digitalWrite(c, HIGH); 
   digitalWrite(d, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH); 
}
void SIETE() {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH); 
   digitalWrite(d, LOW);
   digitalWrite(e, LOW);
   digitalWrite(f, LOW);
   digitalWrite(g, LOW); 
}
void OCHO() {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH); 
   digitalWrite(d, HIGH);
   digitalWrite(e, HIGH);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH); 
}
void NUEVE() {
   digitalWrite(a, HIGH);
   digitalWrite(b, HIGH);
   digitalWrite(c, HIGH); 
   digitalWrite(d, LOW);
   digitalWrite(e, LOW);
   digitalWrite(f, HIGH);
   digitalWrite(g, HIGH); 
}
void mostrar(int n) {

   int decena=n/10;
   int unidad=n%10;  
   digitalWrite(12, HIGH);
   digitalWrite(11, LOW);
   switch(unidad){
   case 0: CERO(); break;
   case 1: UNO(); break;
   case 2: DOS(); break;
   case 3: TRES(); break;
   case 4: CUATRO(); break;
   case 5: CINCO(); break;
   case 6: SEIS(); break;
   case 7: SIETE(); break;
   case 8: OCHO(); break;
   case 9: NUEVE(); break;
}
delay(10);   
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   switch(decena){
   case 0: CERO(); break;
   case 1: UNO(); break;
   case 2: DOS(); break;
   case 3: TRES(); break;
   case 4: CUATRO(); break;
   case 5: CINCO(); break;
   case 6: SEIS(); break;
   case 7: SIETE(); break;
   case 8: OCHO(); break;
   case 9: NUEVE(); break;
   }
   delay(10);
   }


void setup(){ 
pinMode(puls1, INPUT);
pinMode(puls2, INPUT);
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
pinMode(T1, OUTPUT);
pinMode(T2, OUTPUT);
Serial.begin(9600); 
}

void loop(){
  SENSOR = analogRead(A0);        
  TEMPERATURA = (SENSOR * 5 * 100 / 1024); 
  mostrar(TEMPERATURA);
 
}