#include "NeckServo.hpp"

NeckServo::NeckServo(){
  Serial.println("POINT 2 HAPPENED");
}

void NeckServo::setup(){
  joystickXPin = A0;
  joystickYPin = A1;
  buttonPin = 8;  
  servoXPin = 10;
  servoYPin = 9; 
  
  initializePins();

  setupVariables();

  Serial.println("POINT 3 HAPPENED");
}

void NeckServo::initializePins(){
  pinMode(joystickXPin, INPUT);
  pinMode(joystickYPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  neckServoX.attach(servoXPin);
  neckServoY.attach(servoYPin);

  Serial.println("POINT 4 HAPPENED");
}

void NeckServo::handleNeckServo(){
  //buttonValue = digitalRead(buttonPin);
  
  //if(buttonValue == false){
  //  lockState = !lockState;
  //  delay(delayTime);
  //}

  //if(lockState == false){
    neckXValue = analogRead(joystickXPin);
    neckYValue = analogRead(joystickYPin);
  
    neckXValue = map(neckXValue, 0, 1023, 0, 180);
    neckYValue = map(neckYValue, 0, 1023, 0, 180);
  //}

  neckServoX.attach(servoXPin);
  neckServoY.attach(servoYPin);
 
  neckServoX.write(neckXValue);
  neckServoY.write(neckYValue);

  Serial.println("POINT 5 HAPPENED");
}

void NeckServo::setupVariables(){
  buttonValue = digitalRead(buttonPin);
  lockState = false;

  Serial.println("POINT 1 HAPPENED");
}
