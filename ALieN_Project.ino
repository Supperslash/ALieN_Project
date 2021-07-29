#include "NeckServo.hpp"
#include "JawServo.hpp"
#include <Servo.h>
#include <Arduino.h>

NeckServo neck = NeckServo();

void setup(){
  Serial.begin(9600);
}

void loop(){
 neck.handleNeckServo();
 delay(200);
 }
