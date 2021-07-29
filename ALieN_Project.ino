#include "NeckServo.hpp"
#include "JawServo.hpp"
#include "Button.hpp"

NeckServo neck = NeckServo();
Button button = Button();
JawServo jaw = JawServo();

void setup(){
  Serial.begin(9600);

  button.setup();
  neck.setup();
  jaw.setup();

}

void loop(){
  neck.handleNeckServo();

  jaw.handleJawServo();
 
  int number = button.getPressCount();

  switch(number){
    case 1:
      break;
    case 2:
      neck.lock();
      break;
  }
 }
