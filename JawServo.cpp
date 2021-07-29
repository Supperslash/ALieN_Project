#include "JawServo.hpp"

JawServo::JawServo(){}

void JawServo::setup(){
  audioInputPin = A3;
  servoPin = 12;

  initializePins();
}

void JawServo::initializePins(){
  pinMode(audioInputPin, INPUT);

  jawServo.attach(servoPin);
}

void JawServo::handleJawServo(){
  jawValue = analogRead(audioInputPin);

  jawValue = map(jawValue, 0, 128, 0, 180);

  jawServo.attach(servoPin);

  jawServo.write(jawValue);

  Serial.print("JAW:  ");
  Serial.println(jawValue);
}
