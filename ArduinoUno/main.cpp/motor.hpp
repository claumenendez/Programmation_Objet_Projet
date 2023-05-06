#ifndef MYMOTOR_HPP 
#define MYMOTOR_HPP

//LIBRARIES
#include<Servo.h>
#include <Arduino.h>
#include "constants.h"

//definition des PINS MOTOR DC
/*#define PIN_Motor_PWMA 5
#define PIN_Motor_PWMB 6
#define PIN_Motor_BIN_1 8
#define PIN_Motor_AIN_1 7
#define PIN_Motor_STBY 3
#define speed_Max 255

//definition des PINS SERVOS ->peut etre changer et rentrer les pins en protected
#define PIN_Servo1 11
#define PIN_Servo2 10

*/

class Motor{
  public:
    virtual void TournerGauche();
    virtual void TournerDroite();
    virtual void stopMotor();
  };

class DcMotor: public Motor{
   protected:
    int Vitesse;
   public:
   
   //constructors
    DcMotor();
    DcMotor(int s);
      
    //assesors
    void setVitesse(int s);
    int getVitesse();

    //methods
    void TournerGauche();
    void TournerDroite();
    void AllStraight();
    void stopMotor();
    void Demarrer();
  };


/*
class ServoMotor: public Motor{
  protected:
    int angle;
    int pin_servo;
  public:
    Servo * myservo;

    //constructors
    ServoMotor(int p, Servo * sr): pin_servo(p),angle(0), myservo(sr){myservo->attach(pin_servo);}
    
    //assesors
    
    //set angle and get angle
    void setAngle(int a){this->angle=a;}
    int getAngle(){return this->angle;}
    
    //get pin, set pin
    void setPinServo(int p){this->pin_servo=p;myservo->attach(pin_servo);}
    int getPinServo(){return this->pin_servo;}

    //methods
    void Initial_position(){
      setAngle(0);
      UpdateAngle();
    }
    
    void UpdateAngle(){myservo->write(this->getAngle());}
    void TournerGauche(){
        this->setAngle(this->getAngle()+10);
        this->UpdateAngle();
      }
    void TournerDroite(){
        this->setAngle(this->getAngle()-10);
        this->UpdateAngle();
      }
    void stopMotor(){}
    
  };
*/
#endif 
