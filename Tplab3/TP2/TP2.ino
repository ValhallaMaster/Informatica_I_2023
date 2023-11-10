char salidas[]={'0', '0', '0', '0'};
float temperaturas[4];
char *n;
float *k;
int i;
int CONTADOR=0;
int SENSOR1, SENSOR2, SENSOR3, SENSOR4;       
float TEMPERATURA1, TEMPERATURA2, TEMPERATURA3, TEMPERATURA4;
void LUCES() {
  n=salidas;
 if ((digitalRead(2) == HIGH)&&(*(n)=='0')){
*(n)='1';
delay(150);

}
if ((digitalRead(3) == HIGH)&&(*(n+1)=='0')){
*(n+1)='1';
delay(150);
}
if ((digitalRead(4) == HIGH)&&(*(n+2)=='0')){
*(n+2)='1';
delay(150);
}
if ((digitalRead(5) == HIGH)&&(*(n+3)=='0')){
*(n+3)='1';
delay(150);
}
if ((digitalRead(2) == HIGH)&&(*(n)=='1')){
*(n)='0'; 
delay(150);
}
if ((digitalRead(3) == HIGH)&&(*(n+1)=='1')){
*(n+1)='0';
delay(150);
}
if ((digitalRead(4) == HIGH)&&(*(n+2)=='1')){
*(n+2)='0';  
delay(150);
}
if ((digitalRead(5) == HIGH)&&(*(n+3)=='1')){
*(n+3)='0';  
delay(150);
}
if(*(n)=='1'){
   digitalWrite(6, HIGH);
}
if(*(n)=='0'){
   digitalWrite(6, LOW);
}
if(*(n+1)=='0'){
   digitalWrite(7, LOW);
}
if(*(n+1)=='1'){
   digitalWrite(7, HIGH);
}
if(*(n+2)=='0'){
   digitalWrite(8, LOW);
}
if(*(n+2)=='1'){
   digitalWrite(8, HIGH);
}
if(*(n+3)=='1'){
   digitalWrite(9, HIGH);
}
if(*(n+3)=='0'){
   digitalWrite(9, LOW);

}
  }
void TEMPERATURA() {
   k=temperaturas;
  SENSOR1 = analogRead(A0);        
TEMPERATURA1 = (SENSOR1 * 5 * 100 / 1024);
SENSOR2 = analogRead(A1);        
TEMPERATURA2 = (SENSOR2 * 5 * 100 / 1024); 
SENSOR3 = analogRead(A2);        
TEMPERATURA3 = (SENSOR3 * 5 * 100 / 1024);
SENSOR4 = analogRead(A3);        
TEMPERATURA4 = (SENSOR4 * 5 * 100 / 1024); 
*(k)=TEMPERATURA1;
*(k+1)=TEMPERATURA2;
*(k+2)=TEMPERATURA3;
*(k+3)=TEMPERATURA4;
	Serial.print("TEMPERATURA 1 ");
  Serial.println(*(k));
  Serial.print("TEMPERATURA 2 ");
  Serial.println(*(k+1));
  Serial.print("TEMPERATURA 3 ");
  Serial.println(*(k+2));
  Serial.print("TEMPERATURA 4 ");
  Serial.println(*(k+3));
  Serial.println("");  
  
	}
void setup() {
pinMode(2, INPUT);   
pinMode(3,INPUT);
pinMode(4,INPUT);   
pinMode(5,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
  }
void loop() {  
if(CONTADOR>=1000){
   TEMPERATURA(); 
   CONTADOR=0;
   }
   LUCES();   
   delay(10); 
   CONTADOR++; 
     
   
   }

