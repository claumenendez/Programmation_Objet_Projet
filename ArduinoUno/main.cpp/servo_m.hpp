#ifndef SERVO_M_HPP 
#define SERVO_M_HPP
#include<Servo.h>
//#include <Serial.h>



class ServoMotor{
  private: 
    int angle;
    int pin;
    Servo *sr;
    
  public:

     ServoMotor(int p){
      this->sr = new Servo();
      this->pin=p;
      this->sr->attach(pin);
      }

     void rotation(int b){
        this->sr->write(0);
        delay(500); 
        Serial.println(b);
        this->sr->write(b); 
        Serial.println("hola");
      }
     
  };
#endif
