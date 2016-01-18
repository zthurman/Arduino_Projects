// loop

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinkled,HIGH);
  Serial.println("pinkled is high");
  delay(1000);
  digitalWrite(pinkled,LOW);
  Serial.println("pinkled is low");
  delay(1000);
  
  
  digitalWrite(yellowled,HIGH);
  Serial.println("yellowled is high");
  delay(1000);
  digitalWrite(yellowled,LOW);
  Serial.println("yellowled is low");
  delay(1000);
}
