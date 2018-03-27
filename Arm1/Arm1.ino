#include <servo.h>
Servo arm

void setup() {
  // put your setup code here, to run once:
  arm.attatch(9)
  pinMode(4, INPUT)
  pinMode(2, INPUT)
}

void loop() {
  // put your main code here, to run repeatedly:
  button1 = digitalRead(4)
  if (button1 == HIGH) {
    if (armpos == 360) {
      arm.write(0);
    else {
      arm.write(360);
    }
    }
  }
}
