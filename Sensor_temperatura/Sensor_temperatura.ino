  float Analog = 0; 
  float Result = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Analog = analogRead(0);

  Result = 5*Analog/1023;

  Serial.print("Valor Lido: ");
  Serial.print(Analog);
  Serial.print(" /Valor Corrigido: ");
  Serial.print(Result);
  Serial.print("\r\n");

  delay(2000);  
  
}
