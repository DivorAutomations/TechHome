void setup(){ 
    pinMode(D18,OUTPUT); //configure both pin as an outputs
    pinMode(D19,OUTPUT);
}

void loop(){
    digitalWrite(D18,HIGH); 
    digitalWrite(D19, LOW); //Fan will rotate in one direction

    delay(5000); //Wait for 5 seconds

    digitalWrite(D18, LOW); //Rotate in the other directon 
    digitalWrite(D19, LOW);
}