void setup() {
  pinMode(12,OUTPUT); //configure the pin as an output
}

void loop(){
  digitalWrite(12,HIGH); //Turn the LED ON
  delay(500);
  digitalWrite(12, LOW); //Turn the LED OFF
  delay(500);
}
