#ifndef RECEIVER_HPP 
#define RECEIVER_HPP

//LIBRARIES
#include <IRremote.h>
#include "motor.hpp"
#include <Servo.h>
#include "servo_m.hpp"
#include "constants.h"

//creation de la classe Receiver qui permet de commander le char  grace a une telecommande IR

class Receiver {
private:
  byte pin;
  IRrecv IrReceiver;
public:
  //constructors
  Receiver(byte pin) : pin(pin) {IrReceiver.enableIRIn();}
  
  //methods
  void begin() {IrReceiver.begin(pin, ENABLE_LED_FEEDBACK);} //permet de initialiser la telecommande
  
  void processIR(DcMotor* MyMotor,Servo* MyServo1,Servo* MyServo2) { //fonction qui permet diriger la base roulante du char grace a la telecommande

    if (IrReceiver.decode()) {
      String ir_code = String(IrReceiver.decodedIRData.command, HEX);
      Serial.println(ir_code);

      if (ir_code == "46") {
        MyMotor->AllStraight();
      } else if (ir_code == "44") {
        MyMotor->TournerGauche();
      } else if (ir_code == "43") {
        MyMotor->TournerDroite();
      } else if (ir_code == "40") {
        MyMotor->stopMotor();
      } else if (ir_code == "16") {
        MyMotor->Demarrer();
      } else if (ir_code == "8"){
        upAngle(MyServo1);
      }else if (ir_code == "c"){
        downAngle(MyServo1);
      }else if (ir_code == "18"){
        upAngle(MyServo2);
      }else if (ir_code == "1c"){
        downAngle(MyServo2);
      }else if (ir_code=="d"){
        digitalWrite(PinLcd,HIGH);
        //analogWrite(PinBuz,255);
        digitalWrite(PinDesactivate,LOW);
      }else if(ir_code=="5e"){
        digitalWrite(PinLcd,LOW);
        digitalWrite(PinDesactivate,HIGH);
        //analogWrite(PinBuz,0);
        //Serial.println("hola");
      }
      
      
      IrReceiver.resume();
    }
  }
};
#endif
