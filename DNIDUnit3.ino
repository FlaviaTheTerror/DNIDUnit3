#include <Servo.h>
Servo myServo;
int buttonPin = 2;
int ledPin = 12;
int buttonState = 0;
int servoPin = 9;

void setup() 
{
  myServo.attach(servoPin);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  digitalWrite(ledPin, LOW);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    delay(2000);
    myServo.write(-180);
    digitalWrite(ledPin, LOW);
    myServo.write(180);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}
