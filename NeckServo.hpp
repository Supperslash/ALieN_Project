#include <Servo.h>
#include <Arduino.h>

#define delayTime 250

class NeckServo {
  public:
    NeckServo();

    void handleNeckServo();
    void setup();

    void lock();

  protected:
    Servo neckServoX;
    Servo neckServoY;

    int neckYValue;
    int neckXValue;

    bool lockState;

  private:
    int joystickXPin;
    int joystickYPin;

    int servoXPin;
    int servoYPin;

    void initializePins();
    void setupVariables();
};
