#include "NeckServo.hpp"
#include "JawServo.hpp"

NeckServo neck = NeckServo();

void setup(){
  Serial.begin(9600);
  
  neck.setup();
}

void loop(){
 neck.handleNeckServo();

 delay(500);
 }
