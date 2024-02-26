void setup(){
    pinMode(16,INPUT); //configure the pin as an input
    Serial.begin(115200);
}

void loop(){ 
    bool pirStatus = digitalRead(16); 
    Serial.println(pirStatus);
}