#include "NeckServo.hpp"
#include "JawServo.hpp"

NeckServo neck = NeckServo();

void setup(){
  Serial.begin(9600);
}

void loop(){
 neck.handleNeckServo(); 
 }
