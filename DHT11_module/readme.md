# Tech Home
## DHT11 Module

<p align="center">
<image src="dht11.png">
</p>

### Pin Configuration

| MARKING | DESCRIPTION | PINS 
| -       | :-          | :-: |
| SIG     | SIGNAL        | D17
| +5V     | VOLTAGE     | 5V 
| GND     | GROUND      | GND 

---
### Software configuration
Library used: 
[Adafruit DHT-sensor-library](https://github.com/adafruit/DHT-sensor-library)
`This library depends on Adafruit Sensor Library. If you install it using Library manager, Adafruit sensor libar`

---
### Code explanation 
```C++
#include <DHT.h>
DHT dhtSensor(17, DHT11); //make an instance of the library object (connected pin, dht sensor type)

void setup(){
dh﻿tSensor.begin(); //initialize the sensor. do this is setup
}

void loop(){
dh﻿tSensor.readHumidity(); //Return relative humidity

dh﻿tSensor.readTemperature(); /*Return 
temperature in Celsius*/
}
```
