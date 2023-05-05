#ifndef RECEIVER_HPP 
#define RECEIVER_HPP

//LIBRARIES
#include <IRremote.h>
#include "motor.hpp"


class Receiver {
private:
  
  byte pin;

public:
  IRrecv IrReceiver;
  Receiver(byte pin) : pin(pin) {
    IrReceiver.enableIRIn();
  }

   void begin() {
    IrReceiver.begin(pin, ENABLE_LED_FEEDBACK);
  }

  void processIR(DcMotor* MyMotor) {
      //digitalWrite(PinBuz,LOW);
      Serial.println(digitalRead(10));
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
      } else if (ir_code == "19"){
        digitalWrite(11,HIGH);
        //delay(500);
        
        Serial.println(digitalRead(10));
      }
      
      IrReceiver.resume();
    }
  }
};
#endif
