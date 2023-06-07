#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,2,3,4,5); // Creates an LCD object. Parameters: (RegisterSelect, enable, d4, d5, d6, d7)


void setup() 

{
  lcd.begin(16, 2);
  lcd.print("IOT LAB PROJECT");
}

void loop() 

{

}
