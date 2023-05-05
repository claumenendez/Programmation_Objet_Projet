#include "ir_receiver.hpp"

Receiver::Receiver(byte pin){IrReceiver.begin(pin, ENABLE_LED_FEEDBACK);}

   
void Receiver::processIR(DcMotor * MyMotor) {
  if (IrReceiver.decode()) {
    String ir_code = String(IrReceiver.decodedIRData.command, HEX);
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
    }
    IrReceiver.resume();  
  }
}
