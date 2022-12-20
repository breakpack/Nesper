#include <Servo.h>
Servo ESC;
double joystick = 0;
double val = 0;
void setup() {
  Serial.begin(9600);
  ESC.attach(6,1000,2000);
}
void loop() {
  joystick = analogRead(A0);
  val = map(joystick, 0, 1023, 0, 180);
  Serial.print(joystick);
  Serial.print(" ");
  Serial.println(val);
  ESC.write(val);
}