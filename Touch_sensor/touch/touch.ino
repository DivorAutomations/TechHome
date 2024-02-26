void setup() {
  pinMode(27,INPUT); //configure the pin as an input
  Serial.begin(115200); //initialize communication
}

void loop(){
  bool buttonStatus = digitalRead(27); 
  Serial.println(buttonStatus);
}