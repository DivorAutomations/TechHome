# Tech Home
## Buzzer Module

<p align="center">
<image src="buzzer.png">
</p>

### Pin Configuration

| MARKING | DESCRIPTION | PINS 
| -       | :-          | :-: |
| SIG     | Signal       | 25 
| +5V     | VOLTAGE     | 5V 
| GND     | GROUND      | GND 

---
### Software configuration
Library used: 
[ESP32Tone]()

---
### Code explanation 
```C++
#include <ESP32Tone.h>

void setup() {
pinMode(25,OUTPUT); //Buzzer Pin 25 as Output

//parameters: pin, frequency, delay, channel
 tone(buzzer,900,250,0);
 tone(buzzer,0,250,0);
}

void loop(){
    
}
```
