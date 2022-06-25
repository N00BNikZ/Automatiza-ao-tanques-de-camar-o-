
void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  
  

  }

void loop() {
  int bruto = analogRead(A0);
  float voltagem = float(bruto)/1023*5.0;
  Serial.println(voltagem);

  float ph= (7*voltagem)/2.5;
  Serial.print("Ph:");
  Serial.println(ph); 
  delay(10);
}
