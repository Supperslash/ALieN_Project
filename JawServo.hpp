#include <Arduino.h>
#include <Servo.h>


class JawServo{
public:
  JawServo();

  void handleJawServo();

  void setup();

protected:
  Servo jawServo;

  int jawValue;

  void initializePins();

private:
  int audioInputPin;
  
  int servoPin; 
  
};
