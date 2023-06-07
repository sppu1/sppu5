
#include <HCSR04.h>
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

HCSR04 hc(A5,A4);//initialisation class HCSR04 (trig pin , echo pin)

int pos = 0;    // variable to store the servo position

void setup()
{
  Serial.begin(9600);
  Serial.println("Door opener"); 
  myservo.attach(6);  // attaches the servo on pin 9 to the servo object
  myservo.write(0);
  delay(500);
}


void loop()
{  
  float distance;
  distance = hc.dist();
  
  Serial.println(distance);

  if (distance <= 10)
  {
    myservo.write(10);
    Serial.println("OPEN");
    delay(1000);
  }
  else
  {
    Serial.println("CLOSING");
    myservo.write(180);
    delay(1000);
  }
}
