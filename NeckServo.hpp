#include <Servo.h>
#include <Arduino.h>

#define delayTime 250

class NeckServo {
  public:
    NeckServo();

    void handleNeckServo();
    void setup();

  protected:
    Servo neckServoX;
    Servo neckServoY;

    int neckYValue;
    int neckXValue;

    bool buttonValue;

    bool lockState;

  private:
    int joystickXPin;
    int joystickYPin;
    int buttonPin;

    int servoXPin;
    int servoYPin;

    void initializePins();
    void setupVariables();
};
