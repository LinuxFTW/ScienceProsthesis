/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.
 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int open = 0;
int ts = 15; //turn speed
int oc = 0; //open claw
int button1 = 0;
int button2 = 0;

void setup() {
  myservo.attach(7);  // attaches the servo on pin 9 to the servo object
}

void loop() {
 button1 = digitalRead(3);
 button2 = digitalRead(4);
 if (button1 == HIGH) {
  if (oc == 0) {
   myservo.write(180);
   oc = 1;
  }
  }
   if (oc == 1){
    myservo.write(0)
    oc = 0;
    }
   }
  }
  if (button2 == HIGH) {
   if (ts == 15) {
    ts = 1;
   if (ts == 1) {
    ts = 15;
    }
   }
 }
}
