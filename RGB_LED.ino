int red_light_pin= 5;
int green_light_pin = 6;
int blue_light_pin = 3;

unsigned int red,green,blue;

void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop() {
 

  RGB_color(255-red, 255-green, 255-blue); // Red
  delay(1000);

}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
