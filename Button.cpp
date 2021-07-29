#include "Button.hpp"

Button::Button(){}

void Button::setup(){
  buttonPin = 8;

  pinMode(buttonPin, INPUT_PULLUP); 
}

int Button::getPressCount(){
  int presses = 0;

  if(digitalRead(buttonPin) == false){
    delay(debounceDelayTime);

    presses = 1;
    presses += checkPress();
  }

  return presses;
}

int Button::checkPress(){
  long unsigned int mils = 0;
  long unsigned int startMils = 0;

  int returnNumber = 0;

  mils = 0;
  startMils = millis();

  while(mils <= (startMils + waitTimeClick)){
      if(digitalRead(buttonPin) == false){
        delay(debounceDelayTime);

        returnNumber += 1;
        returnNumber += checkPress();

        break;
      }
      mils = millis();
    }

    return returnNumber;
}
