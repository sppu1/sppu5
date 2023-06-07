#include <Keypad.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(6,7,2,3,4,5);   //lcd object

const char keymap[3][3] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
 };

const char rowPins[4] = {8,9,10};
const char colPins[4] = {11,12,13};

Keypad myKeypad = Keypad(makeKeymap(keymap),rowPins, colPins, 3, 3);    //keypad object
  
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("Keypad Program");
}

void loop() {
  // put your main code here, to run repeatedly:
  //lcd.setCursor(0,0);
  //lcd.print("Keypad Program");
  char keyPressed = myKeypad.getKey();
  if(keyPressed)
  {
    //lcd.clear();
    lcd.setCursor(0,1);
    lcd.write(keyPressed);
  }
}
