void setup() {
  pinMode(16,INPUT); //configure the pin as an input
  Serial.begin(115200); //initialize communication
}

void loop(){
  bool buttonStatus = digitalRead(16); 
  Serial.println(buttonStatus);
}