# Tech Home

## Button Module

<p align="center">
<image src="push button.png">
</p>

### Pin Configuration

| MARKING | DESCRIPTION | PINS 
| -       | :-          | :-: |
| SIG     | SIGNAL      | D16 
| +5V     | VOLTAGE     | 5V 
| GND     | GROUND      | GND 

---
### Code explanation 
```C++
void setup() {
  pinMode(D16,INPUT); //configure the pin as an input
  Serial.begin(9600); //Initialze communication
}

void loop(){
  bool buttonStatus = digitalRead(D16); /*This will return
  0 or 1 depending on whether the button is pressed or
  not and saves in variable*/
  Serial.println(buttonStatus); //Send the button state to computer
}
```
