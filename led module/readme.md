# Tech Home

## LED Module

<p align="center">
<image src="led_module.png">
</p>

### Pin Configuration

| MARKING | DESCRIPTION | PINS 
| -       | :-          | :-: |
| SIG     | SIGNAL      | D12 
| +5V     | VOLTAGE     | 5V 
| GND     | GROUND      | GND 

---
### Code explanation 
```C++
void setup() {
  pinMode(D12,OUTPUT); //configure the pin as an output
}

void loop(){
  digitalWrite(D12,HIGH); //Turn the LED ON
  digitalWrite(D12, LOW); //Turn the LED OFF


  analogWrite(D12, Number*); //Change brightness  of LED
}
```

>[!TIP]
>If you want to control brightness, analogWrite function has to be imported