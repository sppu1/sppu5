void setup() {
  // set the mode of the pins a s GPIO and direction as OUTPUT
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //Make LED ON
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(3, HIGH);
  delay(100);
  digitalWrite(4, HIGH);
  delay(100);
  digitalWrite(5, HIGH);
  delay(200);
  //Make LED OFF
  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(3, LOW);
  delay(100);
  digitalWrite(4, LOW);
  delay(100);
  digitalWrite(5, LOW);
  delay(200);
}
