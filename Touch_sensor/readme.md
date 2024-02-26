# Tech Home

## Button Module

<p align="center">
<image src="touch.png">
</p>

### Pin Configuration

| MARKING | DESCRIPTION | PINS 
| -       | :-          | :-: |
| SIG     | SIGNAL      | D27 
| +5V     | VOLTAGE     | 5V 
| GND     | GROUND      | GND 

---
### Code explanation 
```C++
void setup() {
  pinMode(27,INPUT); //configure the pin as an input
  Serial.begin(115200); //initialize communication
}

void loop(){
  bool buttonStatus = digitalRead(27); /*This will return
  0 or 1 depending on whether the button is pressed or
  not and saves in variable*/
  Serial.println(buttonStatus); //send the buttonStatus value to computer
}
```
