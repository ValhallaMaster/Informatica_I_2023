char salidas[]={'0', '0', '0', '0'};
char *n;

 
void setup() {
pinMode(2, INPUT);   
pinMode(3,INPUT);
pinMode(4,INPUT);   
pinMode(5,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

  }
void loop() {
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
