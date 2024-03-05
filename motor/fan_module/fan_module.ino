void setup(){ 
    pinMode(18,OUTPUT); //configure both pin as an outputs
    pinMode(19,OUTPUT);
}

void loop(){
    digitalWrite(18,HIGH); 
    digitalWrite(19, LOW); //Fan will rotate in one direction

    // delay(5000); //Wait for 5 seconds

    // digitalWrite(18, LOW); //Rotate in the other directon 
    // digitalWrite(19, LOW);

    // delay(5000); //Wait for 5 seconds
}