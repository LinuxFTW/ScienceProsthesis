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

void setup() {
  myservo.attach(7);  // attaches the servo on pin 9 to the servo object
  button1 = digitalRead(3);
  button2 = digitalRead(4);
  open = 0;
  fs = 15;
}

void loop() {
 button1 = digitalRead(3);
 button2 = digitalRead(4);
 if (button1 == HIGH) {
  if (open == 0) {
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
     // in steps of 1 degree
     myservo.write(pos);              // tell servo to go to position in variable 'pos'
     delay(fs);  // waits 15ms for the servo to reach the position
     openorclose == 1;
  }
   if (open == 1){
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
     myservo.write(pos);              // tell servo to go to position in variable 'pos'
     delay(fs);                       // waits 15ms for the servo to reach the position
     openorclose == 0;
   
   }
  }
   if (button2 == HIGH) {
    if (fs = 15) {
     fs == 1;
    if (fs == 1) {
     fs == 15
    }
   }
 }
}
