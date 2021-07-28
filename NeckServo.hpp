#include <Servo.h>
#include <Arduino.h>

#define delayTime 250

class NeckServo {
  public:
    NeckServo();
    NeckServo(int joystickXPinNew, int joystickYPinNew, int buttonPinNew, int servoXPinNew, int servoYPinNew);

    void handleNeckServo();

  protected:
    Servo neckServoX;
    Servo neckServoY;

    unsigned int neckYValue;
    unsigned int neckXValue;

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
