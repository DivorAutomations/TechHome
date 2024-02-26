# Tech Home
## Fan Module

### Pin Configuration

| MARKING | DESCRIPTION | PINS 
| -       | :-          | :-: |
| SIG     | Motor Terminal      | D18 
| SIG     | Motor Terminal      | D19
| +5V     | VOLTAGE     | 5V 
| GND     | GROUND      | GND 

---
### Code explanation 
```C++
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
```

>[!NOTE]
>motor rotating direction will depend on the way we supply voltage to the two pins. Set one HIGH and set the other LOW to turn 