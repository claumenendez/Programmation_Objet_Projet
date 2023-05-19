#ifndef SERVO_M_HPP 
#define SERVO_M_HPP
#include<Servo.h>

//fonction qui permet d'ajouter 10 degrees au servo moteur 
void upAngle(Servo* MyServo) {
  MyServo->write(MyServo->read() + 10);
}

//fonction qui permet d'enlever 10 degrees au servo moteur 
void downAngle(Servo* MyServo) {
  MyServo->write(MyServo->read() - 10);
}

#endif
