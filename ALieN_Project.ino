#include "NeckServo.hpp"
#include "JawServo.hpp"
#include "Button.hpp"

NeckServo neck = NeckServo();
Button button = Button();


void setup(){
  Serial.begin(9600);

  button.setup();
  neck.setup();
}

void loop(){
 neck.handleNeckServo();

 int number = button.getPressCount();

  switch(number){
    case 1:
      break;
    case 2:
      neck.lock();
      break;
  }
 }
