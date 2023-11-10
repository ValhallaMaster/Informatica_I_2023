int LED = 3;
int BRILLO;
int POT = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  //las entradas analogicas no requieren incializacion
}

void loop() {
  // put your main code here, to run repeatedly:
  BRILLO = analogRead(POT) / 4; //analogread tiene valor de 1023 por eso lo dividimos por 4
  analogWrite(LED, BRILLO); // analogwrite tiene un valor de 255
}
