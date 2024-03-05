#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); //make an instance of the library object (I2C Adress, no. of columns, no. of rows)

void setup(){
  lcd.init(); //initialize the LCD 
  lcd.backlight(); //Turn on backlight

  lcd.setCursor(3,0); /*Set cursor on 4th column, 
  1st row*/
  lcd.print("Hello World");
}

void loop(){
    
}