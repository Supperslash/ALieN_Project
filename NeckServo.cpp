#include "NeckServo.hpp"

NeckServo::NeckServo(){}

void NeckServo::setup(){
  joystickXPin = A0;
  joystickYPin = A1;  
  servoXPin = 10;
  servoYPin = 9; 
  
  initializePins();

  setupVariables();
}

void NeckServo::initializePins(){
  pinMode(joystickXPin, INPUT);
  pinMode(joystickYPin, INPUT);

  neckServoX.attach(servoXPin);
  neckServoY.attach(servoYPin);
}

void NeckServo::handleNeckServo(){
 if(lockState == false){
    neckXValue = analogRead(joystickXPin);
    neckYValue = analogRead(joystickYPin);
  
    neckXValue = map(neckXValue, 0, 1023, 0, 180);
    neckYValue = map(neckYValue, 0, 1023, 0, 180);
  }

  neckServoX.attach(servoXPin);
  neckServoY.attach(servoYPin);
 
  neckServoX.write(neckXValue);
  neckServoY.write(neckYValue);

  Serial.print(neckXValue);
  Serial.print("   ;   ");
  Serial.println(neckYValue);
}

void NeckServo::setupVariables(){
  lockState = false;
}

void NeckServo::lock(){
  lockState = !lockState;
}
