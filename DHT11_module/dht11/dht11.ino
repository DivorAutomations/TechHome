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