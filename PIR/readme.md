# Tech Home
## DHT11 Module

<p align="center">
<image src="pir.png">
</p>

### Pin Configuration

| MARKING | DESCRIPTION | PINS 
| -       | :-          | :-: |
| SIG     | SIGNAL        | D14
| +5V     | VOLTAGE     | 5V 
| GND     | GROUND      | GND 



---
### Code explanation 
```C++
void setup(){
    pinMode(16,INPUT); //configure the pin as an input
}

void loop(){ 
    bool pirStatus = digitalRead(16);/*This will return 0 or 1 depending on whether the sensor was triggered or not*/
}
```
