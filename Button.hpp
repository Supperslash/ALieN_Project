#include <Arduino.h>

#define debounceDelayTime 250
#define waitTimeClick 300

class Button{
  public:
    Button();

    void setup();

    int getPressCount();

  protected:
    int checkPress();

  private:
    int buttonPin;
};
