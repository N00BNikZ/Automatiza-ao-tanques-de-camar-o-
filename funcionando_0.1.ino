int entrada_A0;
float tensao;
 
void setup()  {
  Serial.begin(9600);
}
 
void loop() {
  entrada_A0 = analogRead(A0);
  float tensao = -1.0*(1.0-(entrada_A0*(5.0/1024.0)));
  Serial.print("tensao: ");
  Serial.print(tensao);

  float Phvalor = (7 +((2.5-tensao)/0.167));
  Serial.print(" Ph: ");
  Serial.println(Phvalor); 

  
  delay(500);
}
