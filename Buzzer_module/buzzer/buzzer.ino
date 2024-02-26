#include <ESP32Tone.h>

void setup() {
pinMode(25,OUTPUT); //Buzzer Pin 25 as Output

//parameters: pin, frequency, delay, channel
 tone(buzzer,900,250,0);
 tone(buzzer,0,250,0);
}
