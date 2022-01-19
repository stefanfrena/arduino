#include <Servo.h> 

Servo servoblau;

void setup(){
  servoblau.attach(8); //Pin 8
}

void loop(){
  turnServo(0);
  turnServo(180);
  turnServo(90);
}

void turnServo(int grad){
  servoblau.write(grad); //Position 2 ansteuern mit dem Winkel 90°
  delay(1000); //Das Programm stoppt für 3 Sekunden
}
