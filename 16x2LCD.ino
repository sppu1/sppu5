#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,2,3,4,5);


void setup() 

{
  lcd.begin(16, 2);
  lcd.print("IOT LAB PROJECT");
}

void loop() 

{

}
