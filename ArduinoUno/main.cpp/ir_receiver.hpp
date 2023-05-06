#ifndef RECEIVER_HPP 
#define RECEIVER_HPP

//LIBRARIES
#include <IRremote.h>
#include "motor.hpp"
#include <Servo.h>

void upAngle(Servo* MyServo) {
  MyServo->write(MyServo->read() + 10);
}
void downAngle(Servo* MyServo) {
  MyServo->write(MyServo->read() - 10);
}
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

  void processIR(DcMotor* MyMotor,Servo* MyServo1,Servo* MyServo2) {
      //digitalWrite(PinBuz,LOW);
      //Serial.println(digitalRead(10));
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
      }else if (ir_code == "lc"){
        downAngle(MyServo2);
      }
      
      
      IrReceiver.resume();
    }
  }
};
#endif
